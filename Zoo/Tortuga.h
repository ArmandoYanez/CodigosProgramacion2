//
// Created by Asus ROG on 30/04/2024.
//

#ifndef UNTITLED_TORTUGA_H
#define UNTITLED_TORTUGA_H
#include "Animal.h"

class Tortuga : public Animal{
public:
    //Constructor default implicito.
    Tortuga();

    //Constructor Explicito.
    Tortuga(std::string nombre, int edad, float altura, float peso,  std::string colorDeCaparazon, std::string tipoDeAgua);

    // Constuctor de copia (Copia en base a otro objeto).
    Tortuga(const Tortuga &rhs);

    //Destructor.
    ~Tortuga();

    //Sonido animal
    void SonidoAnimal() override;

private:
    std::string colorDeCaparazon;
    std::string tipoDeAgua;
};


#endif //UNTITLED_TORTUGA_H
