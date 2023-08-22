/******************************************************************************

numero n para ser elevado a x

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n, i=0, aux=1, base=2, soma=0;
    
    printf("Digite o valor do expoente: ");
    scanf("%d", &n);
    
    int vetor[n];
    
    for(i=0; i<=n; i++){
        
        if(i==0){
            vetor[i] = 1;
        }else{
            aux = 1;
            base = 1;
            while(aux<=i){
               base *= 2;
               aux++;
            }
            printf("O numero %d na posicao %d\n", base, i);
            vetor[i] = base;
        }
        
    }
    
    
    for(i=0; i<=n; i++){
        printf("%d ", vetor[i]);
        soma += vetor[i];
    }
    printf("\nA soma eh: %d", soma);

    return 0;
}