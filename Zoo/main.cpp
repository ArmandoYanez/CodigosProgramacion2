#include <iostream>
//Animales
#include "Perro.h"
#include "Caballo.h"
#include "Gato.h"
#include "Tortuga.h"
#include "Ajolote.h"
#include "Rana.h"
#include "Serpiente.h"

//Principal
#include "Animal.h"


int main() {
    //Creacion de Objeto de forma normal
    Gato nico;
    nico.SonidoAnimal();

    //Creacion de objetos con punteros

    Animal *animalisin = new Animal();
    animalisin->SonidoAnimal();

    Animal *ranin = new Rana();
    ranin->SonidoAnimal();

    Animal *Macario = new Perro();
    Macario->SonidoAnimal();

    Animal *Pepe = new Caballo();
    Pepe->SonidoAnimal();

    Animal *Gatin = new Gato();
    Gatin->SonidoAnimal();

    Animal *tortu = new Tortuga();
    tortu->SonidoAnimal();

    Animal *axol = new Ajolote();
    axol->SonidoAnimal();

    Animal *serpi = new Serpiente();
    serpi->SonidoAnimal();

    delete animalisin;

    return 0;
}
