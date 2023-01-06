#include <stdio.h>

float logicanegoc(float preco, float dinheiro, float quantidade){
  float valor;
  valor = preco *  quantidade;
  if(valor > dinheiro){
    return 0;
  } else{
    return (dinheiro - valor);
  }
  
  
}

int main(){
  
  float preco, dinheiro, troco, quantidade, final;

  printf("Preço unitário do produto:");
  scanf("%f", &preco);

  printf("Quantidade comprada:");
  scanf("%f", &quantidade);

  printf("Dinheiro recebido:");
  scanf("%f", &dinheiro);

  final = logicanegoc(preco, dinheiro, quantidade);
  if (final == 0){
    printf("quantidade insuficiente de dinheiro");
  } else{
    printf("O seu troco é: %.2f", final);
  }



  return 0;
}

