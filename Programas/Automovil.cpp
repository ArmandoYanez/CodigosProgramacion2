// Implementación
// Created by Armando Yanez
//

#include "Automovil.h"
#include <string>

/*
 * Constructor por parametros (prueba)
 * Automovil::Automovil(std::string newMarca, std::string newDueno, std::string newModelo, int newAnioDeFabricacion, float newKilometraje){
    this->marca=newMarca;
    this->dueno=newDueno;
    this->modelo=newModelo;
    this->anioDeFabricacion=newAnioDeFabricacion;
    this->kilometraje=newKilometraje;
}
 */

// Significado :: es que pertenece a la clase automovil.

// Constructor por parametros
Automovil::Automovil(std::string marca, std::string dueno, std::string modelo, int anioDeFabricacion, float kilometraje) {
    this->marca = marca;
    this->dueno = dueno;
    this->modelo = modelo;
    this->anioDeFabricacion = anioDeFabricacion;
    this->kilometraje = kilometraje;
}

// Constructor por copia
Automovil::Automovil(const Automovil &rhs) {
    marca = rhs.marca;
    dueno = rhs.dueno;
    modelo = rhs.modelo;
    anioDeFabricacion = rhs.anioDeFabricacion;
    kilometraje = rhs.kilometraje;
}

// Constructor por referencia
Automovil::Automovil(Automovil &&rhs) noexcept {
    marca = rhs.marca;
    dueno = rhs.dueno;
    modelo = rhs.modelo;
    anioDeFabricacion = rhs.anioDeFabricacion;
    kilometraje = rhs.kilometraje;

}

// Sobrecarga de operadores esto afecta en el main diectamente
Automovil &Automovil::operator= (const Automovil &rhs){
    this->marca = rhs.marca;
    this->dueno = rhs.dueno;
    this->modelo = rhs.modelo;
    this->anioDeFabricacion = rhs.anioDeFabricacion;
    this->kilometraje = rhs.kilometraje;

    return *this;
}

