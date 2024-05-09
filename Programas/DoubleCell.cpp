//
// Created by Armando Yañez on 23/03/2024.
//

#include "DoubleCell.h"
#include <cmath>

// Contructor default
DoubleCell::DoubleCell(){
    this->Valor=0;
}

// Constructor por parametros
DoubleCell::DoubleCell(double Valor) {
    this->Valor=Valor;
}

// Constructor por copia
DoubleCell::DoubleCell(const DoubleCell &rhs) {
    Valor = rhs.Valor;
}


//Sobrecarga de Operadores de asignación "="
// Sobrecarga de operador "="
DoubleCell &DoubleCell::operator= (const DoubleCell &rhs){
    if(Valor != rhs.Valor){
        this->Valor = rhs.Valor;
    }
    return *this;
}
// Sobrecarga de operador "=" Primitivo
DoubleCell &DoubleCell::operator= (double ValorPrimitivo){
    if(Valor != Valor){
        this->Valor = Valor;
    }
    return *this;
}



//Sobrecarga de Operadores aritméticos "+-*/%"
// Sobrecarga de operador "+"
DoubleCell &DoubleCell::operator+(const DoubleCell &rhs){
    this->Valor =  Valor + rhs.Valor;
    return *this;
}
// Sobrecarga de operador "+" Primitivo
DoubleCell &DoubleCell::operator+(double ValorPrimitivo){
    this->Valor =  Valor + ValorPrimitivo;
    return *this;
}

// Sobrecarga de operador "-"
DoubleCell &DoubleCell::operator-(const DoubleCell &rhs){
    this->Valor =  Valor - rhs.Valor;
    return *this;
}
// Sobrecarga de operador "-" Primitivo
DoubleCell &DoubleCell::operator-(double ValorPrimitivo){
    this->Valor =  Valor - ValorPrimitivo;
    return *this;
}

// Sobrecarga de operador "*"
DoubleCell &DoubleCell::operator*(const DoubleCell &rhs){
    this->Valor =  Valor * rhs.Valor;
    return *this;
}
// Sobrecarga de operador "*" Primitivo
DoubleCell &DoubleCell::operator*(double ValorPrimitivo){
    this->Valor =  Valor * ValorPrimitivo;
    return *this;
}

// Sobrecarga de operador "/"
DoubleCell &DoubleCell::operator/(const DoubleCell &rhs){
    this->Valor =  Valor / rhs.Valor;
    return *this;
}
// Sobrecarga de operador "/" Primitivo
DoubleCell &DoubleCell::operator/(double ValorPrimitivo){
    this->Valor =  Valor / ValorPrimitivo;
    return *this;
}

// Sobrecarga de operador "%"
DoubleCell DoubleCell::operator%(const DoubleCell &rhs){
    int cociente = std::floor(Valor / rhs.Valor);
    int residuo = Valor - cociente * rhs.Valor;
    return  DoubleCell(residuo);
}
// Sobrecarga de operador "%" Primitivo
DoubleCell DoubleCell::operator%(double ValorPrimitivo){
    int cociente = std::floor(Valor / ValorPrimitivo);
    int residuo = Valor - cociente * ValorPrimitivo;
    return  DoubleCell(residuo);
}



//Sobrecarga de Operadores de comparacion ">,<,==,=>,=<,!="
//Sobrecarga de operador ">"
bool DoubleCell::operator>(const DoubleCell &rhs) const {
    return Valor > rhs.Valor;
}
// Sobrecarga de operador ">" Primitivo
bool DoubleCell::operator>(double ValorPrimitivo) const {
    return Valor > ValorPrimitivo;
}

//Sobrecarga de operador "<"
bool DoubleCell::operator<(const DoubleCell &rhs) const {
    return Valor < rhs.Valor;
}
//Sobrecarga de operador "<" Primitivo
bool DoubleCell::operator<(double ValorPrimitivo) const {
    return Valor < ValorPrimitivo;
}

//Sobrecarga de operador "=="
bool DoubleCell::operator==(const DoubleCell &rhs) const {
    return Valor == rhs.Valor;
}
//Sobrecarga de operador "==" Primirivo
bool DoubleCell::operator==(double ValorPrimitivo) const {
    return Valor == ValorPrimitivo;
}

//Sobrecarga de operador "=>"
bool DoubleCell::operator>=(const DoubleCell &rhs) const {
    return Valor >= rhs.Valor;
}
//Sobrecarga de operador "=>" Primitivo
bool DoubleCell::operator>=(double ValorPrimitivo) const {
    return Valor >= ValorPrimitivo;
}

//Sobrecarga de operador "=<"
bool DoubleCell::operator<=(const DoubleCell &rhs) const {
    return Valor <= rhs.Valor;
}
//Sobrecarga de operador "=<" Primitivo
bool DoubleCell::operator<=(double ValorPrimitivo) const {
    return Valor <= ValorPrimitivo;
}

//Sobrecarga de operador "!="
bool DoubleCell::operator!=(const DoubleCell &rhs) const {
    return Valor != rhs.Valor;
}
//Sobrecarga de operador "!="
bool DoubleCell::operator!=(double ValorPrimitivo) const {
    return Valor != ValorPrimitivo;
}