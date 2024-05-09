//
// Created by Asus ROG on 30/04/2024.
//

#include "Ajolote.h"
#include <iostream>

// Contructor default
Ajolote::Ajolote() : Animal(){
    this-> color = "N/A";
    this->  etapaEvolutiva = "N/A";
}

//Constructor por copia
Ajolote::Ajolote(const Ajolote &rhs): Animal(rhs){
    this->color = rhs.color;
    this->etapaEvolutiva = rhs.etapaEvolutiva;
}

//Constructor por paramertos
Ajolote::Ajolote(std::string nombre, int edad, float altura, float peso, std::string color, std::string etapaEvolutiva): Animal(nombre, edad, altura, peso){
    this->color = color;
    this->etapaEvolutiva = etapaEvolutiva;
}

Ajolote::~Ajolote() {

}

void Ajolote::SonidoAnimal(){
    std::cout<<"Gemido"<<std::endl;
}