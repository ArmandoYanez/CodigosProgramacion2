//
// Created by Armando Yanez.
//

#ifndef PROGRAMAS_FLOATCELL_H
#define PROGRAMAS_FLOATCELL_H
#include <iostream>

class FloatCell {
public:

    //Constructor default implicito
    FloatCell();

    //Constructor Explicitp
    FloatCell(float Valor);

    // Constuctor de copia (Copia en base a otro objeto)
    FloatCell(const FloatCell &rhs);

    //Destructor
    ~FloatCell() = default;

    //Sobrecarga de operadores "="
    FloatCell &operator= (const FloatCell &rhs);
    FloatCell &operator= (float ValorPrimitivo);

    //Sobrecarga de operador "+"
    FloatCell &operator+ (const FloatCell &rhs);
    FloatCell &operator+ (float ValorPrimitivo);

    //Sobrecarga de operador "-"
    FloatCell &operator- (const FloatCell &rhs);
    FloatCell &operator- (float ValorPrimitivo);

    //Sobrecarga de operador "-"
    FloatCell &operator* (const FloatCell &rhs);
    FloatCell &operator* (float ValorPrimitivo);

    //Sobrecarga de operador "/"
    FloatCell &operator/ (const FloatCell &rhs);
    FloatCell &operator/ (float ValorPrimitivo);

    //Sobrecarga de operador "%"
    FloatCell operator% (const FloatCell &rhs);
    FloatCell operator% (float ValorPrimitivo);

    void PrintFloat (){
        std::cout<<Valor<<std::endl;
    }

private:
    float Valor{};
};


#endif //PROGRAMAS_FLOATCELL_H
