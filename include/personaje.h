#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "types.h"

class personaje
{
private:
    std::string Nombre;
    stats Base;
    stats Modoficado;
    float Vida;
    int Cordura;
    int ConexionDivina;
    float Armadura;
    float Ataque;
    hojaCaracter CaracteristicasPrincipales;
    hojaCaracter CaracteristicasSecundarias;
    especie Especie;
    clase Clase;
    std::vector<equipamiento> Inventario;
public:
    personaje(std::string Nombre,stats Base,hojaCaracter CaracteristicasPrinciaples, especie Especie, clase Clase);

    //Setter Valores bases
    void set_stats(stats Base);
    void set_nombre(std::string Nombre);

    //Setter Valores especiales
    void set_hojacaracter(hojaCaracter CaracteristicasP);
    void set_especie(especie Especie);
    void set_clase(clase Clase);

    //Getter Valores base
    std::string get_nombre();
    stats get_statsB();

    //Getter Valores especiales
    hojaCaracter get_hojacaracter();
    especie get_especie();
    clase get_clase();

    //Funcion para agregar objeto al inventario
    void agregar_objeto(equipamiento equipo);


    void actualizar_Estado();
};

