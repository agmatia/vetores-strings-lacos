//exercico 14

#include <stdio.h>
#include <stdlib.h>

#define NUM 100

void main(){
int vetor[NUM], valor;
int cont=0, i=0;

    printf("Digite um valor entre 3 e 7 ou 0 para encerrar: ");
    scanf("%d", &valor);

    while(valor != 0){
        if(valor>=3 && valor<=7){
            printf("%d Ok", valor);
            vetor[cont] = valor;
            cont++;
        }else{
            printf("%d Err", valor);
        }
        printf("\nDigite um valor entre 3 e 7 ou 0 para encerrar: ");
        scanf("%d", &valor);
    }
    printf("\n");
    printf("Vetor final: ");
    for(i=0;i<cont;i++){
        printf("- %d ", vetor[i]);
    }
}
