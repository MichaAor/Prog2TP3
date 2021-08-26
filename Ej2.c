#include "Menu.h"

void ejecutarEj2(){
    int a,pot;
    printf("Ingrese un valor \n");
    fflush(stdin);
    scanf("%d",&a);
    printf("Ingrese la potencia(a cuanto elevara su valor) \n");
    fflush(stdin);
    scanf("%d",&pot);
    a = potencia(a,pot);
    printf("La potencia de su valor ingresado es: %d",a);
}

int potencia(int num,int elev){
    int rta;
    if(elev==0){
        rta=1;
    }else{
        rta=num*potencia(num,elev-1);
    }
return rta;
}
