#pragma once
#include "types.h"

void tirar_dado(int cantidadD,int cantidadC, int *listD);
void tirar_dado(bolsa_dados &info_dados);

int suma_dados(int cantidadD,int listaD[]);
int suma_dados(bolsa_dados &info_dados);

int mayor_valor(int cantidadD,int listaD[]);
int mayor_valor(bolsa_dados &info_dados);

int menor_valor(int cantidadD,int cantidadC,int listaD[]);
int menor_valor(bolsa_dados &info_dados);