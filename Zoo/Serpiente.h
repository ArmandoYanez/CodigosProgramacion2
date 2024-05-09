//
// Created by Asus ROG on 30/04/2024.
//

#ifndef UNTITLED_SERPIENTE_H
#define UNTITLED_SERPIENTE_H
#include "Animal.h"

class Serpiente : public Animal{
public:
    //Constructor default implicito.
    Serpiente();

    //Constructor Explicito.
    Serpiente(std::string nombre, int edad, float altura, float peso, bool venenosa, std::string habitad);

    // Constuctor de copia (Copia en base a otro objeto).
    Serpiente(const Serpiente &rhs);

    //Destructor.
    ~Serpiente();

    //Sonido animal
    void SonidoAnimal() override;

private:
    std::string colorPatron;
    std::string especie;
};


#endif //UNTITLED_SERPIENTE_H
