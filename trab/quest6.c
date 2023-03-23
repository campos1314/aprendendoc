/******************************************************************************

Faça um algoritmo que leia três notas de um aluno e informe se ele foi aprovado (média
maior ou igual a 7), reprovado (média menor que 5) ou ficou de recuperação (média entre 5 e
6.9

*******************************************************************************/

#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, media;
    
    printf("Digite as 3 notas: \n");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    
    media = (nota1 + nota2 + nota3) / 3.0;
    
    if (media >= 7){
        printf("aprovado, nota: %.2f", media);
    }
    if(media >= 5.0 && media < 7){
        printf("Ficou de recuperação, nota: %.2f", media);
    }
    if(media < 5){
        printf("Reprovado, nota: %.2f", media);
    }

    return 0;
}
