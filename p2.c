#include <stdio.h>
#include <math.h>


float calcarea(float base, float altura){

  return base  * altura;
}
float calcperimet(float base, float altura){

  return (2*base) + (2* altura);
}
float calcdiametro(float base, float altura){
  float final;
  final = pow(base, 2) + pow(altura, 2);
  return sqrt(final);
}

int main()
{

  float base, altura, perimetro, diagonal, area;
  
  printf("Base do retangulo:");
  scanf("%f", &base);
  printf("Altura do retangulo:");
  scanf("%f", &altura);

  area = calcarea(base, altura);
  printf("%.2f", area);

  perimetro = calcperimet(base, altura);
  printf("\n%.2f", perimetro);

  diagonal = calcdiametro(base, altura);
  printf("\n%f", diagonal);
  
  return 0;
}