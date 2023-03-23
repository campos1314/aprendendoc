/******************************************************************************
Faça um algoritmo para receber um número
qualquer e informar na tela se  ́e par ou  ́ımpar.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int a, calc;
    printf("Informe um número:\n");
    scanf("%d", &a);
    calc = a%2;
    if (calc == 0){
        printf("É par: %d", a);
    }else{
        printf("É ímpar: %d", a);
    }
    
    
    
    return 0;
}