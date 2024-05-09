//
// Created by Armando Yañez on 11/04/2024.
//

#include "Yonkou.h"

// Contructor default
Yonkou::Yonkou() : Pirata(){
    marDeNacimiento = "N/A";
    rolDeTripulacion = "N/A";
}

//Constructor por copia
Yonkou::Yonkou(const Yonkou &rhs) : Pirata(rhs){
    this->frutaDelDiablo = rhs.frutaDelDiablo;
    this->barcoPrincipal = rhs.barcoPrincipal;
    this->recompenza = rhs.recompenza;
}

//Constructor por paramertos
Yonkou::Yonkou(std::string nombre, std::string  tipoDeSangre, int edad, float peso, float altura, std::string marDeNacimiento, std::string rolDeTrpulacion, std::string frutaDelDiablo, std::string barcoPrincipal, float recompenza):
Pirata(nombre, tipoDeSangre, edad, peso, altura,marDeNacimiento,rolDeTrpulacion){
    this->frutaDelDiablo = frutaDelDiablo;
    this->barcoPrincipal = barcoPrincipal;
    this->recompenza = recompenza;
}

//Getters
std::string Yonkou::GetFrutaDelDiablo() const{
    return frutaDelDiablo;
}

std::string Yonkou::GetbarcoPrincipal() const{
    return barcoPrincipal;
}

float Yonkou::Getrecompenza() const{
    return recompenza;
}

//Setters
void Yonkou::SetFrutaDelDiablo(std::string NFrutaDelDiablo){
    this -> frutaDelDiablo = NFrutaDelDiablo;
}

void Yonkou::SetbarcoPrincipal(std::string NbarcoPrincipal){
    this -> barcoPrincipal = NbarcoPrincipal;
}

void Yonkou::Setrecompenza(float Nrecompenza) {
    this -> recompenza = Nrecompenza;
}

