//
// Created by Asus ROG on 30/04/2024.
//

#include "Perro.h"
#include <iostream>

// Contructor default
Perro::Perro() : Animal(){
    this-> raza = "N/A";
    this->  colorDePelaje = "N/A";
}

//Constructor por copia
Perro::Perro(const Perro &rhs): Animal(rhs){
    this->raza = rhs.raza;
    this->colorDePelaje = rhs.colorDePelaje;
}

//Constructor por paramertos
Perro::Perro(std::string nombre, int edad, float altura, float peso, std::string raza, std::string colorDePelaje): Animal(nombre, edad, altura, peso){
    this->raza = raza;
    this->colorDePelaje = colorDePelaje;
}

//Destructor
Perro::~Perro() {

}


void Perro::SonidoAnimal(){
    std::cout<<"guaf"<<std::endl;
}