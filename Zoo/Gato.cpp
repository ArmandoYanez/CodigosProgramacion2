//
// Created by Asus ROG on 30/04/2024.
//

#include "Gato.h"
#include <iostream>

// Contructor default
Gato::Gato() : Animal(){
    this-> tipoDePelaje = "N/A";
    this->  personalidad = "N/A";
}

//Constructor por copia
Gato::Gato(const Gato &rhs): Animal(rhs){
    this->tipoDePelaje = rhs.tipoDePelaje;
    this->personalidad = rhs.personalidad;
}

//Constructor por paramertos
Gato::Gato(std::string nombre, int edad, float altura, float peso, std::string tipoDePelaje, std::string personalidad): Animal(nombre, edad, altura, peso){
    this->tipoDePelaje = tipoDePelaje;
    this->personalidad = personalidad;
}

//Destructor
Gato::~Gato() {

}

void Gato::SonidoAnimal(){
    std::cout<<"miao"<<std::endl;
}