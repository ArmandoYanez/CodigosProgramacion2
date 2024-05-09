//
// Created by Asus ROG on 30/04/2024.
//

#include "Tortuga.h"
#include <iostream>

// Contructor default
Tortuga::Tortuga() : Animal(){
    this-> colorDeCaparazon = "N/A";
    this->  tipoDeAgua = "N/A";
}

//Constructor por copia
Tortuga::Tortuga(const Tortuga &rhs): Animal(rhs){
    this->colorDeCaparazon = rhs.colorDeCaparazon;
    this->tipoDeAgua = rhs.tipoDeAgua;
}

//Constructor por paramertos
Tortuga::Tortuga(std::string nombre, int edad, float altura, float peso,  std::string colorDeCaparazon, std::string tipoDeAgua): Animal(nombre, edad, altura, peso){
    this->colorDeCaparazon = colorDeCaparazon;
    this->tipoDeAgua = tipoDeAgua;
}

//Destructor
Tortuga::~Tortuga() {

}

void Tortuga::SonidoAnimal(){
    std::cout<<"gruñido"<<std::endl;
}