//
// Created by Asus ROG on 30/04/2024.
//

#ifndef UNTITLED_ANIMAL_H
#define UNTITLED_ANIMAL_H
#include <string>

class Animal {
public:
    //Constructor default implicito
    Animal();

    //Constructor Explicitp
    Animal(std::string nombre, int edad, float altura, float peso);

    // Constuctor de copia (Copia en base a otro objeto)
    Animal(const Animal &rhs);

    //Destructor
    //Para que puedan ejecturase en clases hijas con variaciones.
    virtual ~Animal();

    //Sonido animal
    virtual void SonidoAnimal();

private:
std::string nombre;
int edad;
float altura;
float peso;
};


#endif //UNTITLED_ANIMAL_H
