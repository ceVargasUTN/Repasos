#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

int initPelicula(S_Pelicula* pelicula, int length)
{
    int retorno = 0;
    int i;
    for (i = 0; i<length ; i++)
    {
        pelicula[i].flag = 0;
    }
 return retorno;
}

int addToArrayP(S_Pelicula* pelicula, int length, S_Fecha* fecha)
{
    int retorno = -1, i, idD;

    for (i = 0; i<length ; i++)
    {
        if (pelicula[i].flag == 0)
        {
            printf("Titulo:");
            scanf("%s", pelicula[i].titulo);

            printf("Pais origen:");
            scanf("%s", pelicula[i].nacionalidad);

            printf("Ingrese la fecha:");
            printf("Dia: ");
            scanf("%d", atoi(fecha[i].dia));
            printf("Mes: ");
            scanf("%d", fecha[i].mes);
            printf("Año: ");
            scanf("%d", fecha[i].year);

            printf("Ingrese el director: ");
            //Aca podria mostrar la lista de dorectores existentes con sus id:
            scanf("%d", &idD);

            pelicula[i].idPelicula = idD;
            pelicula[i].flag = 1;

            retorno = 0;
            break;
        }
    }
 return retorno;
}

/*void cargarPeliculas(S_Pelicula pelicula[], int index, int id)
{
    printf("nombre director");
    scanf("%s", pelicula[index].titulo);

    printf("pais director");
    scanf("%s", pelicula[index].nacionalidad);

    printf("fecha nacimiento director");
    //scanf("%s", pelicula[index].date);

    pelicula[index].flag=0;
    //pelicula[index].idP = id;
}
void cargarDirector(S_Director pelicula[], int index, int id)
{
    printf("nombre director");
    scanf("%s", directores[index].nombre);

    printf("pais director");
    scanf("%s", directores[index].paisOrigen);

    printf("fecha nacimiento director");
    scanf("%s", directores[index].fechaNac);

    directores[index].flagFree=0;
    directores[index].id = id;
}*/
