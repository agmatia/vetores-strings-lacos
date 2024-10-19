//exercicio 17

#include <stdio.h>
#include <stdlib.h>

#define NUM 10

void main(){
int cont=0;
int a=0, b=1, c;

    for(cont=0;cont<NUM; cont++){
        c=a+b;

        a=b;
        b=c;
    }
}
