#include <stdio.h>
#include <stdlib.h>

#define MEIO 2

int main(){
char palavra[50];
int size=0, i=0;
int palindromo=1; //true

    printf("Informe a string: ");
    gets(palavra);

    size = strlen(palavra); //comprimento do vetor
    printf("\n");

    for(i=0; i<(strlen(palavra))/MEIO; i++){
        if(palavra[i] != palavra[size-i-1]){
            palindromo = 0; //false
            break;
        }
    }
    if(palindromo == 1 ){
        printf("%s >> palindromo", palavra);
    }else{
        printf("%s >> nao e palindromo", palavra);
    }
}
