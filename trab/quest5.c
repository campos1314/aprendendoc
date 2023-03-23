/******************************************************************************
questão5

IMC Classificação
Menor que 18.5 Abaixo do peso
18.5 a 24.9 Peso normal
25.0 a 29.9 Sobrepeso
30.0 a 34.9 Obesidade grau I
35.0 a 39.9 Obesidade grau II
Maior que 40.0 Obesidade grau II
*******************************************************************************/

#include <stdio.h>

void imprime(float imc){
    if(imc > 40.0){
        printf("\nObesidade grau III");
    }
    if(imc >= 35.0 && imc <= 39.9){
        printf("\nObesidade grau II");
    }
    if(imc >= 30.0 && imc <= 34.9){
        printf("\nObesidade grau I");
    }
    if(imc >= 25.0 && imc <= 29.9){
        printf("\nSobrepeso");
    }
    if(imc >= 18.5 && imc <= 24.9){
        printf("\nPeso normal");
    }
    if(imc < 18.5){
        printf("\nAbaixo do peso");
    }
    
}


int main()
{
    float peso, altura, imc;
    printf("Coloque PESO e ALTURA, respectivamente abaixo:\n");
    scanf("%f %f", &peso, &altura);

    imc = peso / (altura * altura);
    printf("O seu IMC é: %f", imc);
    
    imprime(imc);
    
    
    return 0;
}


