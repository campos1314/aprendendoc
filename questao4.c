#include <stdio.h>

int main()
{
    int reseg, horas, min, seg;
    scanf("%d", &reseg);
    horas = reseg/3600;
    min = (reseg%3600)/60;
    seg = (reseg%3600)%60;
    printf("%d horas %d min %d seg", horas, min, seg);
}