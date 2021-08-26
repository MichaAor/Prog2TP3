#include "Menu.h"

void ejecutarEj7(){
    int *a = (int*) malloc(sizeof(int)*6);
    a[0]=15; a[1]=20; a[2]=8; a[3]=2; a[4]=99;
    printf("El numero menor del arreglo es: %d",buscarMenorRECU(a,5,a[0]));


}

int buscarMenorRECU(int*a,int val,int menor){
    int i = val-1;
	if (i >=0){
        if(a[i] > menor){
		menor = buscarMenorRECU(a,val-1,menor);
	}else{
        menor = a[i];
        }
	}
return menor;
}
