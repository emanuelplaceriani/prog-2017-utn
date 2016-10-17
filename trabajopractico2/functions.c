#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
#include <ctype.h>

int obtenerEspacioLibre(Epersona persona[],int per)
{
 int i;
 for(i=0;i<per;i++)
 {
     if(persona[i].estado==0)
     {

         printf("**AGREGAR Persona ** \n");




        printf("Ingrese Nombre:\n");
        fflush(stdin);
        gets(persona[i].nombre);


        printf("Ingrese DNI: \n");
        fflush(stdin);
        gets(persona[i].dni);

        while(strlen(persona[i].dni)<6||strlen(persona[i].dni)>9)
        {
            printf("Error , dni IVALIDO \n");
            printf("Reingrese dni\n");
            fflush(stdin);
            gets(persona[i].dni);
        }
        atoi(persona[i].dni);


        printf("Ingrese edad: \n");
        fflush(stdin);
        scanf("%d",&persona[i].edad);

        persona[i].estado=1;


        printf("Persona cargada exitosamente \n");
        system("pause");
        system("cls");


         break;
     }
 }
  if (i==per)
     {

         printf("*** NO HAY ESPACIO DISPONIBLE PARA AGREGAR DATOS *** \n");

         system("pause");
         system("cls");
         return -1;

     }

return i;

}

void bajaPersona(Epersona persona[],int per)
{
    int i,dniAux;
    char confirm;
    printf("ingrese dni de la persona a dar de baja\n");
    fflush(stdin);
    scanf("%d",&dniAux);

    for(i=0;i<per;i++)
    {
        if(dniAux==persona[i].dni)
        {
            printf("Para confirmar la baja presione 's' \n");
            fflush(stdin);
            scanf("%c",&confirm);

            if(confirm=='s')
            {
                persona[i].estado=0;

                printf("Baja realizada con exito");

                system("pause");
                system("cls");

            }
            else
            {

                printf("baja no realizada");
                system("pause");
                system("cls");

            }
        }


    }


}

 void mostrarOrdenada(Epersona persona[],int per)
 {

    int i, j, orden;
    Epersona aux;

  for (i = 0; i < per-1 ; i++)
  {
    for(j = 1 ; j < per  ; j++)
    {
         orden = strcmp(persona[i].nombre,persona[j].nombre);

        if (orden > 0)
        {
                aux = persona[i];
                persona[i] = persona[j];
                persona[j] = aux;
        }
    }
  }

  for(i=0;i<per;i++)
  {


      printf("%s , %d , %d \n", persona[i].nombre, persona[i].edad , persona[i].dni);
      system("pause");
      system("cls");
  }


 }


void graficoEdades(Epersona persona[],int per)
{
    int i, h18=0, de19a35=0, m35=0, flag=0, mayor;

    for(i=0;i<per;i++)
    {
       if(persona[i].estado==1)
       {

          if(persona[i].edad<=18)
          {
              h18++;

          }
          else if(persona[i].edad>18&&persona[i].edad<36)
          {
              de19a35++;

          }

          else {   m35 ++;}

       }
    }


    if(h18 >= de19a35 && h18 >= m35){
        mayor = h18;
    }else{
        if(de19a35 >= h18 && de19a35 >= m35)
        {
            mayor = de19a35;
        }
        else{
        mayor = m35;
        }
    }

    for(i=mayor; i>0; i--){
        if(i<10){
            printf("%02d|",i);
        }
        else
            printf("%02d|",i);

        if(i<= h18){
            printf("*");
        }
        if(i<= de19a35){
            flag=1;
            printf("\t*");
        }
        if(i<= m35){
            if(flag==0)
                printf("\t\t*");
            if(flag==1)
                printf("\t*");

        }
        //Bajo una linea luego de cada iteracion
        printf("\n");
    }
    printf("--+-----------------");
    printf("\n  |<18\t19-35\t>35");
    printf("\n   %d\t%d\t%d\n", h18, de19a35, m35);


}
