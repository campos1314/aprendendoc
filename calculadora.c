#include <stdio.h>

int fatorial(int n){
        int t = 1;
        
        for(t; n > 1; n--){
            t *=n;
            
        }
    
    return t;
    
}

float soma(float a, float b){
    
    return a + b;
    
}

float subtracao(float a, float b){
    
    return a - b;
    
}

float divisao(float a, float b){
  
    return a / b;
    
}

float multiplica(float a, float b){
    
    return a * b;
}

float modulo(float a){
    
    if(a >= 0){
        return a;
    }else {
        return -1 * a;
    }
    
}




int main()
{
    char tipo;
    float numero, num, final;
    
    scanf("%c", &tipo);
    
    switch(tipo){
        
        case '+':
            scanf("%f", &numero);
            scanf("%f", &num);
            final = soma(numero, num);
            break;
           
        case '-':
            scanf("%f", &numero);
            scanf("%f", &num);
            final = subtracao(numero, num);
            break;
            
        case '*':
            scanf("%f", &numero);
            scanf("%f", &num);
            final = multiplica(numero, num);
            break;
        
        case '/':
            scanf("%f", &numero);
            scanf("%f", &num);
            final = divisao(numero, num);
            break;    
        
        case 'm':
            scanf("%f", &numero);
            final = modulo(numero);
            break;
        
        default:
            printf("Erro \n");
            break;
    
        
    }

    
    printf("%.2f", final);
    //printf("%c", tipo);
 
 
}

/******************************************************************************




*******************************************************************************/





