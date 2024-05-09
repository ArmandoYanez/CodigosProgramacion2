//
// Created by Asus ROG on 30/04/2024.
//

#include "Caballo.h"
#include <iostream>

// Contructor default
Caballo::Caballo() : Animal(){
    this-> capacidadDeCarga = 0;
    this->  velocidadMax = 0;
}

//Constructor por copia
Caballo::Caballo(const Caballo &rhs): Animal(rhs){
    this->capacidadDeCarga = rhs.capacidadDeCarga;
    this->velocidadMax = rhs.velocidadMax;
}

//Constructor por paramertos
Caballo::Caballo(std::string nombre, int edad, float altura, float peso, float capacidadDeCarga, float velocidadMax): Animal(nombre, edad, altura, peso){
    this->capacidadDeCarga = capacidadDeCarga;
    this->velocidadMax = velocidadMax;
}

//Destructor
Caballo::~Caballo() {

}

void Caballo::SonidoAnimal(){
    std::cout<<"relinchar"<<std::endl;
}