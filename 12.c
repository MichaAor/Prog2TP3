#include "Menu.h"

void ejecutarEj12(){
    int *a = (int*) malloc(sizeof(int)*6);
    int rta;
    a[0]=15; a[1]=20; a[2]=8; a[3]=2; a[4]=99;
    printf("Ingrese un valor que supone que contiene el array: ");
    fflush(stdin);
    scanf("%d",&rta);
    if(rta == 1){
        printf("\nEl arreglo contiene su valor");
    }else{
        printf("\nEl arreglo no contiene el valor");
    }
}

int contieneRecu(int*a,int val,int sel){
    int i = val-1; int rta;
	if (i >=0){
        if(a[i] != sel){
            rta = contieneRecu(a,val-1,sel);
        }else{
            rta = 1;
        }
	}else{
        rta = 0;
	}
return rta;
}
