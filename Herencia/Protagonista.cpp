//
// Created by Asus ROG on 16/04/2024.
//

#include "Protagonista.h"

//Constructor por default
Protagonista::Protagonista() : Haki(), Persona(), Fruta(){}

//Constructor por copia
Protagonista::Protagonista(const Protagonista &rhs){}

//Constructor por paramertos
Protagonista::Protagonista(std::string nombre, std::string  tipoDeSangre, int edad, float peso, float altura, std::string tipoDeHaki, std::string nivelDeHaki, std::string control,
                           std::string frutaDelDiablo, std::string tipoDeFrtuta, std::string poderRevelado) : Persona(nombre, tipoDeSangre, edad, peso, altura), Haki(tipoDeHaki, nivelDeHaki, control),
                           Fruta( frutaDelDiablo, tipoDeFrtuta, poderRevelado) { }