//
// Created by Asus ROG on 09/04/2024.
//

#ifndef PROGRAMAS_PERSONA_H
#define PROGRAMAS_PERSONA_H

#include <string>

class Persona {
public:

    //Constructor default implicito
    Persona();

    //Constructor Explicitp
    Persona(std::string nombre, std::string  tipoDeSangre, int edad, float peso, float altura);

    // Constuctor de copia (Copia en base a otro objeto)
    Persona(const Persona &rhs);

    //Destructor
    //Para que puedan ejecturase en clases hijas con variaciones.
    virtual ~Persona() = default;

    //Getters
    std::string GetNombre() const;

    std::string GetTipoDeSangre() const;

    int GetEdad() const;

    float GetPeso() const;

    float GetAltura() const;


    //Setters
    void SetNombre(std::string Nnombre);

    void SetTipoDeSangre(std::string NtipoDeSangre);

    void SetEdad(int Nedad);

    void SetPeso(float Npeso);

    void SetAltura(float Naltura);


    //Funcion presentarse
    virtual void Presentarse();

private:
    std::string nombre;
    std::string tipoDeSangre;
    int edad;
    float peso;
    float altura;
};

#endif //PROGRAMAS_PERSONA_H
