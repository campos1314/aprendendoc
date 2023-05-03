/******************************************************************************

Escreva um algoritmo que some somente valores pares de um vetor. O vetor deverá
receber o tamanho do vetor, e os valores deverão ser inseridos de forma randômica,
utilize a função rand.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, vetor[4], soma=0;
    srand(time(NULL));//funcao para pegar referência para gerar números aleatorios
    for(i=0; i<=4; i++){
        vetor[i] = rand()%100;
        printf("%d\n", vetor[i]);
    }
    for(i=0; i<=4; i++){
        if(vetor[i]%2 == 0){
        soma = soma + vetor[i];
        }
    }
    printf("\nA soma:%d", soma);

    return 0;
}
