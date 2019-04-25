#ifndef PANTALLA_H_INCLUDED
#define PANTALLA_H_INCLUDED

typedef struct{
int id;
int isEmpty;
char name [50];
char address [255];
float precio;
int tipo;
}ePantalla;
int Panta_Init(ePantalla* ,int );
int getFreeSpace(ePantalla* , int );
int Panta_Add(ePantalla* ,int , int );


#endif // PANTALLA_H_INCLUDED
