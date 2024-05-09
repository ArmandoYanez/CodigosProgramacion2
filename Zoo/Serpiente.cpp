//
// Created by Asus ROG on 30/04/2024.
//

#include "Serpiente.h"
#include <iostream>

// Contructor default
Serpiente::Serpiente() : Animal(){
    this-> colorPatron = "N/A";
    this->  especie = "N/A";
}

//Constructor por copia
Serpiente::Serpiente(const Serpiente &rhs): Animal(rhs){
    this->colorPatron = rhs.colorPatron;
    this->especie = rhs.especie;
}

//Constructor por paramertos
Serpiente::Serpiente(std::string nombre, int edad, float altura, float peso, bool venenosa, std::string habitad): Animal(nombre, edad, altura, peso){
    this->colorPatron = colorPatron;
    this->especie = especie;
}


//Destructor
Serpiente::~Serpiente() {

}

void Serpiente::SonidoAnimal(){
    std::cout<<"Sssss"<<std::endl;
}