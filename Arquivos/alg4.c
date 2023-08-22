#include<stdio.h>

void inverteOsValores(int *ponteiroA, int *ponteiroB){
    int aux = *ponteiroB;
    *ponteiroB = *ponteiroA;
    *ponteiroA = aux;
}
void imprimir(int *ptrA, int *ptrB){
    printf("O valor de A: %d\n", *ptrA);
    printf("O valor de B: %d\n", *ptrB);
}

int main(void){
    int a=5, b=10;
    int *ptrA=&a, *ptrB=&b;
    imprimir(ptrA, ptrB);

    inverteOsValores(ptrA, ptrB);

    imprimir(ptrA, ptrB);

    return 0;
}