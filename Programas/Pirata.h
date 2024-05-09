//
// Created by Armando Yañez on 09/04/2024.
//

#ifndef PROGRAMAS_PIRATA_H
#define PROGRAMAS_PIRATA_H
#include "Persona.h"


//Herencia
class Pirata : public Persona{
public:
    //Constructor default implicito
    Pirata();

    //Constructor Explicitp
    Pirata(std::string nombre, std::string  tipoDeSangre, int edad, float peso, float altura, std::string MarDeNacimiento, std::string rolDeTrpulacion);

    // Constuctor de copia (Copia en base a otro objeto)
    Pirata(const Pirata &rhs);

    //Destructor
    ~Pirata() = default;

    //Getters
    std::string GetMarDeNacimiento() const;
    std::string GetrolDeTripulacion() const;

    //Setters
    void SetMarDeNacimiento(std::string NMarDeNacimiento);
    void SetrolDeTripulacion(std::string Nespecialidad);

private:
    std::string nombre;
    std::string tipoDeSangre;
    int edad;
    float peso;
    float altura;

    std::string marDeNacimiento;
    std::string rolDeTripulacion;

};

#endif //PROGRAMAS_PIRATA_H
