/******************************************************************************

Escreva um programa que crie um vetor com 20
n ́umeros inteiros aleat ́orios e exiba na tela todos os n ́umeros pares
do vetor

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int vetor[20], i;
    
    srand(time(0));
    
    for(i=0; i<20; i++){
        vetor[i] = rand()%100;
        //printf("%d ", vetor[i]);
        if(vetor[i]%2 == 0){
            printf("\nNumero par: %d", vetor[i]);
        }else{
            printf("\nNumero ímpar: %d", vetor[i]);
        }
    }
    

    return 0;
}
