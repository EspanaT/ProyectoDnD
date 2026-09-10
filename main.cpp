#include <iostream>
#include <ctime>
#include "include/personaje.h"
#include "include/types.h"
#include "include/dado.h"
//g++ main.cpp src/personaje.cpp src/dado.cpp -o programa
int main(){
    srand(time(0));

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

    bolsa_dados my_bolsa;
    my_bolsa.Cantidad_Caras=6;
    my_bolsa.Cantidad_Dados=4;


    tirar_dado(my_bolsa);


    std::cout<<ClaseA.Nombre<<" Tirada: "<<my_bolsa.valores[0]<<","<<my_bolsa.valores[1]<<","<<my_bolsa.valores[2]<<","<<my_bolsa.valores[3]<<"\n";

    int suma = suma_dados(my_bolsa);
    int mayor = mayor_valor(my_bolsa);
    int menor = menor_valor(my_bolsa);
    

    std::cout<<"Mayor: "<<mayor<<" Menor: "<<menor<<" Suma: "<<suma;
}
