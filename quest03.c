/******************************************************************************

Questão 3 - Encontrar o dobro de um n ́umero caso ele seja
positivo e o seu triplo caso seja negativo, imprimindo o resultado.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a, calc;
    printf("Digite um número inteiro qualquer:\n");
    scanf("%d", &a);
    if (a < 0){
        calc = a*3;
        printf("O triplo é: %d", calc);
    }else{
        calc = a*2;
        printf("O dobro é: %d", calc);
    }

    return 0;
}
