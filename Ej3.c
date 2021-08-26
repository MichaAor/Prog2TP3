#include "Menu.h"

void ejecutarEj3(){
    int *a = (int*) malloc(sizeof(int)*6);
    a[0]=10;
    a[1]=44;
    a[2]=53;
    a[3]=99;
    a[4]=8;
    int val = 5;
    mostrarRecursivo(a,val);

}

void mostrarRecursivo(int*a,int val){
    int i = val-1;
    if(i==0){
        printf("-[%d]-",a[i]);
    }else{
        mostrarRecursivo(a,val-1);
        printf("-[%d]-",a[i]);
    }
}

