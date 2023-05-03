/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
[3 7 2 5 9 9 3 5 6 0 0 2 8 9 1 0 7 5 2 5]

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i, n=1000, repete=0;
    
    int vetor[n];
    
    srand(time(NULL));
    for(i=0; i<n; i++){
        vetor[i] = rand()%1000;
        printf("%d ", vetor[i]);
    }
    for(i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(vetor[i] == vetor[j] && i!=j)
                repete++;
        }
        printf("\nelemento %d repetiu %d vezes", vetor[i],repete);
        repete=0;
        
    }

}