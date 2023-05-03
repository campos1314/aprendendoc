/******************************************************************************

Escreva um algoritmo que leia o tamanho de um vetor e preencha o vetor de forma
randômica e mostre qual é o menor e o maior elemento deste vetor, e indique a posição
que eles se encontram.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i, n, maior=0, menor;
    printf("Qual será o tamanho do vetor?");
    scanf("%d", &n);
    int vetor[n];
    srand(time(NULL));
    for(i=0; i<=n; i++){
        vetor[i] = rand()%100;
        printf("%d\n", vetor[i]);
    }
    menor = vetor[0];
    
    for(i=0; i<=n; i++){
        if(maior<vetor[i]){
            maior = vetor[i];
        }
    }
    for(i=0; i<=n; i++){
        if(menor>vetor[i]){
            menor = vetor[i];
        }
    }
    printf("O menor: %d\nO maior: %d", menor, maior);
    
}