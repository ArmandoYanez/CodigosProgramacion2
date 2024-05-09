//
// Created by Armando Yanez.
//
#include <cmath>
#include "FloatCell.h"

// Contructor default
FloatCell::FloatCell(){
    this->Valor=0;
}

// Constructor por parametros
FloatCell::FloatCell(float Valor) {
    this->Valor=Valor;
}

// Constructor por copia
FloatCell::FloatCell(const FloatCell &rhs) {
    Valor = rhs.Valor;
}

// Sobrecarga de operador "="
FloatCell &FloatCell::operator= (const FloatCell &rhs){
    if(Valor != rhs.Valor){
        this->Valor = rhs.Valor;
    }
    return *this;
}

// Sobrecarga de operador "=" Primitivo
FloatCell &FloatCell::operator= (float ValorPrimitivo){
    if(Valor != Valor){
    this->Valor = Valor;
    }
    return *this;
}

// Sobrecarga de operador "+"
FloatCell &FloatCell::operator+(const FloatCell &rhs){
        this->Valor =  Valor + rhs.Valor;
    return *this;
}

// Sobrecarga de operador "+" Primitivo
FloatCell &FloatCell::operator+(float ValorPrimitivo){
    this->Valor =  Valor + ValorPrimitivo;
    return *this;
}


// Sobrecarga de operador "-"
FloatCell &FloatCell::operator-(const FloatCell &rhs){
    this->Valor =  Valor - rhs.Valor;
    return *this;
}

// Sobrecarga de operador "-" Primitivo
FloatCell &FloatCell::operator-(float ValorPrimitivo){
    this->Valor =  Valor - ValorPrimitivo;
    return *this;
}

// Sobrecarga de operador "*"
FloatCell &FloatCell::operator*(const FloatCell &rhs){
    this->Valor =  Valor * rhs.Valor;
    return *this;
}

// Sobrecarga de operador "*" Primitivo
FloatCell &FloatCell::operator*(float ValorPrimitivo){
    this->Valor =  Valor * ValorPrimitivo;
    return *this;
}

// Sobrecarga de operador "/"
FloatCell &FloatCell::operator/(const FloatCell &rhs){
    this->Valor =  Valor / rhs.Valor;
    return *this;
}

// Sobrecarga de operador "/" Primitivo
FloatCell &FloatCell::operator/(float ValorPrimitivo){
    this->Valor =  Valor / ValorPrimitivo;
    return *this;
}

// Sobrecarga de operador "%"
FloatCell FloatCell::operator%(const FloatCell &rhs){
    float cociente = std::floor(Valor / rhs.Valor);
    float residuo = Valor - cociente * rhs.Valor;
    return  FloatCell(residuo);
}

// Sobrecarga de operador "%" Primitivo
FloatCell FloatCell::operator%(float ValorPrimitivo){
    float cociente = std::floor(Valor / ValorPrimitivo);
    float residuo = Valor - cociente * ValorPrimitivo;
    return  FloatCell(residuo);
}