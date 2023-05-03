/******************************************************************************
Escreva um algoritmo que leia o primeiro nome de uma pessoa e informe quantos
caracteres este nome possui

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
    char nome[50];
    int tamanho;
    printf("Digite o primeiro nome: (vai até o espaço):\n");
    scanf("%s", nome);
    tamanho = strlen(nome);
    printf("Esse nome possui:");
    printf("%d caracteres", tamanho);

    return 0;
}
