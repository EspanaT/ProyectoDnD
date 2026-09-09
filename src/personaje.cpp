#include "../include/personaje.h"
#include "../include/types.h"

personaje::personaje(std::string Nombre,stats Base,hojaCaracter CaracteristicasPrinciaples, especie Especie, clase Clase){
    this->Nombre=Nombre;
    this->Base=Base;
    this->CaracteristicasPrincipales=CaracteristicasPrinciaples;
    this->Especie=Especie;
    this->Clase=Clase;
}

//Setter general
void personaje::set_stats(stats Base){this->Base=Base;}
void personaje::set_nombre(std::string Nombre){this->Nombre=Nombre;}


//Setter especiales
void personaje::set_hojacaracter(hojaCaracter CaracteristicasP){this->CaracteristicasPrincipales=CaracteristicasP;}
void personaje::set_especie(especie Especie){this->Especie=Especie;}
void personaje::set_clase(clase Clase){this->Clase=Clase;}


//Getter general
std::string personaje::get_nombre(){return Nombre;}
stats personaje::get_statsB(){return Base;}

//Getter especiales
hojaCaracter personaje::get_hojacaracter(){return CaracteristicasPrincipales;}
especie personaje::get_especie(){return Especie;}
clase personaje::get_clase(){return Clase;}

void personaje::agregar_objeto(equipamiento equipo){Inventario.push_back(equipo);}

void personaje::actualizar_Estado(){
    hojaCaracter E=Especie.Caracteristicas;
    hojaCaracter C=Clase.Caracteristicas;

    CaracteristicasSecundarias.Agilidad=E.Agilidad+C.Agilidad;
    CaracteristicasSecundarias.Fuerza=E.Fuerza+C.Fuerza;
    CaracteristicasSecundarias.Inteligencia=E.Inteligencia+C.Inteligencia;
    CaracteristicasSecundarias.Percepcion=E.Percepcion+C.Percepcion;
    CaracteristicasSecundarias.ResistenciaEspiritual=E.ResistenciaEspiritual+C.ResistenciaEspiritual;
    CaracteristicasSecundarias.ResistenciaFisica=E.ResistenciaFisica+C.ResistenciaFisica;

}