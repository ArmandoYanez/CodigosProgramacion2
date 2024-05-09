//
// Created by Asus ROG on 30/04/2024.
//

#ifndef UNTITLED_AJOLOTE_H
#define UNTITLED_AJOLOTE_H
#include "Animal.h"

class Ajolote : public Animal{
public:
    //Constructor default implicito.
    Ajolote();

    //Constructor Explicito.
    Ajolote(std::string nombre, int edad, float altura, float peso, std::string color, std::string etapaEvolutiva);

    // Constuctor de copia (Copia en base a otro objeto).
    Ajolote(const Ajolote &rhs);

    //Destructor.
    ~Ajolote();

    //Sonido animal
    void SonidoAnimal() override;

private:
    std::string color;
    std::string etapaEvolutiva;
};


#endif //UNTITLED_AJOLOTE_H
