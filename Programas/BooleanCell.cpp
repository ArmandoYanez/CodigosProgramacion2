//
// Created by Armando Yañez on 23/03/2024.
//

#include "BooleanCell.h"
// Contructor default
BooleanCell::BooleanCell(){
    this->Valor=false;
}

// Constructor por parametros
BooleanCell::BooleanCell(bool Valor) {
    this->Valor=Valor;
}

// Constructor por copia
BooleanCell::BooleanCell(const BooleanCell &rhs) {
    Valor = rhs.Valor;
}



//Sobrecarga de Operadores de asignación "="
//Sobrecarga de operador "="
BooleanCell &BooleanCell::operator= (const BooleanCell &rhs){
    if(Valor != rhs.Valor){
        this->Valor = rhs.Valor;
    }
    return *this;
}
// Sobrecarga de operador "=" Primitivo
BooleanCell &BooleanCell::operator= (bool ValorPrimitivo){
    if(Valor != Valor){
        this->Valor = Valor;
    }
    return *this;
}



//Sobrecarga de Operadores aritméticos "+-*/%"

// Sobrecarga de operador "-"
BooleanCell &BooleanCell::operator*(const BooleanCell &rhs){
    this->Valor =  Valor * rhs.Valor;
    return *this;
}
// Sobrecarga de operador "-" Primitivo
BooleanCell &BooleanCell::operator*(bool ValorPrimitivo){
    this->Valor =  Valor * ValorPrimitivo;
    return *this;
}



//Sobrecarga de Operadores de comparacion ">,<,==,=>,=<,!="
//Sobrecarga de operador "=="
bool BooleanCell::operator==(const BooleanCell &rhs) const {
    return Valor == rhs.Valor;
}
//Sobrecarga de operador "==" Primirivo
bool BooleanCell::operator==(bool ValorPrimitivo) const {
    return Valor == ValorPrimitivo;
}

//Sobrecarga de operador "!="
bool BooleanCell::operator!=(const BooleanCell &rhs) const {
    return Valor != rhs.Valor;
}
//Sobrecarga de operador "!="
bool BooleanCell::operator!=(bool ValorPrimitivo) const {
    return Valor != ValorPrimitivo;
}