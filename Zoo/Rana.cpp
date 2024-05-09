//
// Created by Asus ROG on 30/04/2024.
//

#include "Rana.h"
#include <iostream>

// Contructor default
Rana::Rana() : Animal(){
    this-> venenosa = false;
    this->  habitad = "N/A";
}

//Constructor por copia
Rana::Rana(const Rana &rhs): Animal(rhs){
    this->venenosa = rhs.venenosa;
    this->habitad = rhs.habitad;
}

//Constructor por paramertos
Rana::Rana(std::string nombre, int edad, float altura, float peso, bool venenosa, std::string habitad): Animal(nombre, edad, altura, peso){
    this->venenosa = venenosa;
    this->habitad = habitad;
}

//Destructor
Rana::~Rana() {

}

void Rana::SonidoAnimal(){
    std::cout<<"croac"<<std::endl;
}