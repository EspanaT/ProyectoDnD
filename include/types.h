#pragma once
#include <string>

struct hojaCaracter
{
    int Fuerza;
    int ResistenciaFisica;
    int Agilidad;
    int Inteligencia;
    int Percepcion;
    int ResistenciaEspiritual;
};

struct stats
{
    float Vida;
    float Armadura;
    float Ataque;
    int Cordura;
    int ConexionDivina;
};

struct equipamiento
{
    std::string Nombre;
    hojaCaracter Caracteristicas;
    float Durabilidad;
    float Ataque;
    float Peso;
};

struct especie
{
    std::string Nombre;
    hojaCaracter Caracteristicas;
    float Vida;
    float Aramadura;
    float Ataque;
    int ConexionDivina;
};

struct clase
{
    std::string Nombre;
    hojaCaracter Caracteristicas;
    int ConexionDivina;
};

struct bolsa_dados
{
    int Cantidad_Caras;
    int Cantidad_Dados;
    int valores[];
};