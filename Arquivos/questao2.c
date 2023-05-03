/******************************************************************************
Nao chega no numero em si, faz o "teste" com outros numeros
*******************************************************************************/

#include<stdio.h>
int main() 
{
    int i, n;
    printf("Informe o valor de n:");
    scanf("%d",&n);
    for (i = 2; i < n; i++) {
        if (n%i==0) {
        printf("Nao é primo");
        break;
        }
    }
    if (i==n) {
        printf("É primo");
    }
    return 0;
}
