//
// Created by Asus ROG on 09/04/2024.
//

#include "Persona.h"
#include <iostream>

// Contructor default
Persona::Persona(){
    this->nombre = "N/A";
    this->tipoDeSangre = "N/A";
    this->edad = 0;
    this->peso = 0;
    this->altura = 0;
}

// Constructor por parametros
Persona::Persona(std::string nombre, std::string  tipoDeSangre, int edad, float peso, float altura) {
    this->nombre = nombre;
    this->tipoDeSangre = tipoDeSangre;
    this->edad = edad;
    this->peso = peso;
    this->altura = altura;
}

// Constructor por copia
Persona::Persona(const Persona &rhs) {
    nombre = rhs.nombre;
    tipoDeSangre = rhs.tipoDeSangre;
    edad = rhs.edad;
    peso = rhs.peso;
    altura = rhs.altura;
}

//Getters
std::string Persona::GetNombre() const{
    return nombre;
}

std::string Persona::GetTipoDeSangre() const{
    return tipoDeSangre;
}

int Persona::GetEdad() const{
    return edad;
}

float Persona::GetPeso() const{
    return peso;
}

float Persona::GetAltura() const{
    return altura;
}

//Setters
void Persona::SetNombre(std::string Nnombre){
    this -> nombre = Nnombre;
}

void Persona::SetTipoDeSangre(std::string NtipoDeSangre){
    this -> tipoDeSangre = NtipoDeSangre;
}

void Persona::SetEdad(int Nedad){
    this -> edad = Nedad;
}

void Persona::SetPeso(float Npeso){
    this -> peso = Npeso;
}

void Persona::SetAltura(float Naltura){
    this -> altura = Naltura;
}

//Funciones presentarse
void Persona::Presentarse() {
    std::cout<<"Hola mi nombre es "<< nombre <<" y tengo "<< edad <<" anios";
}