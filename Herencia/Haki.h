//
// Created by Armando Yañez on 16/04/2024.
//

#ifndef HERENCIA_HAKI_H
#define HERENCIA_HAKI_H
#include <string>

class Haki {
public:
//Constructor default implicito
    Haki();

    //Constructor Explicitp
    Haki(std::string tipoDeHaki, std::string nivelDeHaki, std::string control);

    // Constuctor de copia (Copia en base a otro objeto)
    Haki(const Haki &rhs);

    //Destructor
    ~Haki() = default;

    //Getters
    std::string GettipoDeHaki() const;
    std::string GetnivelDeHaki() const;
    std::string Getcontrol() const;

    //Setters
    void SetTipoDeHaki(std::string NtipoDeHaki);
    void SetNivelDeHaki(std::string NnivelDeHaki);
    void SetControl(std::string Ncontrol);

private:
    std::string tipoDeHaki;
    std::string nivelDeHaki;
    std::string control;
};


#endif //HERENCIA_HAKI_H
