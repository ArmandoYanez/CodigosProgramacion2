//
// Created by Asus ROG on 16/04/2024.
//

#ifndef HERENCIA_PROTAGONISTA_H
#define HERENCIA_PROTAGONISTA_H

#include "Persona.h"
#include "Haki.h"
#include "Fruta.h"

class Protagonista : public Persona, public Haki, public Fruta{
public:
    //Constructor default implicito
    Protagonista();

    //Constructor Explicito
    Protagonista(std::string nombre, std::string  tipoDeSangre, int edad, float peso, float altura, std::string tipoDeHaki, std::string nivelDeHaki, std::string control,
                 std::string frutaDelDiablo, std::string tipoDeFrtuta, std::string poderRevelado);

    // Constuctor de copia (Copia en base a otro objeto)
    Protagonista(const Protagonista &rhs);

    //Destructor
    ~Protagonista() = default;
};


#endif //HERENCIA_PROTAGONISTA_H
