//
// Created by Armando Yañez on 16/04/2024.
//

#include "Haki.h"
// Contructor default
Haki::Haki(){
    this->tipoDeHaki = "N/A";
    this->nivelDeHaki = "N/A";
    this->control = "N/A";
}

// Constructor por parametros
Haki::Haki(std::string tipoDeHaki, std::string nivelDeHaki, std::string control) {
    this->tipoDeHaki = tipoDeHaki;
    this->nivelDeHaki = nivelDeHaki;
    this->control = control;
}

// Constructor por copia
Haki::Haki(const Haki &rhs) {
    tipoDeHaki = rhs.tipoDeHaki;
    nivelDeHaki = rhs.nivelDeHaki;
    control = rhs.control;
}

//Getters
std::string Haki::GettipoDeHaki() const{
    return tipoDeHaki;
}

std::string Haki::GetnivelDeHaki() const{
    return nivelDeHaki;
}

std::string Haki::Getcontrol() const{
    return control;
}


//Setters
void Haki::SetTipoDeHaki(std::string NtipoDeHaki){
    this -> tipoDeHaki = NtipoDeHaki;
}

void Haki::SetNivelDeHaki(std::string NnivelDeHaki){
    this -> nivelDeHaki = NnivelDeHaki;
}

void Haki::SetControl(std::string Ncontrol){
    this -> control = Ncontrol;
}
