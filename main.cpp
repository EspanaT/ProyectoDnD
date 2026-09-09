#include <iostream>
#include "include/personaje.h"
#include "include/types.h"

int main(){

    stats estadisticas_base;
    estadisticas_base.Armadura=100;
    estadisticas_base.Ataque=10;
    estadisticas_base.ConexionDivina=0;
    estadisticas_base.Cordura=-1;
    estadisticas_base.Vida=15;

    hojaCaracter hojaC;
    hojaC.Agilidad=10;
    hojaC.Fuerza=10;
    hojaC.Inteligencia=10;
    hojaC.Percepcion=10;
    hojaC.ResistenciaEspiritual=10;
    hojaC.ResistenciaFisica=10;

    especie Pespecie;
    Pespecie.Nombre="Default";
    Pespecie.Caracteristicas=hojaC;
    Pespecie.Aramadura=10;
    Pespecie.Ataque=10;
    Pespecie.ConexionDivina=1;
    Pespecie.Vida=10;

    clase ClaseA;
    ClaseA.Nombre="Default";
    ClaseA.ConexionDivina=-1;
    ClaseA.Caracteristicas=hojaC;

    std::string nombre="Dogo";

    personaje a=personaje(nombre,estadisticas_base,hojaC,Pespecie,ClaseA);

    ClaseA=a.get_clase();

    std::cout<<ClaseA.Nombre;
    
}
