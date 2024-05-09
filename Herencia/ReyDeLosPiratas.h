//
// Created by Asus ROG on 16/04/2024.
//

#ifndef HERENCIA_REYDELOSPIRATAS_H
#define HERENCIA_REYDELOSPIRATAS_H
#include "Yonkou.h"

class ReyDeLosPiratas : public Yonkou{
public:
//Constructor default implicito
    ReyDeLosPiratas();

    //Constructor Explicito
    ReyDeLosPiratas(std::string nombre, std::string  tipoDeSangre, int edad, float peso, float altura, std::string MarDeNacimiento, std::string rolDeTrpulacion,
            std::string frutaDelDiablo, std::string barcoPrincipal, float recompenza,bool hakiDeArmadura, bool hakiDeVision, bool hakiDelRey);

    // Constuctor de copia (Copia en base a otro objeto)
    ReyDeLosPiratas(const ReyDeLosPiratas &rhs);

    //Destructor
    ~ReyDeLosPiratas() = default;

    //Getters
    bool GethakiDeArmadura() const;
    bool GethakiDeVision() const;
    bool GethakiDelRey() const;

    //Setters
    void SethakiDeArmadura(bool NhakiDeArmadura);
    void SethakiDeVision(bool NhakiDeVision);
    void SethakiDelRey(bool NhakiDelRey);

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

    //ReyDeLosPiratas
    bool hakiDeArmadura;
    bool hakiDeVision;
    bool hakiDelRey;
};


#endif //HERENCIA_REYDELOSPIRATAS_H
