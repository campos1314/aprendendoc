/******************************************************************************
 * nome do Aluno:Matheus Geraldo da Silva Campos
 * Fazer uma função para imprimir as operações como um "MENU"
 * fazer uma função para cada operação mmatemática
 * problemas: comparação de vetor, perda de precisão com a coversão para double
 
*******************************************************************************/
#include <stdio.h>
#include <locale.h>
#include <math.h>

void bhaskara(float a, float b, float c){
    float delta, x1, x2;
    delta = b*b - 4*a*c;
    if(delta < 0) {
        printf("A equação não possui raízes reais\n");
    }
    else {
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);
        printf("As raízes da equação são: %.2f e %.2f\n", x1, x2);
    }
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

float convertgraus(float graus){
    float radianos;
    radianos = graus * M_PI / 180;
    return radianos;
}

void imprimetipos(){
    printf("Essas são as operações da calculadora:\n");
    printf("00 => Para encerrar as operações\n");
    printf("01 => Adição\n");
    printf("02 => Subtração (somente valores positivos)\n");
    printf("03 => Multiplicação\n");
    printf("04 => Divisão\n");
    printf("05 => Exponencial\n");
    printf("06 => y elevado a x\n");
    printf("07 => Raiz quadrada\n");
    printf("08 => Função seno\n");
    printf("09 => Função seno inversa\n");
    printf("10 => Função cosseno\n");
    printf("11 => Função cosseno inversa\n");
    printf("12 => Função tangente\n");
    printf("13 => Função tangente inversa\n");
    printf("14 => Logaritmo de base e (lnA = logeA), (e = euler)\n");
    printf("15 => Logaritmo de base 10\n");
    printf("16 => Resto da divisão\n");
    printf("17 => Cálculo da hipotenusa (apresentando catetos como A e B)\n");
    printf("18 => Bhaskara\n");
    printf("19 => area em m**2\n");
    printf("20 => área cilíndrico\n");
    printf("21 => área esférico\n");
    printf("22 => volume em v**3\n");
    printf("23 => volume cilíndrico\n");
    printf("24 => volume esférico\n");
    printf("25 => area circunfêrencia\n");
    printf("26 => Diametro de um círculo a partir da circunferência\n");
    printf("Qual é a operação:");
}

int main()
{
    setlocale(LC_ALL, "pt_BR.utf8");
    int tipo=1;
    float numero, num, final, terceira;
    
    
    while(tipo != 0){
        imprimetipos();
        //usuário digita o tipo da operação
        scanf("%d", &tipo);
        
        switch(tipo){
            case 0:
                printf("Atenção:\n");
                final = 0;//problema que ainda fica a impressão
                break;
            
            case 01:
                printf("Digite dois números para soma respectivamente:\n");
                scanf("%f %f", &numero, &num);
                final = soma(numero, num);
                break;
               
            case 02:
                printf("Digite dois números para subtracão respectivamente:\n");
                scanf("%f %f", &numero, &num);
                final = subtracao(numero, num);
                break;
                
            case 03:
                printf("Digite dois números para multiplicação respectivamente:\n");
                scanf("%f %f", &numero, &num);
                final = multiplica(numero, num);
                break;
            
            case 04:
                printf("Digite dois números para divisao respectivamente:\n");
                scanf("%f %f", &numero, &num);
                final = divisao(numero, num);
                break;    
            
            case 05: //Exponencial
                printf("Valor da variável: ");
                scanf("%f", &numero);
                final = exp(numero);
                break;
            
            case 06: 
                printf("Valor da base: ");
                scanf("%f", &numero);
                printf("Valor do expoete: ");
                scanf("%f", &num);
                final = pow(numero, num);
                break;
    
            case 07: 
                printf("Valor da variável: ");
                scanf("%f", &numero);
                final = sqrt(numero);
                break; 
            
            case 8: 
                printf("Digite o valor em graus: ");
                scanf("%f", &numero);
                num = convertgraus(numero);
                final = sin(num);
                break;
    
            case 9: 
                printf("Digite o valor em graus: ");
                scanf("%f", &numero);
                num = convertgraus(numero);
                final = asin(num);
                break;
    
            case 10: 
                printf("Digite o valor em graus: ");
                scanf("%f", &numero);
                num = convertgraus(numero);
                final = cos(num);
                break;
                
            case 11: 
                printf("Digite o valor em graus: ");
                scanf("%f", &numero);
                num = convertgraus(numero);
                final = acos(num);
                break;
    
            case 12: 
                printf("Digite o valor em graus: ");
                scanf("%f", &numero);
                num = convertgraus(numero);
                final = tan(num);
                break;
                
            case 13: 
                printf("Digite o valor em graus: ");
                scanf("%f", &numero);
                num = convertgraus(numero);
                final = atan(num);
                break;
                
            case 14:
                printf("Digite o valor em graus: ");
                scanf("%f", &numero);
                final = log(numero);
                break;
    
            case 15: 
                printf("Digite o valor em graus: ");
                scanf("%f", &numero);
                final = log10(numero);
                break;
    
            case 16: 
                printf("Digite o dividendo e o divisor(respectivamente) para saber o resto\n");
                scanf("%f %f", &numero, &num);
                final = fmod(numero, num);
                break;
     
            case 17: 
                printf("Digite o catetoA e o catetoB para calc a hipotenusa");
                scanf("%f %f", &numero, &num);
                final = hypot(numero, num);
                break;
            
            case 18: //problema da variável final
                printf("Calcular Bhaskara apresentando (A,b,C) respectivamente\n");
                scanf("%f %f %f", &numero, &num, &terceira);
                bhaskara(numero, num, terceira);
                break;
    
            case 19: 
                printf("Digite o valor do lado:\n");
                scanf("%f", &numero);
                final = (numero * numero);
                break;
    
            case 20: 
                printf("Digite o raio e a altura(respectivamente):\n");
                scanf("%f %f", &numero, &num);
                final = 2 * M_PI * numero * (numero + num);
                break;
    
            case 21: 
                printf("Digite o raio:\n");
                scanf("%f", &numero);
                final = 4 * M_PI * numero * numero;
                break;
    
            case 22: 
                printf("Digite o valor do lado do cubo:\n");
                scanf("%f", &numero);
                final = numero * numero * numero;
                break;
                
            case 23: 
                printf("Digite o raio e a altura(respectivamente):\n");
                scanf("%f %f", &numero, &num);
                final = M_PI * numero * numero * num;
                break;
                
            case 24: 
                printf("Digite o raio da esfera:\n");
                scanf("%f", &numero);
                final = (4/3)*M_PI*numero*numero*numero;
                break;
                
            case 25: 
                printf("Digite o valor do raio:\n");
                scanf("%f", &numero);
                final = M_PI*numero*numero;
                break;
            
            case 26: 
                printf("Digite o valor da circunferência:\n");
                scanf("%f", &numero);
                final = numero/M_PI;
                break;
            
            default:
                printf("Erro \n");
                break;
            
        }
        if(tipo == 0){
            printf("A calculadora será finalizada\n");
        }else if(tipo == 18){
            printf("Verique os valores de {A B C},caso tenha dado um resultado inesperado\n");
        }else{
            printf("O resultado: %.2f\n", final);
        }
        
    }
    
}
