#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define ELEMENTS 5

int main()
{

     S_Pelicula arrayPeliculas[ELEMENTS];
     S_Director arrayDirectores[ELEMENTS];
     S_Fecha arrayFechas[ELEMENTS];

    char seguir='s';
    int opcion=0,  i, altaDirectores, emptyStrutcDirector;
    int emptyStrutcPelicula, altaPeliculas;
    emptyStrutcPelicula = initPelicula(arrayPeliculas, ELEMENTS);
    for (i = 0; i<ELEMENTS ; i++)
    {
        printf("%d\n", arrayPeliculas[i].flag);
    }
    emptyStrutcDirector = initDirector(arrayDirectores, ELEMENTS);
    for (i = 0; i<ELEMENTS ; i++)
    {
        printf("%d\n", arrayDirectores[i].flag);
    }



    while(seguir=='s')
    {
        printf("1- Agregar Director\n");
        printf("2- Agregar Pelicula\n");
        //printf("2- Borrar persona\n");
        //printf("3- Imprimir lista ordenada por  nombre\n");
        printf("3- Ver directores\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                altaDirectores = addToArrayD(arrayDirectores, ELEMENTS);
                if(altaDirectores ==0)
                {
                    printf("El director se ha ingresado correctamente.");
                }
                break;
            case 2:
                altaPeliculas = addToArrayP(arrayPeliculas, ELEMENTS, arrayFechas);
                break;
            case 3:
                for (i = 0; i<ELEMENTS ; i++)
                {
                    printf("%d\n", arrayDirectores[i].flag);
                }
                break;
            case 4:
                break;
            case 5:
                seguir = 'n';
                break;
        }
    }

    return 0;
}

