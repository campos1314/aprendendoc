/******************************************************************************

No exemplo fornecido abaixo (3002.00), a faixa de salário que fica de R$ 0.00 até R$ 2000.00 é
isenta de Imposto de Renda. A faixa que fica entre R$ 2000.01 e R$ 3000.00 (inclusive), tem
incidência de 8 % (ou seja, 8% sobre R$ 1000.00 = 80.00) e a faixa acima de 3000,00 tem
incidência de 18% (18% sobre R$ 2.00 = 0.36). Como resultado, temos R$ 80.36 no total. O valor
deve ser impresso com duas casas decimais.

*******************************************************************************/


#include <stdio.h>

int main() {
   float salario, imposto;
   
   printf("Informe o salário: R$ ");
   scanf("%f", &salario);

   if (salario <= 2000) {
      printf("Isento");
   }else if(salario >2000 && salario<=3000){
       imposto = salario*0.08;
       printf("R$ %.2f", imposto);
   }else if(salario >3000 && salario <=4500){
       imposto = salario*0.18;
       printf("R$ %.2f", imposto);
   }else{
       imposto = salario*0.28;
       printf("R$ %.2f", imposto);
   }

   
   return 0;
}