#include <stdio.h>
#include <stdlib.h>

#define REF 100

int main(){
int num, cont=0, i=0, j=0, valor;
int lista[REF];

    printf("Informe um valor: ");
    scanf("%d", &num);

    while(num != 0){
        lista[cont] = num;
        cont++;

        printf("Informe um valor: ");
        scanf("%d", &num);
    }
    printf("\nProcurar: ");
    scanf("%d", &valor);

    for(i=0;i<cont;i++){
        if(valor == lista[i]){
            j++;
            printf("O numero %d esta na posicao %d \n", valor, i+1);
    }
    //system("pause");
}
    if(j==0){
        printf("O numero %d nao foi encontrado", valor);
    }else{
        printf("O numero %d foi encontrado %d vezes", valor, j);
    }
}
