#include <iostream>
#include <string.h>
#include <stdlib.h>

#include "./lib/nodo.hpp"
#include "./lib/agregar_frente.hpp"
#include "./lib/mostrar_lista.hpp"
#include "./lib/ayuda.hpp"


using namespace std;

 typedef enum _comando{

Crear, Mostrar , Insertar_Principio, Insertar_Final, Borrar_Pantalla, Ayuda, Fin

 }comandos;

int main()
{
    string comando;
    comandos comandos=Fin; //Arreglar esto por el amor de dios.

    cout<<"Ingrese comando"<<endl;
    getline(cin, comando ,'\n');

//    }
    if (comando=="Crear"){

      comandos=Crear;


    }
    if (comando=="Mostrar"){

      comandos=Mostrar;


    }
    if (comando=="Insertar Principio"){

      comandos=Insertar_Principio;

    }
    if (comando=="Insertar Final"){

      comandos= Insertar_Final;


    }
    if (comando=="Borrar Pantalla"){

      comandos=Borrar_Pantalla;


    }
    if (comando=="Ayuda"){

      comandos=Ayuda;


    }
    if (comando=="Fin"){

      comandos=Fin;


    }



   //cout<<localidad<<endl;



   switch (comandos){

    case Crear:
    cout << "1";
    break;

    case Mostrar:
      cout << "2";
    break;

    case Insertar_Principio:
      cout << "3";
    break;

    case Insertar_Final:
      cout << "4";
    break;

    case Borrar_Pantalla:
      cout << "5";
    break;

    case Ayuda:
      Mostrar_Ayuda();
    break;

    case Fin:
      exit (EXIT_FAILURE);
    break;

    default:
    cout<< "Comando no encontrado."<<endl;
    break;


   }



    return 0;



}
