#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int main(){
int i=0, notas[MAX], qtd=0, soma=0, n=0;
float media=0;

    printf("nota: ");
    scanf("%d", &n);

    while(n != 0){
        notas[qtd] = n;
        qtd++;
        soma+=n;  //ok

        printf("nota: ");
        scanf("%d", &n);
    }
    printf("conteudo do vetor: \n");

    for(i=0; i<qtd; i++){
        printf("pos %d - val %d \n",  i,  notas[qtd]);
    }
    media = (float)soma/qtd;  //ok
    printf("media dos valores: %.2f", media);
}
