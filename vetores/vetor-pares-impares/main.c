#include <stdio.h>
#include <stdlib.h>

#define NUM 200

void main(){
int vetor[NUM], pares[NUM], impares[NUM];
int cont=0, i=0, j=0;
int inicial;

    printf("Se valor = 0; Fim do programa \n");
    printf("------------------------------\n");
    printf("Informe um valor inicial: ");
    scanf("%d", &inicial);
    vetor[cont]=inicial;
    cont++;

    while (inicial != 0){
        printf("Informe um valor: ");
        scanf("%d", &inicial);
        vetor[cont]=inicial;
        cont++;
    }
    for(i=0;i<cont;i++){
        if(vetor[i]%2 == 0){
            pares[i]=vetor[i];
            printf("Numeros pares: %d \n", pares[i]);
            i++;
        }else{
            impares[j]=vetor[i];
            printf("Numeros impares: %d \n", impares[j]);
            j++;
        }
    }
    /*for(j=0;j<cont;j++){
        if(vetor[j]%2 != 0){
            impares[j]=vetor[i];
            printf("Numeros impares: %d \n", impares[j]);
            j++;
        }
    }*/
}
