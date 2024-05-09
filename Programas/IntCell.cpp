//
// Created by Armando Yañez on 23/03/2024.
//

#include "IntCell.h"
#include <cmath>

// Contructor default
IntCell::IntCell(){
    this->Valor=0;
}

// Constructor por parametros
IntCell::IntCell(int Valor) {
    this->Valor=Valor;
}

// Constructor por copia
IntCell::IntCell(const IntCell &rhs) {
    Valor = rhs.Valor;
}


//Sobrecarga de Operadores de asignación "="
// Sobrecarga de operador "="
IntCell &IntCell::operator= (const IntCell &rhs){
    if(Valor != rhs.Valor){
        this->Valor = rhs.Valor;
    }
    return *this;
}
// Sobrecarga de operador "=" Primitivo
IntCell &IntCell::operator= (int ValorPrimitivo){
    if(Valor != Valor){
        this->Valor = Valor;
    }
    return *this;
}



//Sobrecarga de Operadores aritméticos "+-*/%"
// Sobrecarga de operador "+"
IntCell &IntCell::operator+(const IntCell &rhs){
    this->Valor =  Valor + rhs.Valor;
    return *this;
}
// Sobrecarga de operador "+" Primitivo
IntCell &IntCell::operator+(int ValorPrimitivo){
    this->Valor =  Valor + ValorPrimitivo;
    return *this;
}

// Sobrecarga de operador "-"
IntCell &IntCell::operator-(const IntCell &rhs){
    this->Valor =  Valor - rhs.Valor;
    return *this;
}
// Sobrecarga de operador "-" Primitivo
IntCell &IntCell::operator-(int ValorPrimitivo){
    this->Valor =  Valor - ValorPrimitivo;
    return *this;
}

// Sobrecarga de operador "*"
IntCell &IntCell::operator*(const IntCell &rhs){
    this->Valor =  Valor * rhs.Valor;
    return *this;
}
// Sobrecarga de operador "*" Primitivo
IntCell &IntCell::operator*(int ValorPrimitivo){
    this->Valor =  Valor * ValorPrimitivo;
    return *this;
}

// Sobrecarga de operador "/"
IntCell &IntCell::operator/(const IntCell &rhs){
    this->Valor =  Valor / rhs.Valor;
    return *this;
}
// Sobrecarga de operador "/" Primitivo
IntCell &IntCell::operator/(int ValorPrimitivo){
    this->Valor =  Valor / ValorPrimitivo;
    return *this;
}

// Sobrecarga de operador "%"
IntCell IntCell::operator%(const IntCell &rhs){
    int cociente = std::floor(Valor / rhs.Valor);
    int residuo = Valor - cociente * rhs.Valor;
    return  IntCell(residuo);
}
// Sobrecarga de operador "%" Primitivo
IntCell IntCell::operator%(int ValorPrimitivo){
    int cociente = std::floor(Valor / ValorPrimitivo);
    int residuo = Valor - cociente * ValorPrimitivo;
    return  IntCell(residuo);
}



//Sobrecarga de Operadores de comparacion ">,<,==,=>,=<,!="
//Sobrecarga de operador ">"
bool IntCell::operator>(const IntCell &rhs) const {
    return Valor > rhs.Valor;
}
// Sobrecarga de operador ">" Primitivo
bool IntCell::operator>(int ValorPrimitivo) const {
    return Valor > ValorPrimitivo;
}

//Sobrecarga de operador "<"
bool IntCell::operator<(const IntCell &rhs) const {
    return Valor < rhs.Valor;
}
//Sobrecarga de operador "<" Primitivo
bool IntCell::operator<(int ValorPrimitivo) const {
    return Valor < ValorPrimitivo;
}

//Sobrecarga de operador "=="
bool IntCell::operator==(const IntCell &rhs) const {
    return Valor == rhs.Valor;
}
//Sobrecarga de operador "==" Primirivo
bool IntCell::operator==(int ValorPrimitivo) const {
    return Valor == ValorPrimitivo;
}

//Sobrecarga de operador "=>"
bool IntCell::operator>=(const IntCell &rhs) const {
    return Valor >= rhs.Valor;
}
//Sobrecarga de operador "=>" Primitivo
bool IntCell::operator>=(int ValorPrimitivo) const {
    return Valor >= ValorPrimitivo;
}

//Sobrecarga de operador "=<"
bool IntCell::operator<=(const IntCell &rhs) const {
    return Valor <= rhs.Valor;
}
//Sobrecarga de operador "=<" Primitivo
bool IntCell::operator<=(int ValorPrimitivo) const {
    return Valor <= ValorPrimitivo;
}

//Sobrecarga de operador "!="
bool IntCell::operator!=(const IntCell &rhs) const {
    return Valor != rhs.Valor;
}
//Sobrecarga de operador "!="
bool IntCell::operator!=(int ValorPrimitivo) const {
    return Valor != ValorPrimitivo;
}