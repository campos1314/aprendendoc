/******************************************************************************

Faça um algoritmo que leia um número e informe se ele é positivo, negativo ou zero

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a;
    printf("Informe um número\n");
    scanf("%d", &a);
    
    if(a > 0){
        printf("Positivo");
    }
    if(a < 0){
        printf("Negativo");
    }
    if(a == 0){
        printf("Zero");
    }

    return 0;
}
