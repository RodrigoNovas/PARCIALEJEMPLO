#include <stdio.h>
#include <stdlib.h>
#include "Pantalla.h"
#define MAXPAN 100
#define MAXPUB 1000
#define CHAR 51
int Panta_Init(ePantalla* PAN,int MAXEMP){
    int i;
    int retorno=-1;
    for(i=0;i<MAXEMP;i++){
        PAN[i].isEmpty=1;
        retorno=0;
    }
    return retorno;
}

int getFreeSpace(ePantalla* PAN, int MAXEMP){
    int i,retorno=-1;
    for(i=0;i<MAXEMP;i++){
        if(PAN[i].isEmpty==1){
            retorno=i;
            break;
        }
    }
    return retorno;
}


int Panta_Add(ePantalla* PAN,int MAXEMP, int id){
    int i,retorno=-1;
    char nombre [50];
    char direccion[50];
    float precio;
    int tipo;
    i=getFreeSpace(PAN,MAXEMP);

        if(i!=-1){ //si hay espacio libre


            PAN[i].isEmpty=0;
            strcpy(PAN[i].name,nombre);
            strcpy(PAN[i].address,direccion);
            PAN[i].precio=precio;
            PAN[i].tipo=tipo;
            PAN[i].id=id;
            retorno=0;


        }


    return retorno;
}

int findEmployeeById(ePantalla* PAN, int MAXEMP,int id){
    int i;
    int retorno=-1;
    for(i=0;i<MAXPAN;i++){
        if(PAN[i].isEmpty==0){ //si esta ocupado
            if(PAN[i].id==id){
                retorno=i;
                break;
            }
        }
    retorno=-1;
    }
    return retorno;
}

int menuoption(){
    int opcion;

        printf("\tMenu\n");
        printf("-----------------------BIENVENIDO----------------------------- \n");
        printf("|                                                          |\n");
        printf("|1- Alta empleados\n");
        printf("|                                                          |\n");
        printf("|2- Modificar empleados (debera tener empleados cargados)\n");
        printf("|                                                          |\n");
        printf("|3- Baja empleados (debera tener empleados cargados)\n");
        printf("|                                                          |\n");
        printf("|4- Imprimir empleados (debera tener empleados cargados/ NOMBRE Y APELLIDO APARECERAN EN MAYUSCULAS)\n");
        printf("|                                                          |\n");
        printf("|5- Salir\n");
        printf("--------------------------------------------------------------- \n");
        fflush(stdin);
        scanf("%d",&opcion);

return opcion;
}
