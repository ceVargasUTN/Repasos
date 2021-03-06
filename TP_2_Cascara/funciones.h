#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct {
    int idPelicula;
    int idDirector;
    char titulo[50];
    char nacionalidad[50];
    int flag;
}S_Pelicula;


typedef struct{
    int dia;
    int mes;
    int year;

}S_Fecha;

typedef struct {
    int idDirector;
    char nombre[50];
    char nacionalidad[50];
    int flag;

}S_Director;


/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */
//int obtenerEspacioLibre(EPersona lista[]);

/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
//int buscarPorDni(EPersona lista[], int dni);

#endif // FUNCIONES_H_INCLUDED
