#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "funciones.h"
#include "juegos.h"
#include "fecha.h"
#include "clientes.h"
#include "alquileres.h"
#include "informes.h"

#define MAX 1001
#define MAXJUE 5
#define MAXALQ 21
#define MAXF 1001

int funcion_opcionesInicio();

int main()
{
    eAlquileres Alquileres[MAXALQ];
    eJuego Juegos[MAXJUE];



    {

        char seguir='s';
        char seguirS='s';
        char seguirI='s';
        eClientes Clientes[MAX];
        initClientes(Clientes,MAX);

        initAlquileres(Alquileres,MAXALQ);
        int flagSinAlta=0;
        int exit=1;


        do
        {

            switch (funcion_opcionesInicio())
            {
            case 1:

                do
                {
                    hardcodeoClientes(Clientes);
                    flagSinAlta++;
                    switch (funcion_opciones())
                    {


                    case 1:
                        fflush(stdin);
                        addClientes(Clientes, MAX);
                        //flagSinAlta++;
                        exit = 0;
                        break;
                    case 2:
                        if (flagSinAlta == 0)
                        {
                            printf("\nNO EXISTEN Clientes EN EL SISTEMA\n\n");
                            break;
                        }
                        else
                        {
                            viewClientes(Clientes,MAX);
                            modifyCliente(Clientes, MAX);
                        };
                        break;
                        exit = 0;

                        break;
                    case 3:
                        if (flagSinAlta == 0)
                        {
                            printf("\nNO EXISTEN Clientes EN EL SISTEMA\n\n");
                            break;
                        }
                        else
                        {
                            removeCliente(Clientes, MAX);
                        };
                        exit = 0;
                        break;
                    case 4:
                        if (flagSinAlta == 0)
                        {
                            printf("\nNO EXISTEN Clientes EN EL SISTEMA\n\n");
                            break;
                        }
                        else
                        {
                            sortClientes(Clientes,MAX);
                            viewClientes(Clientes, MAX);
                            system("pause");

                        };
                        exit = 0;

                        break;
                    case 5:
                        printf("Volviendo a menu principal");
                        exit = 0;

                        break;
                    default:
                        printf("\n\nOpcion ingresada incorrecta, por favor ingrese una opcion del 1 al 5\n\n");
                        system("pause");
                        break;


                    }

                    if(exit==0)

                    {


                        fflush(stdin);
                        system("cls");
                        break;
                    }

                    else if (seguirS == 'n')
                    {
                        printf("\n\nEsta por salir de menu socios esta seguro? s/n \n\n");
                        scanf("%c",&seguir);

                        fflush(stdin);
                        system("cls");

                    }
                    return 0;
                }
                while (seguir == 's' || seguir == 'S');
                break;
            case 2:
                if (flagSinAlta == 0)
                {
                    printf("\nNO EXISTEN Clientes EN EL SISTEMA\n\n");
                    break;
                }
                else
                {
                    sortJuegos(Juegos,MAXJUE);
                    viewJuegos(Juegos,MAXJUE);
                };
                break;
            case 3:
                if (flagSinAlta == 0)
                {
                    printf("\nNO EXISTEN Clientes EN EL SISTEMA\n\n");
                    break;
                }
                else
                {
                    addAlquiler(Clientes,MAX,Juegos,MAXJUE,Alquileres,MAXALQ);

                };
                break;
            case 4:
                if (flagSinAlta == 0)
                {
                    printf("\nNO EXISTEN Clientes EN EL SISTEMA\n\n");
                    break;
                }
                else
                {
                    mostrarAlquileres(Alquileres,MAXALQ,Juegos,MAXJUE,Clientes,MAX);

                };
                break;

            case 5:
                do
                {
                    float promedio=0;
                    switch (menuInformes())
                    {
                    case 1:
                            promedio=listarPromedioyTotalImportes(Juegos,MAXJUE,Alquileres,MAXALQ);
                            printf("promedio",promedio);
                            system("pause");
                            exit = 0;
                        break;
                    case 2:
                        if (flagSinAlta == 0)
                        {
                            printf("\nNO EXISTEN Clientes EN EL SISTEMA\n\n");
                            break;
                        }
                        else
                        {
                            listarjuegosNoSuperanPromedio(Juegos,MAXJUE,promedio);
                        };
                        break;
                        exit = 0;

                        break;
                    case 3:
                        if (flagSinAlta == 0)
                        {
                            printf("\nNO EXISTEN Clientes EN EL SISTEMA\n\n");
                            break;
                        }
                        else
                        {
                            listarClienteDeJuego(Juegos,MAXJUE,Clientes,MAX,Alquileres,MAXALQ);

                            system("pause");
                        };
                        exit = 0;
                        break;
                    case 4:
                        if (flagSinAlta == 0)
                        {
                            printf("\nNO EXISTEN Clientes EN EL SISTEMA\n\n");
                            break;
                        }
                        else
                        {
                            listarJuegosDeClientes(Juegos,MAXJUE,Clientes,MAX,Alquileres,MAXALQ);
                            system("pause");
                        };

                        break;
                    case 5:
                        if (flagSinAlta == 0)
                        {
                            printf("\nNO EXISTEN Clientes EN EL SISTEMA\n\n");
                            break;
                        }
                        else
                        {

                        };

                        break;
                    case 6:
                        if (flagSinAlta == 0)
                        {
                            printf("\nNO EXISTEN Clientes EN EL SISTEMA\n\n");
                            break;
                        }
                        else
                        {

                        };

                        break;
                    case 7:
                        if (flagSinAlta == 0)
                        {
                            printf("\nNO EXISTEN Clientes EN EL SISTEMA\n\n");
                            break;
                        }
                        else
                        {
                            listarJuegoEnFechaDeterminada(Alquileres,MAXALQ,Juegos,MAXJUE);
                        };

                        break;
                    case 8:
                        if (flagSinAlta == 0)
                        {
                            printf("\nNO EXISTEN Clientes EN EL SISTEMA\n\n");
                            break;
                        }
                        else
                        {
                            listarClienteEnFechaDeterminada(Alquileres,MAXALQ,Clientes,MAX);
                        };

                        break;
                    case 9:
                        if (flagSinAlta == 0)
                        {
                            printf("\nNO EXISTEN Clientes EN EL SISTEMA\n\n");
                            break;
                        }
                        else
                        {
                            listarJuegosPorImporteBurbujeo(Juegos,MAXJUE);
                            viewJuegos(Juegos,MAXJUE);
                            system("pause");
                        };

                        break;
                    case 10:
                        if (flagSinAlta == 0)
                        {
                            printf("\nNO EXISTEN Clientes EN EL SISTEMA\n\n");
                            break;
                        }
                        else
                        {
                            void listarClientesPorApellidoInsercion(eClientes list[], int len);
                            viewClientes(Clientes,MAX);
                            system("pause");
                        };

                        break;
                    case 11:
                        printf("Volviendo a menu principal");
                        exit = 1;

                        break;

                    default:
                        printf("\n\nOpcion ingresada incorrecta, por favor ingrese una opcion del 1 al 5\n\n");
                        system("pause");
                        break;


                    }

                    if(exit==0)

                    {


                        fflush(stdin);
                        system("cls");
                        break;
                    }

                    else if (seguirI == 'n')
                    {
                        printf("\n\nEsta por salir de menu socios esta seguro? s/n \n\n");
                        scanf("%c",&seguir);

                        fflush(stdin);
                        system("cls");

                    }
                    return 0;
                }
                while (seguir == 's' || seguir == 'S');
                break;
                case 6:
                        printf("\n\nSaliendo...\n");
                        system("pause");

                        break;

            default:
                printf("\n\nOpcion ingresada incorrecta, por favor ingrese una opcion del 1 al 5\n\n");
                system("pause");
                break;

            }
            printf("\n Desea continuar en inicio? si/no \n\n");
            scanf("%c",&seguir);

            fflush(stdin);
            system("cls");


        }
        while (seguir == 's' || seguir == 'S');

        printf("\n\n Saliendo...\n\n");

    }
    return 0;
};

int funcion_opcionesInicio()
{
    int opcionIngresada;
    char auxOpcion[5];


    system("cls");
    printf("\n******* INICIO ******* \n\n");
    printf(" 1- CLIENTES \n");
    printf(" 2- JUEGOS \n");
    printf(" 3- ALTA ALQUILER \n");
    printf(" 4- MOSTRAR ALQUILERES \n");
    printf(" 5- INFORMES \n");
    printf(" 6- SALIR \n ");
    while(!funcion_getStringNumeros("Ingrese una opcion del 1-6 : ",auxOpcion))
    {
        printf("ERROR- La opcion tiene que ser solo numeros del 1 al 6\n\n");

        system("pause");
    }

    opcionIngresada=atoi(auxOpcion);


    return opcionIngresada;
};
