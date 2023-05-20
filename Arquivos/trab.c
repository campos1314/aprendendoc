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
    
    printf("A palavra precisa ter de 3 até 7 caracteres\n");
    do{
        printf("Qual é a palavra? ");
        scanf("%s", palavra); 
        len = strlen(palavra);
        
    }while( len<3||len>7 );
    
    
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
                        imprime(i, j, i, j+2);
                        
                    }
                    else if(matriz[i][j]==palavra[0] && matriz[i][j-1]==palavra[1] && matriz[i][j-2]==palavra[2]){
                        n++;
                        imprime(i, j, i, j-2);
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
                        imprime(i, j, i+2, j);
                    }
                    else if(matriz[i][j]==palavra[0] && matriz[i-1][j]==palavra[1] && matriz[i-2][j]==palavra[2]){
                        n++;
                        imprime(i, j, i-2, j);
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
                        imprime(i, j, i, j+4);
                        
                    }
                    else if(matriz[i][j]==palavra[0] && matriz[i][j-1]==palavra[1] && matriz[i][j-2]==palavra[2] &&matriz[i][j-3]==palavra[3] && matriz[i][j-4]==palavra[4]){
                        n++;
                        imprime(i, j, i, j-4);
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
                        imprime(i, j, i+4, j);
                    }
                    else if(matriz[i][j]==palavra[0] && matriz[i-1][j]==palavra[1] && matriz[i-2][j]==palavra[2] &&matriz[i-3][j]==palavra[3] &&matriz[i-4][j]==palavra[4]){
                        n++;
                        imprime(i, j, i-4, j);
                    } 
                }
                
            }
            
            break;      
            
        case 6:
        
            i=0;
            while(i<10){
                for(j=0; j<10; j++){
                    if(matriz[i][j]==palavra[0] && matriz[i][j+1]==palavra[1] && matriz[i][j+2]==palavra[2] && matriz[i][j+3]==palavra[3] && matriz[i][j+4]==palavra[4] && matriz[i][j+5]==palavra[5]){
                        n++;
                        imprime(i, j, i, j+5);
                        
                    }
                    else if(matriz[i][j]==palavra[0] && matriz[i][j-1]==palavra[1] && matriz[i][j-2]==palavra[2] &&matriz[i][j-3]==palavra[3] && matriz[i][j-4]==palavra[4] && matriz[i][j-5]==palavra[5]){
                        n++;
                        imprime(i, j, i, j-5);
                    }                                                                    
                }
                i++;
            }
            
            //matriz transposta
            for(j=0; j<10; j++){
                for(i=0; i<10; i++){
                    //printf("%c ", matriz[i][j]);
                    if(matriz[i][j]==palavra[0] && matriz[i+1][j]==palavra[1] && matriz[i+2][j]==palavra[2] && matriz[i+3][j]==palavra[3] && matriz[i+4][j]==palavra[4] && matriz[i+5][j]==palavra[5]){
                        n++;
                        imprime(i, j, i+5, j);
                    }
                    else if(matriz[i][j]==palavra[0] && matriz[i-1][j]==palavra[1] && matriz[i-2][j]==palavra[2] &&matriz[i-3][j]==palavra[3] &&matriz[i-4][j]==palavra[4] && matriz[i-5][j]==palavra[5]){
                        n++;
                        imprime(i, j, i-5, j);
                    } 
                }
                
            }
            
            break;    
        
        case 7:
            i=0;
            while(i<10){
                for(j=0; j<10; j++){
                    if(matriz[i][j]==palavra[0] && matriz[i][j+1]==palavra[1] && matriz[i][j+2]==palavra[2] && matriz[i][j+3]==palavra[3] && matriz[i][j+4]==palavra[4] && matriz[i][j+5]==palavra[5] && matriz[i][j+6]==palavra[6]){
                        n++;
                        imprime(i, j, i, j+6);
                        
                    }
                    else if(matriz[i][j]==palavra[0] && matriz[i][j-1]==palavra[1] && matriz[i][j-2]==palavra[2] &&matriz[i][j-3]==palavra[3] && matriz[i][j-4]==palavra[4] && matriz[i][j-5]==palavra[5] && matriz[i][j-6]==palavra[6]){
                        n++;
                        imprime(i, j, i, j-6);
                    }                                                                    
                }
                i++;
            }
            
            //matriz transposta
            for(j=0; j<10; j++){
                for(i=0; i<10; i++){
                    //printf("%c ", matriz[i][j]);
                    if(matriz[i][j]==palavra[0] && matriz[i+1][j]==palavra[1] && matriz[i+2][j]==palavra[2] && matriz[i+3][j]==palavra[3] && matriz[i+4][j]==palavra[4] && matriz[i+5][j]==palavra[5] && matriz[i+6][j]==palavra[6]){
                        n++;
                        imprime(i, j, i+6, j);
                    }
                    else if(matriz[i][j]==palavra[0] && matriz[i-1][j]==palavra[1] && matriz[i-2][j]==palavra[2] &&matriz[i-3][j]==palavra[3] &&matriz[i-4][j]==palavra[4] && matriz[i-5][j]==palavra[5] && matriz[i-6][j]==palavra[6]){
                        n++;
                        imprime(i, j, i-6, j);
                    } 
                }
                
            }
            
            break;
            
        default:
            n=0;
            break;
    
        
    }
    
    if(n==1){
        printf("Foi encontrado: %d palavra", n);
    }else if(n>1){
        printf("Foi encontrado: %d palavras", n);
    }else{
        printf("Nenhuma palavra foi encontrada");
    }
    
    return 0;
}