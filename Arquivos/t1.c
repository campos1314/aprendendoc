#include<stdio.h>

void retornaPermutacao(int *n, int *result){
    if(*n>1){
        for(int i=1; i<=*n; i++){
            *result *= i;  
        }
    }else{
        *result = 0;
    }

}

int main(void){
    int n, result = 1;
    int *resultado = &result;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    retornaPermutacao(&n, resultado);

    printf("O resultado eh: %d\n", *resultado);


    return 0;
}