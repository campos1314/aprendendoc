/******************************************************************************

Escreva um programa que dado um vetor de inteiros,
copie-o inversamente para um outro vetor vazio.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int vetor[6]={20,2,3,4,5,6}, inverso[6], j=5, i;
    
    for(i=0; i<=5; i++){
        inverso[i] = vetor[j-i];
    }
    for(i=0; i<=5; i++){
        printf("%d ", inverso[i]);
    }
    return 0;
}
