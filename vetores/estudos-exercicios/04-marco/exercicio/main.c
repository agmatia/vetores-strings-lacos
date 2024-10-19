#include <stdio.h>
#include <stdlib.h>

#define PAD 50

int main(){
    int maior=0, menor=0, inicio, fim, op, i=0, j=0;
    int num[PAD], maiores[PAD], menores[PAD];

    printf("Opcoes disponiveis:\n");
    printf("---------------------\n");
    printf("1 - Continuar informando numeros\n");
    printf("0 - Sair\n");
    printf("---------------------\n");

    printf("Informe um numero: \n");
    scanf("%d", num[i]);

    while (num[i] =! 0){
        //printf("Informe um numero: ");
        //scanf("%d", &num[i]);
        i++;

        if(num[i]>=maior){
            maior = num[i];
            maiores[j] = num[i];
            j++;
        }else if(num[i]<=menor){
            menor = num[i];
            menores[j] = num[i];
            j++;
        }else{
            break;
        }
    i++;
    }
    system("cls");
    printf("Conteudo do vetor:\n");
    printf("%d \n", maiores[j]);
    printf("%d \n", menores[j]);
}
