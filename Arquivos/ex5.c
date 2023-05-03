/******************************************************************************
Escreva um algoritmo que leia o primeiro e o segundo nome de uma pessoa e informe
quantos caracteres este nome possui.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
    char nome[50];
    int tamanho;
    printf("Digite o primeiro e segundo nome:\n");
    fgets(nome, 50, stdin);
    
    tamanho = strlen(nome);
    tamanho = tamanho - 1;
    printf("Esse nome possui:");
    printf("%d caracteres", tamanho);

    return 0;
}
