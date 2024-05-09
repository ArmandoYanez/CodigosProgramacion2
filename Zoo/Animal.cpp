//
// Created by Asus ROG on 30/04/2024.
//

#include "Animal.h"
#include <iostream>

// Contructor default
Animal::Animal(){
    this->nombre = "N/A";
    this->edad = 0;
    this->altura = 0;
    this->peso = 0;
}

//Constructor por copia
Animal::Animal(const Animal &rhs){
    this->nombre = rhs.nombre;
    this->edad = rhs.edad;
    this->altura = rhs.altura;
    this->peso = rhs.peso;
}

//Destructor
Animal::~Animal() {

}

//Constructor por paramertos
Animal::Animal(std::string nombre, int edad, float altura, float peso){
    this->nombre = nombre;
    this->edad = edad;
    this->altura = altura;
    this->peso = peso;
}

void Animal::SonidoAnimal(){
    std::cout<<"Sonido animal"<<std::endl;
}
