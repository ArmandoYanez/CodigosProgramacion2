//
// Created by Armando Yanez on 23/03/2024.
//

#include "CharCell.h"

// Contructor default
CharCell::CharCell(){
    this->Valor=' ';
}

// Constructor por parametros
CharCell::CharCell(char Valor) {
    this->Valor=Valor;
}

// Constructor por copia
CharCell::CharCell(const CharCell &rhs) {
    Valor = rhs.Valor;
}


//Sobrecarga de Operadores de asignación "="
// Sobrecarga de operador "="
CharCell &CharCell::operator= (const CharCell &rhs){
    if(Valor != rhs.Valor){
        this->Valor = rhs.Valor;
    }
    return *this;
}
// Sobrecarga de operador "=" Primitivo
CharCell &CharCell::operator= (char ValorPrimitivo){
    if(Valor != Valor){
        this->Valor = Valor;
    }
    return *this;
}



//Sobrecarga de Operadores aritméticos "+-*/%"
//Sobrecarga de operador "+"
CharCell &CharCell::operator+(int ValorPrimitivo){
    this->Valor = Valor + ValorPrimitivo;
    return *this;
}
// Sobrecarga de operador "-"
CharCell &CharCell::operator-(int ValorPrimitivo){
    this->Valor = Valor - ValorPrimitivo;
    return *this;
}



//Sobrecarga de Operadores de comparacion ">,<,==,=>,=<,!="
//Sobrecarga de operador ">"
bool CharCell::operator>(const CharCell &rhs) const {
    return Valor > rhs.Valor;
}
// Sobrecarga de operador ">" Primitivo
bool CharCell::operator>(char ValorPrimitivo) const {
    return Valor > ValorPrimitivo;
}

//Sobrecarga de operador "<"
bool CharCell::operator<(const CharCell &rhs) const {
    return Valor < rhs.Valor;
}
//Sobrecarga de operador "<" Primitivo
bool CharCell::operator<(char ValorPrimitivo) const {
    return Valor < ValorPrimitivo;
}

//Sobrecarga de operador "=="
bool CharCell::operator==(const CharCell &rhs) const {
    return Valor == rhs.Valor;
}
//Sobrecarga de operador "==" Primirivo
bool CharCell::operator==(char ValorPrimitivo) const {
    return Valor == ValorPrimitivo;
}

//Sobrecarga de operador "=>"
bool CharCell::operator>=(const CharCell &rhs) const {
    return Valor >= rhs.Valor;
}
//Sobrecarga de operador "=>" Primitivo
bool CharCell::operator>=(char ValorPrimitivo) const {
    return Valor >= ValorPrimitivo;
}

//Sobrecarga de operador "=<"
bool CharCell::operator<=(const CharCell &rhs) const {
    return Valor <= rhs.Valor;
}
//Sobrecarga de operador "=<" Primitivo
bool CharCell::operator<=(char ValorPrimitivo) const {
    return Valor <= ValorPrimitivo;
}

//Sobrecarga de operador "!="
bool CharCell::operator!=(const CharCell &rhs) const {
    return Valor != rhs.Valor;
}
//Sobrecarga de operador "!="
bool CharCell::operator!=(char ValorPrimitivo) const {
    return Valor != ValorPrimitivo;
}