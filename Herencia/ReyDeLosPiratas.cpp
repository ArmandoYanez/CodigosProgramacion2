//
// Created by Asus ROG on 16/04/2024.
//

#include "ReyDeLosPiratas.h"

// Contructor default
ReyDeLosPiratas::ReyDeLosPiratas() : Yonkou(){
    hakiDeArmadura = false;
    hakiDeVision = false;
    hakiDelRey = false;
}

//Constructor por copia
ReyDeLosPiratas::ReyDeLosPiratas(const ReyDeLosPiratas &rhs) : Yonkou(){
    this->hakiDeArmadura = rhs.hakiDeArmadura;
    this->hakiDeVision = rhs.hakiDeVision;
    this->hakiDelRey = rhs.hakiDelRey;
}

//Constructor por paramertos
ReyDeLosPiratas::ReyDeLosPiratas(std::string nombre, std::string  tipoDeSangre, int edad, float peso, float altura, std::string marDeNacimiento, std::string rolDeTrpulacion, std::string frutaDelDiablo, std::string barcoPrincipal, float recompenza
        ,bool hakiDeArmadura, bool hakiDeVision, bool hakiDelRey) : Yonkou(nombre, tipoDeSangre, edad, peso, altura,marDeNacimiento,rolDeTrpulacion, frutaDelDiablo, barcoPrincipal, recompenza){
    this->hakiDeArmadura = hakiDeArmadura;
    this->hakiDeVision = hakiDeVision;
    this->hakiDelRey = hakiDelRey;
}

//Getters
bool ReyDeLosPiratas::GethakiDeArmadura() const{
    return hakiDeArmadura;
}

bool ReyDeLosPiratas::GethakiDeVision() const{
    return hakiDeVision;
}

bool ReyDeLosPiratas::GethakiDelRey() const{
    return hakiDelRey;
}

//Setters
void ReyDeLosPiratas::SethakiDeArmadura(bool NhakiDeArmadura){
    this -> hakiDeArmadura = NhakiDeArmadura;
}

void ReyDeLosPiratas::SethakiDeVision(bool NhakiDeVision){
    this -> hakiDeVision = NhakiDeVision;
}

void ReyDeLosPiratas::SethakiDelRey(bool NhakiDelRey) {
    this -> hakiDelRey = NhakiDelRey;
}

