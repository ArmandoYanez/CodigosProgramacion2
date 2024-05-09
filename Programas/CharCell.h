//
// Created by Armando Yañez 23/03/2024.
//

#ifndef PROGRAMAS_CHARCELL_H
#define PROGRAMAS_CHARCELL_H
#include <iostream>

class CharCell {
public:
//Constructor default implicito
    CharCell();

    //Constructor Explicito
    CharCell(char Valor);

    // Constuctor explicito por copia (Copia en base a otro objeto)
    CharCell(const CharCell &rhs);

    //Destructor
    ~CharCell() = default;

    //Sobrecarga de Operadores de asignación "="
    //Sobrecarga de operadores "="
    CharCell &operator= (const CharCell &rhs);
    CharCell &operator= (char ValorPrimitivo);


    //Sobrecarga de Operadores aritméticos "+-*/%"
    //Sobrecarga de operador "+"
    CharCell &operator+ (int ValorPrimitivo);

    //Sobrecarga de operador "-"
    CharCell &operator- (int ValorPrimitivo);


    //Sobrecarga de Operadores de comparacion ">,<,==,=>,=<,!="
    //Sobrecarga de operador ">"
    bool operator>(const CharCell &rhs) const;
    bool operator>(char ValorPrimitivo) const;

    //Sobrecarga de operador "<"
    bool operator<(const CharCell &rhs) const;
    bool operator<(char ValorPrimitivo) const;

    //Sobrecarga de operador "=="
    bool operator==(const CharCell &rhs) const;
    bool operator==(char ValorPrimitivo) const;

    //Sobrecarga de operador "=>"
    bool operator>=(const CharCell &rhs) const;
    bool operator>=(char ValorPrimitivo) const;

    //Sobrecarga de operador "=<"
    bool operator<=(const CharCell &rhs) const;
    bool operator<=(char ValorPrimitivo) const;

    //Sobrecarga de operador "!="
    bool operator!=(const CharCell &rhs) const;
    bool operator!=(char ValorPrimitivo) const;

    //Metodo para imprimir
    void printValor(){
        std::cout<<Valor<<std::endl;
    }

private:
    char Valor{};
};


#endif //PROGRAMAS_CHARCELL_H
