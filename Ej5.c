#include "Menu.h"
/////////esta mal diablos
char* passInvertido(char* a,char* b,int val){
    int j =0;
    for(int i =val-1; i>=0;i--){
            b[j] = a[i];
            j++;
    }
return b;
}

void ejecutarEj5(){
    char* a = (char*) malloc(sizeof(char)*4);
    a = "hola";
    int val = 4;
    mostrarRecursivoChar(a,val);
    if(esCapicua(a,0,val)){
        printf("\n ES CAPICUA");
    }else{
        printf("\n NO ES CAPICUA");
    }
}

void mostrarRecursivoChar(char*a,int val){
    int i = val-1;
    if(i==0){
        printf("-[%c]-",a[i]);
    }else{
        mostrarRecursivoChar(a,val-1);
        printf("-[%c]-",a[i]);
    }
}

int esCapicua(char*a,int ori,int val){
    int rta;
    if(ori<val){ //condición de corte
        if(a[ori] == a[val]){ //condición de corte
            rta = esCapicua(a, ori+1, val -1); //recursión
        }else{
            rta = 0; //solución trivial
        }
    }else{
    rta = 1; //solución trivial
    }
return rta;
}
