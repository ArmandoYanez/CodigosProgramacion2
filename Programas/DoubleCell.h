//
// Created by Armando Yañez on 23/03/2024.
//

#ifndef PROGRAMAS_DOUBLECELL_H
#define PROGRAMAS_DOUBLECELL_H
#include <iostream>

class DoubleCell {
public:
//Constructor default implicito
    DoubleCell();

    //Constructor Explicito
    DoubleCell(double Valor);

    // Constuctor explicito por copia (Copia en base a otro objeto)
    DoubleCell(const DoubleCell &rhs);

    //Destructor
    ~DoubleCell() = default;

    //Sobrecarga de Operadores de asignación "="
    //Sobrecarga de operadores "="
    DoubleCell &operator= (const DoubleCell &rhs);
    DoubleCell &operator= (double ValorPrimitivo);


    //Sobrecarga de Operadores aritméticos "+-*/%"
    //Sobrecarga de operador "+"
    DoubleCell &operator+ (const DoubleCell &rhs);
    DoubleCell &operator+ (double ValorPrimitivo);

    //Sobrecarga de operador "-"
    DoubleCell &operator- (const DoubleCell &rhs);
    DoubleCell &operator- (double ValorPrimitivo);

    //Sobrecarga de operador "*"
    DoubleCell &operator* (const DoubleCell &rhs);
    DoubleCell &operator* (double ValorPrimitivo);

    //Sobrecarga de operador "/"
    DoubleCell &operator/ (const DoubleCell &rhs);
    DoubleCell &operator/ (double ValorPrimitivo);

    //Sobrecarga de operador "%"
    DoubleCell operator% (const DoubleCell &rhs);
    DoubleCell operator% (double ValorPrimitivo);

    //Sobrecarga de Operadores de comparacion ">,<,==,=>,=<,!="
    //Sobrecarga de operador ">"
    bool operator>(const DoubleCell &rhs) const;
    bool operator>(double ValorPrimitivo) const;

    //Sobrecarga de operador "<"
    bool operator<(const DoubleCell &rhs) const;
    bool operator<(double ValorPrimitivo) const;

    //Sobrecarga de operador "=="
    bool operator==(const DoubleCell &rhs) const;
    bool operator==(double ValorPrimitivo) const;

    //Sobrecarga de operador "=>"
    bool operator>=(const DoubleCell &rhs) const;
    bool operator>=(double ValorPrimitivo) const;

    //Sobrecarga de operador "=<"
    bool operator<=(const DoubleCell &rhs) const;
    bool operator<=(double ValorPrimitivo) const;

    //Sobrecarga de operador "!="
    bool operator!=(const DoubleCell &rhs) const;
    bool operator!=(double ValorPrimitivo) const;

    //Metodo para imprimir
    void printValor(){
        std::cout<<Valor<<std::endl;
    }

private:
    double Valor{};
};


#endif //PROGRAMAS_DOUBLECELL_H
