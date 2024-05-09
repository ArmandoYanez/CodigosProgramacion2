//
// Created by Armando Yañez on 11/04/2024.
//

#ifndef PROGRAMAS_YONKOU_H
#define PROGRAMAS_YONKOU_H
#include "Pirata.h"

//Herencia
class Yonkou : public Pirata{
public:
    //Constructor default implicito
    Yonkou();

    //Constructor Explicitp
    Yonkou(std::string nombre, std::string  tipoDeSangre, int edad, float peso, float altura, std::string MarDeNacimiento, std::string rolDeTrpulacion,
           std::string frutaDelDiablo, std::string barcoPrincipal, float recompenza);

    // Constuctor de copia (Copia en base a otro objeto)
    Yonkou(const Yonkou &rhs);

    //Destructor
    ~Yonkou() = default;

    //Getters
    std::string GetFrutaDelDiablo() const;
    std::string GetbarcoPrincipal() const;
    float Getrecompenza() const;

    //Setters
    void SetFrutaDelDiablo(std::string NFrutaDelDiablo);
    void SetbarcoPrincipal(std::string NbarcoPrincipal);
    void Setrecompenza(float Nrecompenza);

private:
    std::string nombre;
    std::string tipoDeSangre;
    int edad;
    float peso;
    float altura;

    std::string marDeNacimiento;
    std::string rolDeTripulacion;

    //Yonkou
    std::string frutaDelDiablo;
    std::string barcoPrincipal;
    float recompenza;

};


#endif //PROGRAMAS_YONKOU_H
