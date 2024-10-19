//exercicio 16

#include <stdio.h>
#include <stdlib.h>

#define NUM 15

void main(){
int vetor[NUM];
int valor=0, cont=0, i=0;

    while(cont<NUM){
        if(valor%3!=0 && valor%5!=0){
            vetor[cont]=valor;
            cont++;
        }
    valor++;
    }
    printf("Vetor final:\n");
    for(i=0;i<NUM;i++){
        printf("- %d ", vetor[i]);
    }
}
