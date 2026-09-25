#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "types.h"
#include "personaje.h"

void mover_puntero(int* seleccionado,char* tecla);

void dibujar_Menu(int seleccionado);

void dibujar_Personaje(int seleccinado,hojaCaracter* hojaCara, stats* stadisticas,clase* clase,especie* especie, personaje* personaje );