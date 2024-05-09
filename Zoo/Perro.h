//
// Created by Asus ROG on 30/04/2024.
//

#ifndef UNTITLED_PERRO_H
#define UNTITLED_PERRO_H
#include "Animal.h"

class Perro : public Animal{
public:
    //Constructor default implicito.
    Perro();

    //Constructor Explicito.
    Perro(std::string nombre, int edad, float altura, float peso,std::string raza, std::string colorDePelaje);

    // Constuctor de copia (Copia en base a otro objeto).
    Perro(const Perro &rhs);

    //Destructor.
    ~Perro();

    //Sonido animal
    void SonidoAnimal() override;

private:
    std::string raza;
    std::string  colorDePelaje;

};


#endif //UNTITLED_PERRO_H
