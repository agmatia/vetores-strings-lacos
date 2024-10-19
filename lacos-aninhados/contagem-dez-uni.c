#include <stdio.h>
#include <stdlib.h>

#define NUM 9

int main()
{
    int uni, dez; //uni: interno ; dez: externo.

    dez = 0;
    while(dez <= NUM){
        uni = 0;
        while(uni <= NUM){
            printf("%d %d \n", dez, uni);
            uni++;
        }

        dez++;
    }
}
