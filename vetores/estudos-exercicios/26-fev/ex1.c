#include <stdio.h>
#include <stdlib.h>

void main(){
float media = 0;
int soma = 0, valor, cont = 0;
/*int num = 1;
int i = 0;
int soma = 0;

    while(num != 0){
        printf("Informe um valor inteiro: ");
        scanf("%d", &num);

        i++;
        soma += num;
    }
    media = soma/i;*/

    printf("Informe um valor: ");
    scanf("%d", &valor);

    while(valor != 0){
        cont += 1;
        soma += valor;

        printf("Informe um valor: ");
        scanf("%d", &valor);
    }
    media = (float)soma/cont;

    printf("Quantidade: %d \n", cont);
    printf("Soma: %d \n", soma);
    printf("Media: %.2f \n", media);
}
