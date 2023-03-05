/******************************************************************************

Faça um algoritmo que leia os valores A, B, C e
imprima na tela se a soma de A + B  ́e menor que C.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a, b, c, somaab;
    printf("Coloque os valores de A, B, C: \n");
    scanf("%d %d %d", &a, &b, &c);
    somaab = a + b;
    if (somaab < c){
        printf("A soma A+B é menor que C: %d < %d", somaab, c);
    }else{
        printf("A soma A+B é maior ou igual a C: %d >= %d", somaab, c);
    }

    return 0;
}
