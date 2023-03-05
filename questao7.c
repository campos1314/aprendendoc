#include <stdio.h>

int main()
{
    float tempC, tempF;
    scanf("%f", &tempF);
    tempC = (tempF-32)*5/9;
    printf("%.2f", tempC);
}
