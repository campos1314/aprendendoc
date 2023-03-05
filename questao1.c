#include <stdio.h>


int main()
{
    int ano, meses, dias, calculado;
    scanf("%d %d %d", &ano, &meses, &dias);
    calculado = (ano*365)+(meses*30)+dias;
    printf("%d", calculado);
}