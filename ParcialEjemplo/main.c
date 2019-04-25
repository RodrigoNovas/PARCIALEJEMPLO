#include <stdio.h>
#include <stdlib.h>
#define MAXPAN 100
#define MAXPUB 1000
#include "Pantalla.h"
#define CHAR 51
int main()
{int option;
    int bandera=0;
    int idPan=0;
    int idPub=0;
    int tipo,encontrarAux,idAux,idbaja,Ord,Modif,NumeroValidar;
    char nombre[51],direccion[51];
    float precio;
    ePantalla pan[MAXPAN];
do{
         option= menuoption();
         if (!isValidMenu(option, 1, 5))
                {
                    printf("El numero ingresado no es valido.\n");
                    option = 0;
                }
        switch(option){
            case 1:
                system("cls");
                if(bandera==0){
                    if(Panta_Init(pan,MAXPAN)==0){
                        Panta_Init(pan,MAXPAN);
                       bandera=1;
                    }
                }
                if(getFreeSpace(pan,MAXPAN)!=-1){

                }
                else{
                    printf("No hay espacio para agregar empleados!\n");
                    break;
                }
              utn_getStringAvanzado(nombre,"Ingrese nombre de la pantalla: ","El nombre debe ser solo letras!!!!!!\n",CHAR,2);
              utn_getStringAvanzado(direccion,"Ingrese direccion: ","El apellido debe ser solo letras!!!!!\n",CHAR,2);
              utn_getFlotante(&precio,"Ingrese precio: ","Ingrese salario positivo y que no exceda 1000000000!!!!!!\n",1,1000000000,2);
              utn_getEntero(&tipo,"Ingrese tipo: ","Ingrese numeros positivos entre 1 y 200!!!!!!!!!!\n",1,200,2);
              idPan ++;
                Panta_Add(pan,MAXPAN, idPan);
                system("PAUSE");
                system("cls");
                printf("Empleado agregado correctamente\n");
                system("PAUSE");
                system("cls");
                printf("%d", idPan);
                printf("%d", nombre);
                break;
  }

  }while(option!=2);
    return 0;
}
