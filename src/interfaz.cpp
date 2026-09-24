#include <iostream>
#include <ctime>
#include <conio.h>
#include <cstdlib>
#include "../include/personaje.h"
#include "../include/types.h"
#include "../include/interfaz.h"

void dibujar_Menu(int seleccionado)
{
    system("cls");

    std::cout << "============================\n";
    std::cout << "       MENU PRINCIPAL       \n";
    std::cout << "============================\n\n";

    std::string opciones[] = {
        "Iniciar",
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

    std::cout << "\nUsa ↑ ↓ y ENTER\n";
}