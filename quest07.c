/******************************************************************************

questão7

*******************************************************************************/

#include <stdio.h>

void imprime(float media){
    if(media >= 9){
        printf("\nObteve A");
    }
    if(media>=7.5 && media<9){
        printf("\nObteve B");
    }
    if(media>=6 && media<7.5){
        printf("\nObteve C");
    }
    if(media>=4 && media<6){
        printf("\nObteve D");
    }
    if(media < 4){
        printf("\nObteve E");
    }
    
}


int main()
{
    float notaa, notab, notac, media;
    printf("Coloque as 3 notas obtidas:\n");
    scanf("%f %f %f", &notaa, &notab, &notac);
    media = (notaa + notab*2 + notac*3)/6;
    printf("Média:%.2f", media);
    
    if(media < 6) {
        printf(" Reprovado");
    }else{
        printf(" Aprovado");
    }
    imprime(media);
    
    
    return 0;
}
