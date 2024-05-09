//
// Created by Armando Yañez on 16/04/2024.
//

#include "Fruta.h"
// Contructor default
Fruta::Fruta(){
    this->frutaDelDiablo = "N/A";
    this->tipoDeFrtuta = "N/A";
    this->poderRevelado = "N/A";
}

// Constructor por parametros
Fruta::Fruta(std::string frutaDelDiablo, std::string tipoDeFrtuta, std::string poderRevelado) {
    this->frutaDelDiablo = frutaDelDiablo;
    this->tipoDeFrtuta = tipoDeFrtuta;
    this->poderRevelado = poderRevelado;
}

// Constructor por copia
Fruta::Fruta(const Fruta &rhs) {
    frutaDelDiablo = rhs.frutaDelDiablo;
    tipoDeFrtuta = rhs.tipoDeFrtuta;
    poderRevelado = rhs.poderRevelado;
}

//Getters
std::string Fruta::GetfrutaDelDiablo() const{
    return frutaDelDiablo;
}

std::string Fruta::GettipoDeFrtuta() const{
    return tipoDeFrtuta;
}

std::string Fruta::GetpoderRevelado() const{
    return poderRevelado;
}


//Setters
void Fruta::SetfrutaDelDiablo(std::string NfrutaDelDiablo){
    this -> frutaDelDiablo = NfrutaDelDiablo;
}

void Fruta::SettipoDeFrtuta(std::string NtipoDeFrtuta){
    this -> tipoDeFrtuta = NtipoDeFrtuta;
}

void Fruta::SetpoderRevelado(std::string NpoderRevelado){
    this -> poderRevelado = NpoderRevelado;
}


