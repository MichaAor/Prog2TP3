#include "Menu.h"

char validacion(){
    char rta;
    printf("Desea seguir? s/n   \n");
    fflush(stdin);
    scanf("%c",&rta);
return rta;
}

void ejecutarEj1(){
    int a;
    printf("Ingrese un valor \n");
    fflush(stdin);
    scanf("%d",&a);
    a = factorial(a);
    printf("El factorial de su valor ingresado es: %d",a);
}

int factorial(int num){
    int rta;
    if(num==0){
        rta=1;
    }else{
        rta=num*factorial(num-1);
    }
return rta;
}



