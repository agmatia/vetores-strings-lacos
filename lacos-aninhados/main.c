#include <stdio.h>
#include <stdlib.h>

#define NUM 3

int main()
{
    int col, lin; //col: interno ; lin: externo.
    int matriz[4][4] = {2,4,6,8,1,3,5,7,8,6,4,2,7,5,3,1};
    int soma = 0;
    int scoluna[4] = {0, 0, 0, 0};
    int slinha[4] = {0, 0, 0, 0};

    for(lin=0; lin<=NUM; lin++){
        for(col=0; col<=NUM; col++){
          printf("%d %d = %d \n", lin, col, matriz[lin][col]);
          soma += matriz[lin][col];

          slinha[lin] += matriz[lin][col];
          scoluna[col] += matriz[lin][col];
        }
    }
    printf("soma: %d \n\n", soma); //72

    printf("Soma das colunas: \n");
    printf("{");
    for(col=0; col<=NUM; col++){
        printf(" %d ", scoluna[col]);

    }
    printf("} \n");

    printf("Soma linhas: \n");
    printf("{");
    for(lin=0; lin<=NUM; lin++){
        printf(" %d ", slinha[lin]);

    }
    printf("} \n");
}
