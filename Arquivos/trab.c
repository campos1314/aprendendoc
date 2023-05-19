/******************************************************************************

caça-palavras

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, n=0;
    char matriz[10][10], palavra[5];
    
    palavra[0] = 'c';
    palavra[1] = 'a';
    palavra[2] = 's';
    palavra[3] = 'a';
    palavra[4] = '\0';
    
    for(i=0; i<10; i++){
        scanf("%s", matriz[i]);
    }
    printf("FIM\n");
    
//    for(i=0; i<10; i++){
//        for(j=0; j<10; j++){
//            if(matriz[i][j] =='c'&& matriz[i][j+1] =='a' && matriz[i][j+2] =='s'&& matriz[i][j+3] =='a');
//                printf("Olá mundo");
//        }
//    }j = 0; j < 9; j++)

    i=0;
    while(i<10){
        for(j=0; j<10; j++){
            if(matriz[i][j]=='c'&& matriz[i][j+1]=='a' && matriz[i][j+2]=='s' && matriz[i][j+3]=='a'){
                n++;
            }
            else if(matriz[i][j]=='c'&& matriz[i][j-1]=='a' && matriz[i][j-2]=='s'&&matriz[i][j-3]=='a'){
                n++;
            }                                                                    
        }
        i++;
    }

    printf("%d", n);



    return 0;
}


