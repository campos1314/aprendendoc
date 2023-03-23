/******************************************************************************

Faça um algoritmo que leia um número inteiro e informe se ele é primo ou não.

*******************************************************************************/
int primo(int num){
    int i, primo = 1;
    
    // Verifica se o número é primo
    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            primo = 0;
            break;
        }
    }
    
    return primo;
}

#include <stdio.h>

int main() {
    int num, ehprimo;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    
    ehprimo = primo(num);
    // Exibe o resultado
    if (ehprimo) {
        printf("%d é um número primo.\n", num);
    } else {
        printf("%d não é um número primo.\n", num);
    }

    return 0;
}

