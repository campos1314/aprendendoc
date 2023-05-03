/******************************************************************************
Escreva um programa que crie um vetor com 10
n ́umeros inteiros informados pelo usu ́ario e exiba na tela o maior e
o menor valor presente no vetor.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int vetor[10], i, maior=0, menor;
    
    for(i=0; i<10; i++){
        printf("Informe um valor inteiro: ");
        scanf("%d", &vetor[i]);
    }
    menor = vetor[0];
    for(i=0; i<10; i++){
       if(maior<vetor[i]){
           maior = vetor[i];
       }
    }
    for(i=0; i<10; i++){
        if(menor>vetor[i]){
            menor = vetor[i];
        }
    }
    
    printf("O maior: %d\nO menor: %d", maior, menor);
    //printf("%d", menor);

    return 0;
}