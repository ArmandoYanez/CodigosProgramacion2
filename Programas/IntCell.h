//
// Created by Armando Yañez on 23/03/2024.
//

#ifndef PROGRAMAS_INTCELL_H
#define PROGRAMAS_INTCELL_H
#include <iostream>

class IntCell {
public:
//Constructor default implicito
    IntCell();

    //Constructor Explicito
    IntCell(int Valor);

    // Constuctor explicito por copia (Copia en base a otro objeto)
    IntCell(const IntCell &rhs);

    //Destructor
    ~IntCell() = default;

    //Sobrecarga de Operadores de asignación "="
    //Sobrecarga de operadores "="
    IntCell &operator= (const IntCell &rhs);
    IntCell &operator= (int ValorPrimitivo);


    //Sobrecarga de Operadores aritméticos "+-*/%"
    //Sobrecarga de operador "+"
    IntCell &operator+ (const IntCell &rhs);
    IntCell &operator+ (int ValorPrimitivo);

    //Sobrecarga de operador "-"
    IntCell &operator- (const IntCell &rhs);
    IntCell &operator- (int ValorPrimitivo);

    //Sobrecarga de operador "*"
    IntCell &operator* (const IntCell &rhs);
    IntCell &operator* (int ValorPrimitivo);

    //Sobrecarga de operador "/"
    IntCell &operator/ (const IntCell &rhs);
    IntCell &operator/ (int ValorPrimitivo);

    //Sobrecarga de operador "%"
    IntCell operator% (const IntCell &rhs);
    IntCell operator% (int ValorPrimitivo);

    //Sobrecarga de Operadores de comparacion ">,<,==,=>,=<,!="
    //Sobrecarga de operador ">"
    bool operator>(const IntCell &rhs) const;
    bool operator>(int ValorPrimitivo) const;

    //Sobrecarga de operador "<"
    bool operator<(const IntCell &rhs) const;
    bool operator<(int ValorPrimitivo) const;

    //Sobrecarga de operador "=="
    bool operator==(const IntCell &rhs) const;
    bool operator==(int ValorPrimitivo) const;

    //Sobrecarga de operador "=>"
    bool operator>=(const IntCell &rhs) const;
    bool operator>=(int ValorPrimitivo) const;

    //Sobrecarga de operador "=<"
    bool operator<=(const IntCell &rhs) const;
    bool operator<=(int ValorPrimitivo) const;

    //Sobrecarga de operador "!="
    bool operator!=(const IntCell &rhs) const;
    bool operator!=(int ValorPrimitivo) const;

    //Metodo para imprimir
    void printValor(){
        std::cout<<Valor<<std::endl;
    }

private:
    int Valor{};
};

#endif //PROGRAMAS_INTCELL_H
