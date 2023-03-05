/******************************************************************************
Quest ̃ao 6 - Elabore um algoritmo que calcule o que deve ser
pago por um produto, considerando o pre ̧co normal deetiqueta e a
escolha da condi ̧c ̃ao de pagamento. Utilize os c ́odigos da tabela a
seguir para ler qual acondi ̧c ̃ao de pagamento escolhida e efetuar o
c ́alculo adequado. C ́odigo para condi ̧c ̃ao de pagamento:
▶ 1 - `A vista em dinheiro ou cheque, recebe 10% de desconto
▶ 2 - `A vista no cart ̃ao de cr ́edito, recebe 15% de desconto
▶ 3 - Em duas vezes, pre ̧co normal de etiqueta sem juros
▶ 4 - Em mais duas vezes, pre ̧co normal de etiqueta mais juros de 10%

*******************************************************************************/

#include <stdio.h>

int main()
{
    float etiqueta, preco;
    int formapag;
    printf("Preço da etiqueta:\n");
    scanf("%f", &etiqueta);
    printf("Forma de pagamento de 1 até 4:\n");
    scanf("%d", &formapag);
    
    switch(formapag){
        case 1:
        preco = etiqueta*0.9;
        printf("A vista em dinheiro/cheque com 10%% de desconto: %.2f", preco);
        break;
        
        case 2:
        preco = etiqueta*0.85;
        printf("A vista no cartão de crédito com 15%% de desconto: %.2f", preco);
        break;
        
        case 3:
        preco = etiqueta;
        printf("Em duas vezes sem juros: %.2f", preco);
        break;
        
        case 4:
        preco = etiqueta*1.1;
        printf("Em mais de duas vezes com 10%% de juros: %.2f", preco);
        break;
        
        default:
        printf("Nenhuma forma de pagamento escolhida");
        break;
        
    }
    return 0;
}
