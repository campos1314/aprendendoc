#include <stdio.h>

int main()
{
    int dias, diacont, mescont, anocont;
    scanf("%d", &dias);
    anocont = dias/360;
    mescont = (dias%360)/30;
    diacont = dias%365;
    printf("%d anos\n", anocont);
    printf("%d meses\n", mescont);
    printf("%d dias\n", diacont);
}