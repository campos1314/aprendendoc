/******************************************************************************

Há Muito, Muito Tempo Atrás

*******************************************************************************/

#include <stdio.h>

int main()
{
    int ano=2015, tempocolc, calc;
    scanf("%d", &tempocolc);
    
    calc = ano-tempocolc;
    if(calc < 0){
        calc = (calc*-1);
        printf("%d A.C.", calc);
    }else{
        calc = calc + 1;
        printf("%d D.C.", calc);
    }

    return 0;
}
