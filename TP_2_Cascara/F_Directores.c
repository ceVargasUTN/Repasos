#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

int initDirector(S_Director* director, int length)
{
    int retorno = 0;
    int i;
    for (i = 0; i<length ; i++)
    {
        director[i].flag = 0;
    }
 return retorno;
}

int addToArrayD(S_Director* director, int length)
{
    int retorno = -1, i, incrementoID = 0;

    for (i = 0; i<length ; i++)
    {
        if (director[i].flag == 0)
        {
            printf("Nombre:");
            scanf("%s", director[i].nombre);

            printf("Nacionalidad:");
            scanf("%s", director[i].nacionalidad);

            director[i].idDirector = incrementoID+1;
            director[i].flag = 1;
            retorno = 0;
            break;
        }
    }
 return retorno;
}
