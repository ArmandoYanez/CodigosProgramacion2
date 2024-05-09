//
// Created by Asus ROG on 30/04/2024.
//

#ifndef UNTITLED_GATO_H
#define UNTITLED_GATO_H
#include "Animal.h"

class Gato : public Animal {
public:
    //Constructor default implicito.
    Gato();

    //Constructor Explicito.
    Gato(std::string nombre, int edad, float altura, float peso, std::string tipoDePelaje, std::string personalidad);

    // Constuctor de copia (Copia en base a otro objeto).
    Gato(const Gato &rhs);

    //Destructor.
    ~Gato();

    //Sonido animal
    void SonidoAnimal() override;

private:
    std::string tipoDePelaje;
    std::string personalidad;
};


#endif //UNTITLED_GATO_H
