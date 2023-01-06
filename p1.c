#include <stdio.h>

float calarea(float largura, float comprimento){
  
  return largura * comprimento;
}


int main()
{
    float largura, comprimento, area, valor, preco;

    printf("Digite a largura do terreno:\n");
    scanf("%f", &largura);

    printf("Digite a comprimento do terreno:\n");
    scanf("%f", &comprimento);

    printf("Digite o valor do metro quadrado:\n");
    scanf("%f", &valor);


    area = calarea(largura, comprimento);
    preco = area * valor;
    
    printf("O valor da area é :\n");
    printf("%f", area);
    printf("\nO preco do terreno é:");
    printf("\n%f", preco);
  
    return 0;
}
