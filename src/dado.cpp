#include "../include/dado.h"
#include "../include/types.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

void tirar_dado(int cantidadD,int cantidadC, int *listD)
{
    
    for(int x=0;x<=cantidadD;x++)
    {
        listD[x]= (rand() % cantidadC)+1;
    }
}

void tirar_dado(bolsa_dados &info_dados)
{
    
    for(int x=0;x<=info_dados.Cantidad_Dados;x++)
    {
        info_dados.valores[x]= (rand() % info_dados.Cantidad_Caras)+1;
    }
}

int suma_dados(int cantidadD,int listaD[])
{
    int total;
    for(int x=0;x<=cantidadD-1;x++)
    {
        total=total+listaD[x];
    }
    return total;
}

int suma_dados(bolsa_dados &info_dados)
{
    int total;
    for(int x=0;x<info_dados.Cantidad_Dados-1;x++)
    {
        total=total+info_dados.valores[x];
    }
    return total;
}

int mayor_valor(int cantidadD,int listaD[])
{
    int mayor=0;
    
    for(int x=0;x<cantidadD-1;x++)
    {
        if(mayor<listaD[x])
        {
            mayor=listaD[x];
        }
    }
    return mayor;
}

int mayor_valor(bolsa_dados &info_dados)
{
    int mayor=0;
    for(int x=0;x<=info_dados.Cantidad_Dados-1;x++)
    {   
        if(mayor<info_dados.valores[x])
        {
            mayor=info_dados.valores[x];
        }
    }
    return mayor;
}

int menor_valor(int cantidadD,int cantidadC,int listaD[])
{
    int menor=cantidadC;
    for(int x=0;x<=cantidadD-1;x++)
    {
        if(menor>listaD[x])
        {
            menor=listaD[x];
        }
    }
    return menor;
}

int menor_valor(bolsa_dados &info_dados)
{
    int menor=info_dados.Cantidad_Caras;
    for(int x=0;x<=info_dados.Cantidad_Dados-1;x++)
    {
        if(menor>info_dados.valores[x])
        {
            menor=info_dados.valores[x];
        }
    }
    return menor;
}