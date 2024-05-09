//
// Created by Asus ROG on 30/04/2024.
//

#ifndef UNTITLED_CABALLO_H
#define UNTITLED_CABALLO_H
#include "Animal.h"

class Caballo : public Animal {
public:
    //Constructor default implicito.
    Caballo();

    //Constructor Explicito.
    Caballo(std::string nombre, int edad, float altura, float peso, float capacidadDeCarga, float velocidadMax);

    // Constuctor de copia (Copia en base a otro objeto).
    Caballo(const Caballo &rhs);

    //Destructor.
    ~Caballo();

    //Sonido animal
    void SonidoAnimal() override;

private:
    float capacidadDeCarga;
    float velocidadMax;
};


#endif //UNTITLED_CABALLO_H
