/******************************************************************************

caça-palavras

*******************************************************************************/
#include <stdio.h>
#include <string.h>

void imprime(int inicx, int inicy, int fimx, int fimy){
    if(inicx==fimx){
        if(inicy<fimy){
            printf("(%d, %d), (%d, %d) - L\n", inicx, inicy, fimx, fimy);
        }else{
            printf("(%d, %d), (%d, %d) - O\n", inicx, inicy, fimx, fimy);
        }
    }else if(inicy==fimy){
        if(inicx>fimx){
            printf("(%d, %d), (%d, %d) - N\n", inicx, inicy, fimx, fimy);
        }else{
             printf("(%d, %d), (%d, %d) - S\n", inicx, inicy, fimx, fimy);
        }
    }
    
}

int main()
{
    int i, j, n=0, len;
    char matriz[10][10], palavra[10];
    
    printf("Qual é a palavra? ");
    scanf("%s", palavra);
    len = strlen(palavra);
    
    for(i=0; i<10; i++){
        scanf("%s", matriz[i]);
    }
    printf("FIM\n");
    
    switch(len){
        
        case 3:
            
            i=0;
            while(i<10){
                for(j=0; j<10; j++){
                    if(matriz[i][j]==palavra[0] && matriz[i][j+1]==palavra[1] && matriz[i][j+2]==palavra[2]){
                        n++;
                        imprime(i, j, i, j+3);
                        
                    }
                    else if(matriz[i][j]==palavra[0] && matriz[i][j-1]==palavra[1] && matriz[i][j-2]==palavra[2]){
                        n++;
                        imprime(i, j, i, j-3);
                    }                                                                    
                }
                i++;
            }
            
            //matriz transposta
            for(j=0; j<10; j++){
                for(i=0; i<10; i++){
                    //printf("%c ", matriz[i][j]);
                    if(matriz[i][j]==palavra[0] && matriz[i+1][j]==palavra[1] && matriz[i+2][j]==palavra[2]){
                        n++;
                        imprime(i, j, i+3, j);
                    }
                    else if(matriz[i][j]==palavra[0] && matriz[i-1][j]==palavra[1] && matriz[i-2][j]==palavra[2]){
                        n++;
                        imprime(i, j, i-3, j);
                    } 
                    
                }
                
            }
            break;
            
        case 4:
            
            i=0;
            while(i<10){
                for(j=0; j<10; j++){
                    if(matriz[i][j]==palavra[0] && matriz[i][j+1]==palavra[1] && matriz[i][j+2]==palavra[2] && matriz[i][j+3]==palavra[3]){
                        n++;
                        imprime(i, j, i, j+3);
                        
                    }
                    else if(matriz[i][j]==palavra[0] && matriz[i][j-1]==palavra[1] && matriz[i][j-2]==palavra[2] &&matriz[i][j-3]==palavra[3]){
                        n++;
                        imprime(i, j, i, j-3);
                    }                                                                    
                }
                i++;
            }
            
            //matriz transposta
            for(j=0; j<10; j++){
                for(i=0; i<10; i++){
                    //printf("%c ", matriz[i][j]);
                    if(matriz[i][j]==palavra[0] && matriz[i+1][j]==palavra[1] && matriz[i+2][j]==palavra[2] && matriz[i+3][j]==palavra[3]){
                        n++;
                        imprime(i, j, i+3, j);
                    }
                    else if(matriz[i][j]==palavra[0] && matriz[i-1][j]==palavra[1] && matriz[i-2][j]==palavra[2] &&matriz[i-3][j]==palavra[3]){
                        n++;
                        imprime(i, j, i-3, j);
                    } 
                }
                
            }
            break;
            
        case 5:
            
            i=0;
            while(i<10){
                for(j=0; j<10; j++){
                    if(matriz[i][j]==palavra[0] && matriz[i][j+1]==palavra[1] && matriz[i][j+2]==palavra[2] && matriz[i][j+3]==palavra[3] && matriz[i][j+4]==palavra[4]){
                        n++;
                        imprime(i, j, i, j+3);
                        
                    }
                    else if(matriz[i][j]==palavra[0] && matriz[i][j-1]==palavra[1] && matriz[i][j-2]==palavra[2] &&matriz[i][j-3]==palavra[3] && matriz[i][j-4]==palavra[4]){
                        n++;
                        imprime(i, j, i, j-3);
                    }                                                                    
                }
                i++;
            }
            
            //matriz transposta
            for(j=0; j<10; j++){
                for(i=0; i<10; i++){
                    //printf("%c ", matriz[i][j]);
                    if(matriz[i][j]==palavra[0] && matriz[i+1][j]==palavra[1] && matriz[i+2][j]==palavra[2] && matriz[i+3][j]==palavra[3] && matriz[i+4][j]==palavra[4]){
                        n++;
                        imprime(i, j, i+3, j);
                    }
                    else if(matriz[i][j]==palavra[0] && matriz[i-1][j]==palavra[1] && matriz[i-2][j]==palavra[2] &&matriz[i-3][j]==palavra[3] &&matriz[i-4][j]==palavra[4]){
                        n++;
                        imprime(i, j, i-3, j);
                    } 
                }
                
            }
            
            break;      
            
        case 6:
            
            break;    
        
        case 7:
            
            break;
            
        default:
            printf("Erro \n");
            break;
    
        
    }
    


    printf("Foi encontrado: %d palavras", n);



    return 0;
}

