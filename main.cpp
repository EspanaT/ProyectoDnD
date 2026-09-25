#include <iostream>
#include <ctime>
#include <conio.h>
#include <cstdlib>
#include "include/personaje.h"
#include "include/types.h"
#include "include/dado.h"
#include "include/interfaz.h"
//g++ main.cpp src/personaje.cpp src/dado.cpp src/interfaz.cpp -o programa
#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;

void mostrarMenu(int seleccionado)
{
    system("cls");

    cout << "============================\n";
    cout << "       MENU PRINCIPAL       \n";
    cout << "============================\n\n";

    string opciones[] = {
        "Iniciar",
        "Configuracion",
        "Creditos",
        "Salir"
    };

    for (int i = 0; i < 4; i++)
    {
        if (i == seleccionado)
            cout << "  > " << opciones[i] << " <\n";
        else
            cout << "    " << opciones[i] << "\n";
    }

    cout << "\nUsa ^ v y ENTER\n";
}


int main(){
    srand(time(0));

    int seleccionado = 0;
    char tecla;

    stats estadisticas_base;
    hojaCaracter hojaC;
    clase ClaseA;
    especie Pespecie;
    personaje a;

    while (true)
    {
        dibujar_Menu(seleccionado);

        tecla = _getch();
        
        // Flecha arriba
        if (tecla == 72)
        {
            seleccionado--;

            if (seleccionado < 0)
                seleccionado = 3;
        }

        // Flecha abajo
        else if (tecla == 80)
        {
            seleccionado++;

            if (seleccionado > 3)
                seleccionado = 0;
        }

        // ENTER
        else if (tecla == 13)
        {
            system("cls");

            switch (seleccionado)
            {
                case 0: 
                    dibujar_Personaje(0,&hojaC,&estadisticas_base,&ClaseA,&Pespecie,&a);
                    break;

                case 1:
                    cout << "Configuracion...\n";
                    break;

                case 2:
                    cout << "Creditos...\n";
                    break;

                case 3:
                    cout << "Saliendo...\n";
                    return 0;
            }

            _getch();
        }
    }

    return 0;

    /*int op;

    std::cout<<"Opciones: \n\t1)Crear personaje\n\t2)Salir";
    std::cin>>op;

    

    stats estadisticas_base;
    estadisticas_base.Armadura=100;
    estadisticas_base.Ataque=10;
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
    

    std::cout<<"Mayor: "<<mayor<<" Menor: "<<menor<<" Suma: "<<suma;*/
}
