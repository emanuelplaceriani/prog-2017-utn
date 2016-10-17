#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED


typedef struct {

    char nombre[50];
    int edad;
    int estado;
    char dni[10];

}Epersona;




/**
 * Obtiene el primer indice libre del array y carga la persona si hay espacio.
 * @param lista el array se pasa como parametro.
 * @return devuelve -1 si no hay espacio disponible
 */
int obtenerEspacioLibre(Epersona persona[],int);



/**
*Cambia el estado de la persona a 0;
* @param recorre el array que se pasa por parametro
* cambia el estado a 0 si el dni que se ingresa coincide con el de alguna persona cargada
*/
void bajaPersona(Epersona persona[],int);


/**
* Recorre y Ordena la lista de personas pasadas por parametro
* @param Le paso el array de  personas y la cantidad
*/

/**
void mostrarOrdenada(Epersona persona[],int);
void graficoEdades(Epersona persona[],int);








#endif // FUNCIONES_H_INCLUDED

