// Interfaz
// Created by Armando Yanez
//
#ifndef PROGRAMAS_AUTOMOVIL_H //Si no esta definido
#define PROGRAMAS_AUTOMOVIL_H  //En caso de que no se ejecuto antes, se define
#include <string>
#include <iostream>
class Automovil{
public:

    //Constructor explicito (Sin &)
    //Automovil(std::string marca, std::string dueno, std::string modelo, int anioDeFabricacion, float kilometraje);

    //Constructor default implicito
    Automovil() = default;

    //Constructor Explicitp
    Automovil(std::string marca, std::string dueno, std::string modelo, int anioDeFabricacion, float kilometraje);

    // Constuctor de copia (Copia en base a otro objeto)
    Automovil(const Automovil &rhs);

    //Constructor por referencia
    Automovil(Automovil &&rhs) noexcept;

    //Destructor
    ~Automovil() = default;

    //Sobrecarga de operadores
    Automovil &operator= (const Automovil &rhs);

    void imprimir(){
       std::cout<<"Marca: "<<marca<<std::endl;
       std::cout<<"Modelo: "<<modelo<<std::endl;
       std::cout<<"Dueno: "<<dueno<<std::endl;
       std::cout<<"Kilometraje: "<<kilometraje<<std::endl;
       std::cout<<"Ano: "<<anioDeFabricacion<<std::endl<<std::endl;
    }

private:
    std::string marca;
    std::string dueno;
    std::string modelo;

    int anioDeFabricacion{};
    float kilometraje{};
};


#endif //PROGRAMAS_AUTOMOVIL_H
//Placeholder - Habra algo pero no esta todavia