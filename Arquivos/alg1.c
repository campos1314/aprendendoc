/******************************************************************************

Bubble Sort

*******************************************************************************/
#include <stdio.h>
#define N 6

int main()
{
    int i, j, aux, vetor[N]={20, 11, 31, 8, 6, 5};

    for(i=1; i<N; i++){
        for(j=0; j<N-1; j++){
            if(vetor[j]>vetor[i]){
                aux = vetor[j];
                vetor[j] = vetor[i];
                vetor[i] = aux;
                
            }    
            
        }
        
    }
    for(i=0; i<N; i++){
        printf("%d ", vetor[i]);
    }

    return 0;
}
