//
// Created by Armando Yañez on 09/04/2024.
//

#include "Pirata.h"

// Contructor default
Pirata::Pirata() : Persona(){
    marDeNacimiento = "N/A";
    rolDeTripulacion = "N/A";
}

//Constructor por copia
Pirata::Pirata(const Pirata &rhs) : Persona(rhs){
    this->marDeNacimiento = rhs.marDeNacimiento;
    this->rolDeTripulacion = rhs.rolDeTripulacion;
}

//Constructor por paramertos
Pirata::Pirata(std::string nombre, std::string  tipoDeSangre, int edad, float peso, float altura, std::string marDeNacimiento, std::string rolDeTrpulacion): Persona(nombre, tipoDeSangre, edad, peso, altura){
    this->marDeNacimiento = marDeNacimiento;
    this->rolDeTripulacion = rolDeTripulacion;
}

//Getters
std::string Pirata::GetMarDeNacimiento() const{
    return marDeNacimiento;
}

std::string Pirata::GetrolDeTripulacion() const{
    return rolDeTripulacion;
}

//Setters
void Pirata::SetMarDeNacimiento(std::string NMarDeNacimiento){
    this -> marDeNacimiento = NMarDeNacimiento;
}

void Pirata::SetrolDeTripulacion(std::string Nespecialidad){
    this -> rolDeTripulacion = Nespecialidad;
}