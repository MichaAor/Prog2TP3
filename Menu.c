#include "Menu.h"
#include "time.h"

#include "Ej1.h"
#include "Ej2.h"
#include "Ej3.h"
#include "Ej4.h"
#include "Ej5.h"
#include "Ej6.h"
#include "Ej7.h"
/*#include "Ej8.h"
#include "Ej9.h"
#include "Ej10.h"
#include "Ej11.h"*/
#include "Ej12.h"


void ejecutarMenu(){
    int op;
    char rta;
    printf("/////Bienvenido al TRABAJO PRACTICO N3///// \n");
    do{
    system("cls");
    printf("--Seleccione un Ejercicio(Del 1 al 12)--\n");
    fflush(stdin);
    scanf("%d",&op);
    ejecutarEjercicios(op);
    printf("\n===============================================\n");
    rta = validacion();
    }while(rta == 's');

    printf("Gracias por ejecutar");
}

void ejecutarEjercicios(int op){
    char rta;
    printf("Desea ver la consigna del ejercicio seleccionado?\n");
    fflush(stdin);
    scanf("%c",&rta);
    if(rta == 's'){mostrarEjercicio(op);}
    printf("\nRESOLUCION: \n");
    switch(op){
        case 1:
            ejecutarEj1();
            break;
        case 2:
            ejecutarEj2();
            break;
        case 3:
            ejecutarEj3();
            break;
        case 4:
            ejecutarEj4();
            break;
        case 5:
            ejecutarEj5();
            break;
        case 6:
            ejecutarEj6();
            break;
        case 7:
            ejecutarEj7();
            break;
        case 8:
           //ejecutarEj8();
           break;
        case 9:
           //ejecutarEj9();
           break;
        case 10:
           //ejecutarEj10();
           break;
        case 11:
           //ejecutarEj11();
           break;
        case 12:
           ejecutarEj12();
           break;
        default:
            printf("Ingreso una respuesta invalida");
            break;
    }
}

void mostrarEjercicio(int op){
    switch(op){
        case 1:
            printf("1.Calcular el factorial de un número en forma recursiva.");
            break;
        case 2:
            printf("2.Calcular la potencia de un número en forma recursiva.");
            break;
        case 3:
            printf("3.Recorrer un arreglo y mostrar sus elementos en forma recursiva.");
            break;
        case 4:
            printf("4.Recorrer un arreglo comenzando desde la posición 0 y mostrar sus elementos en forma invertida (recursivo)");
            break;
        case 5:
            printf("5.Recorrer un arreglo y mostrar sus elementos en forma recursiva.");
            break;
        case 6:
            printf("6.Sumar en forma recursiva los elementos de un arreglo de enteros y retornar el total de la suma.");
            break;
        case 7:
            printf("7.Buscar el menor elemento de un arreglo en forma recursiva");
            break;
        case 8:
            printf("8.Buscar el menor elemento de un archivo de números enteros de forma recursiva.");
            break;
        case 9:
            printf("9.Invertir los elementos de un archivo de números enteros de forma recursiva.");
            break;
        case 10:
            printf("10.Recorrer un archivo y mostrar sus elementos en forma invertida de forma recursiva.");
            break;
        case 11:
            printf("11.Ingresar valores a una variable de tipo char (por teclado) y mostrarlo en el orden inverso (hasta ingresar un ‘*’) de forma recursiva. NO usar arreglos.");
            break;
        case 12:
            printf("12.Determinar si un arreglo contiene un determinado elemento de forma recursiva.");
            break;
        default:
            printf("Ingreso una respuesta invalida");
            break;
    }
}
