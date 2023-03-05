/******************************************************************************

Questão 4 - Escreva um algoritmo que lê dois valores booleanos
(lógicos) e então determina se ambos são VERDADEIROS ou
FALSOS.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a && b){
        printf("Ambos são VERDADEIROS");
    }else{
        printf("1 ou ambos são FALSOS");
    }

    return 0;
}
