#include <stdio.h>
#include <stdlib.h>

#define REF 100

int main(){
int num, i=0, j=0, soma=0, contAcima=0;
int lista[REF];
float media;

    printf("Informe um valor: ");
    scanf("%d", &num);

    while(num != 0){
        lista[i] = num;
        i++;
        soma += num;

    printf("Informe um valor: ");
    scanf("%d", &num);
    }
    media = (float)soma/i;
    printf("media: %.2f", media);
    printf("soma: %d", soma);
    printf("contador: %d", i);

    /*for(j=0;j<i;j++){
        if(lista[j] > media){
            printf("%d", lista[j]);
            contAcima++;
        }
    }*/
    printf("Quantidade de notas acima da media: %d", contAcima);
}
