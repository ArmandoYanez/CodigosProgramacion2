//
// Created by Armando Yañez on 23/03/2024.
//

#ifndef PROGRAMAS_BOOLEANCELL_H
#define PROGRAMAS_BOOLEANCELL_H
#include <iostream>

class BooleanCell {
public:
//Constructor default implicito
    BooleanCell();

    //Constructor Explicito
    BooleanCell(bool Valor);

    // Constuctor explicito por copia (Copia en base a otro objeto)
    BooleanCell(const BooleanCell &rhs);

    //Destructor
    ~BooleanCell() = default;



    //Sobrecarga de Operadores de asignación "="
    //Sobrecarga de operadores "="
    BooleanCell &operator= (const BooleanCell &rhs);
    BooleanCell &operator= (bool ValorPrimitivo);



    //Sobrecarga de Operadores aritméticos "+-*/%"
    //Sobrecarga de operador "*"
    BooleanCell &operator* (const BooleanCell &rhs);
    BooleanCell &operator* (bool ValorPrimitivo);



    //Sobrecarga de Operadores de comparacion ">,<,==,=>,=<,!="
    //Sobrecarga de operador "=="
    bool operator==(const BooleanCell &rhs) const;
    bool operator==(bool ValorPrimitivo) const;

    //Sobrecarga de operador "!="
    bool operator!=(const BooleanCell &rhs) const;
    bool operator!=(bool ValorPrimitivo) const;

    //Metodo para imprimir
    void printValor(){
        std::cout<<Valor<<std::endl;
    }

private:
    bool Valor{};
};


#endif //PROGRAMAS_BOOLEANCELL_H
