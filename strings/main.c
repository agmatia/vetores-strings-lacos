#include <stdio.h>
#include <stdlib.h>

int main(){
char nome[50];
int i, size;

    printf("digite seu nome: ");
    gets(nome);
    fflush(stdin);

    printf("voce digitou: %s \n", nome);

    printf("Tamanho da funcao String: %d \n", strlen(nome));
    size = strlen(nome);

    for(i=0;i<size;i++){
        printf("%c  ", nome[i]);
    }
//    cont=0;
//    i=0;
//    while (nome[i] != 0){
//        printf("%c ", nome[i]);
//        cont++;
//        i++;
//    }
//    printf("\nComprimento da string: %d \n", cont);
}
