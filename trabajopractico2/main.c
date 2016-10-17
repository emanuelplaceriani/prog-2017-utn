#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main()
{
    char seguir='s';
    int opcion=0;
    int i,aux;
    int per=20;//
    Epersona  persona[per];


    for(i=0;i<per;i++) //Inicializa los flags en 0;
    {
        persona[i].estado=0;
        persona[i].edad=0;
        persona[i].dni[i]='\0';

    }



    while(seguir=='s')
    {
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

        fflush(stdin);
        scanf("%d",&opcion);
        system("cls");


        switch(opcion)
        {
            case 1:
     obtenerEspacioLibre(persona,per);


                break;
            case 2:
                bajaPersona(persona,per);
                break;
            case 3:
                mostrarOrdenada(persona,per);
                break;
            case 4:
                graficoEdades(persona,per);
                break;
            case 5:
                seguir = 'n';
                break;
            default: printf("ingrese una opcion valida");
        }
    }

    return 0;
}
