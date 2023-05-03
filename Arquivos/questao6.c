/******************************************************************************

Escreva um programa que crie dois vetores com 10
numeros inteiros cada um informados pelo usu ́ario e exiba na tela
a soma de cada elemento dos dois vetores

*******************************************************************************/

#include <stdio.h>

int main(){
    
    int vetor[10], soma=0, i;
    
    for(i=0; i<10; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
        soma = soma + vetor[i];
    } 
    printf("A soma: %d", soma);
    
    
    return 0;
}