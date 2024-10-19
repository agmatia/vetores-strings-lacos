#include <stdio.h>
#include <stdlib.h>

int main(){
char stri1[50];
char stri2[50];
int i, size1, size2, diferentes = 0;

    printf("str1: ");
    gets(stri1);

    printf("str2: ");
    gets(stri2);

    size1 = strlen (stri1);
    size2 = strlen (stri2);

    if(size1 == size2){
        for(i=0; i<size1 ;i++){
            if(stri1[i] != stri2[i]){
                diferentes = 1;
                break;
            }
        }
    }
    printf("Condicao final: %d", diferentes);
}
