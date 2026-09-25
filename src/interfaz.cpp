#include <iostream>
#include <ctime>
#include <conio.h>
#include <cstdlib>
#include "../include/personaje.h"
#include "../include/types.h"
#include "../include/interfaz.h"

void mover_puntero(int* seleccionado,char* tecla)
{
    *tecla = _getch();

    // Flecha arriba
    if (*tecla == 72)
    {
        *seleccionado--;

        if (*seleccionado < 0)
            *seleccionado = 3;
    }

    // Flecha abajo
    else if (*tecla == 80)
    {
        *seleccionado++;

        if (*seleccionado > 3)
            *seleccionado = 0;
    }
}

void dibujar_Menu(int seleccionado)
{
    system("cls");

    std::cout << "============================\n";
    std::cout << "       MENU PRINCIPAL       \n";
    std::cout << "============================\n\n";

    std::string opciones[] = {
        "Crear personaje",
        "Configuracion",
        "Creditos",
        "Salir"
    };

    for (int i = 0; i < 4; i++)
    {
        if (i == seleccionado)
            std::cout << "  > " << opciones[i] << " <\n";
        else
            std::cout << "    " << opciones[i] << "\n";
    }

    std::cout << "\nUsa  ^ v  y ENTER\n";
}

void dibujar_Personaje(int seleccinado,hojaCaracter* hojaCara, stats* stadisticas,clase* clase,especie* especie, personaje* personaje )
{
    system("cls");

    std::string valor;
    std::cout << "============================\n";
    std::cout << "       MENU PERSONAJE      \n";
    std::cout << "============================\n\n";

    std::string opciones[] = {
        "Nombre: ",
        "Vida: ",
        "Armadura: ",
        "Daño: ",
        "Salir"
    };

    for (int i = 0; i < 5; i++)
    {
        if (i == seleccinado){
            std::cout << "  > " << opciones[i] << " <\n";
        }else{
            std::cout << "    " << opciones[i] << "\n";
        }
    }

}