#include <iostream>

//Mis librerias
#include "Persona.h"
#include "Pirata.h"
#include "Yonkou.h"
#include "ReyDeLosPiratas.h"
#include "Protagonista.h"

int main() {
    Persona p1;
    Pirata pi1;
    Yonkou y1;
    ReyDeLosPiratas r1;
    Protagonista prota{};


    p1.SetNombre("El pepe");
    std::cout<<p1.GetNombre()<<std::endl;

    //Pirata
    pi1.SetNombre("Ete sech");
    std::cout<<pi1.GetNombre()<<std::endl;

    pi1.SetMarDeNacimiento("East blue");
    std::cout<<pi1.GetMarDeNacimiento()<<std::endl;

    y1.SetNombre("Potaxio");
    std::cout<<y1.GetNombre()<<std::endl;

    y1.SetMarDeNacimiento("East blue");
    std::cout<<y1.GetMarDeNacimiento()<<std::endl;

    y1.Setrecompenza(1000);
    std::cout<<y1.Getrecompenza()<<std::endl;

    r1.SethakiDeArmadura(false);
    std::cout<<r1.GethakiDeArmadura()<<std::endl;

    std::cout<< prota.GetNombre() <<std::endl;
    std::cout<< prota.GetAltura() <<std::endl;
    std::cout<< prota.GetEdad() <<std::endl;
    std::cout<< prota.GetPeso() <<std::endl;
    std::cout<< prota.GetTipoDeSangre() <<std::endl;

    p1.Presentarse();
}
