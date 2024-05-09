//
// Created by Armando Yañez on 16/04/2024.
//

#ifndef HERENCIA_PODERDEFUEGO_H
#define HERENCIA_PODERDEFUEGO_H
#include <string>


class Fruta {
public:
    //Constructor default implicito
    Fruta();

    //Constructor Explicitp
    Fruta(std::string frutaDelDiablo, std::string tipoDeFrtuta, std::string poderRevelado);

    // Constuctor de copia (Copia en base a otro objeto)
    Fruta(const Fruta &rhs);

    //Destructor
    ~Fruta() = default;

    //Getters
    std::string GetfrutaDelDiablo() const;
    std::string GettipoDeFrtuta() const;
    std::string GetpoderRevelado() const;

    //Setters
    void SetfrutaDelDiablo(std::string NfrutaDelDiablo);
    void SettipoDeFrtuta(std::string NtipoDeFrtuta);
    void SetpoderRevelado(std::string NpoderRevelado);

private:
    std::string frutaDelDiablo;
    std::string tipoDeFrtuta;
    std::string poderRevelado;
};


#endif //HERENCIA_PODERDEFUEGO_H
