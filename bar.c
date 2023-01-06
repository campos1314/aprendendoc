//Desafio do bar
#include <stdio.h>

float calcpreco(int quatcerv, int quatrefri, int quatespet){
  float valor;
  valor = (quatcerv*5)+(quatrefri*3)+(quatespet*7);
  return valor;
}

void imprime(char sexo){
  if (sexo == 'F'){
    printf("\nIngresso = R$ 8.00");
  }else {
    printf("\nIngresso = R$ 10.00");
  }
  
}
void impr(float consumo){
  if(consumo > 30){
    printf("\nCouvert = R$ 0.00");
  } else {
    printf("\nCouvert = R$ 4.00");
  }
}


float logic(float consumo){
  if(consumo > 30){
    return consumo;
  } else {
    return (consumo + 4); 
  }
}
float logica(char sexo, float inter){
  if (sexo == 'F'){
    return (inter + 8);
  }else {
    return (inter + 10);
  }
}


int main(){
  char sexo;
  int quatcerv, quatrefri, quatespet;
  float consumo, total, inter;

  printf("Qual é o sexo:");
  scanf("%c", &sexo);

  printf("Quantidade de cervejas:");
  scanf("%d", &quatcerv);

  printf("Quantidade de refrigerantes:");
  scanf("%d", &quatrefri);

  printf("Quantidade de espetinhos:");
  scanf("%d", &quatespet);

  consumo = calcpreco(quatcerv, quatrefri, quatespet);
  inter = logic(consumo);
  total = logica(sexo, inter);
   
  printf("RELATÓRIO:\n");
  printf("Consumo = R$ %.2f", consumo);//consumo
  impr(consumo);//Couvert
  imprime(sexo);//ingresso masc, fem

  printf("\nValor a pagar = R$ %.2f", total);

  return 0;
}