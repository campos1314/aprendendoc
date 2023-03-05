#include <stdio.h>


int main()
{
   float largura, altura, latas, calculando;
   scanf("%f %f", &largura, &altura);
   calculando = 300*(largura*altura);
   latas = calculando/2000;
   
   printf("%.2f", latas);

}
