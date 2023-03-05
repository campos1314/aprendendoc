/******************************************************************************

Questão 5 - Tendo como dados de entrada a altura e o sexo de
uma pessoa, construa um algoritmo que calcule seu peso ideal,
utilizando as seguintes fórmulas:
▶ para homens: (72.7 * h) – 58;
▶ para mulheres: (62.1 * h) – 44.7

*******************************************************************************/

#include <stdio.h>

int main()
{
    char sexo;
    float altura, calc;
    printf("Informe o sexo (F/M):\n");
    scanf("%c", &sexo);
    printf("Informe a altura:\n");
    scanf("%f", &altura);
    
    if (sexo  == 'F'){
        calc = (62.1*altura)-44.7;
        printf("Seu peso ideal é: %.2f", calc);
    }else{
        calc = (72.7*altura)-58;
        printf("Seu peso ideal é: %.2f", calc);
    }

    return 0;
}
