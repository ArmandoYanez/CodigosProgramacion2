//
// Created by Asus ROG on 30/04/2024.
//

#ifndef UNTITLED_RANA_H
#define UNTITLED_RANA_H
#include "Animal.h"

class Rana : public Animal{
public:
    //Constructor default implicito.
    Rana();

    //Constructor Explicito.
    Rana(std::string nombre, int edad, float altura, float peso, bool venenosa, std::string habitad);

    // Constuctor de copia (Copia en base a otro objeto).
    Rana(const Rana &rhs);

    //Destructor.
    ~Rana();

    //Sonido animal
    void SonidoAnimal() override;

private:
    bool venenosa;
    std::string habitad;
};


#endif //UNTITLED_RANA_H
