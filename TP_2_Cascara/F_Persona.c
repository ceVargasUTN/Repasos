#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

/*int initPelicula(S_Pelicula* pelicula, int length)
{
    int retorno = 0;
    int i;
    for (i = 0; i<length ; i++)
    {
        pelicula[i].flag = 0;
    }
 return retorno;
}

int addToArrayD(S_Pelicula* pelicula, int length, char titulo[],int id,char nacionalidad[], int date)
{
    int retorno = -1, i;

    for (i = 0; i<length ; i++)
    {
        if (pelicula[i].flag == 0)
        {
            printf("nombre director");
            strcpy(pelicula[i].titulo, titulo);
            scanf("%s", pelicula[index].titulo);
            strcpy(pelicula[i].nacionalidad, nacionalidad);
            pelicula[i].idPelicula = id;
            pelicula[i].flag = 1;
            //pelicula[i].date = date;
            retorno = 0;
            break;
        }
    }
 return retorno;
}

void cargarPeliculas(S_Pelicula pelicula[], int index, int id)
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
/*void cargarDirector(S_Director pelicula[], int index, int id)
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
