/******************************************************************************

caça-palavras

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, len;
    char matriz[10][10], palavra[50];
    
    printf("Qual é a palvra? ");
    scanf("%s", palavra);
    len = strlen(palavra);
    
    for(i=0; i<10; i++){
        scanf("%s", matriz[i]);
    }
    printf("FIM\n");
    
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            if(matriz[i][j] =='c'&& matriz[i][j+1] =='a' && matriz[i][j+2] =='s'&& matriz[i][j+1] =='a');
                printf("Olá mundo");

        }
    }

    return 0;
}


