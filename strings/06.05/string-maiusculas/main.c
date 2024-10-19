#include <stdio.h>
#include <stdlib.h>

#define MIN 97
#define MAX 122

int main(){
char nome[50];
int i=0;

    printf("Informe a string: ");
    gets(nome);
    //scanf("%[^\n]", &nome);



    while(nome[i] != 0){
        if(nome[i] >= MIN && nome[i] <= MAX){
            nome[i] -= 32;
        }
        printf(" %c  %d \n", nome[i], nome[i]);
        i++;
    }
    printf(" %s", nome);
}
