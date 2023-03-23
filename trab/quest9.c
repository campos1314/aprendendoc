/******************************************************************************

Faça um algoritmo que leia uma letra e informe se ela é uma vogal ou uma consoante.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char letra;
    printf("Digite uma letra qualquer:\n");
    scanf("%c", &letra);
    
        switch(letra){
        case 'a':
        printf("É uma vogal");
        break;
        
        case 'e':
        printf("É uma vogal");
        break;
        
        case 'i':
        printf("É uma vogal");
        break;
        
        case 'o':
        printf("É uma vogal");
        break;
        
        case 'u':
        printf("É uma vogal");
        break;
        
        default:
        printf("É uma consoante");
        break;
        
    }

    return 0;
}
