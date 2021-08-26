#include "Menu.h"

void ejecutarEj6(){
    int *a = (int*) malloc(sizeof(int)*6);
    a[0]=1; a[1]=2; a[2]=3; a[3]=4; a[4]=5;
    printf("El resultado de la suma recursiva es: %d",sumaRecursiva(a,5));


}

int sumaRecursiva(int*a,int val){
    int i = val-1,suma;
    if(i==0){
        suma = a[i];
    }else{
        suma = a[i] + sumaRecursiva(a,val-1);
    }
return suma;
}

