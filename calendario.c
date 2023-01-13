#include <stdio.h>


//verifica a quantidade de dia no mes
int verificadias(int mes){
    switch(mes){
        case 1:
            return 31;
            break;
        case 3:
            return 31;
            break;
        case 4:
            return 30;
            break;
        case 5:
            return 31;
            break;
        case 6:
            return 30;
            break;
        case 7:
            return 31;
            break;
        case 8:
            return 31;
            break;
        case 9:
            return 30;
            break;
        case 10:
            return 31;
            break;
        case 11:
            return 30;
            break;
        case 12:
            return 31;
            break;
        default:
            return 30;
            break;
    }
    
}

//verifica se o ano é bissexto
int verifica_bi(int anoint){   

    if (anoint%4 == 0 && anoint%100 !=0 || anoint%400 == 0){
        return 29;
    }else{
        return 28;
    }
}

//um "algoritmo" para descobrir o primeiro dia do mes
int diasemana(int mes,int ano){

    int a, y, m, q, dia=1, d;
    a = (14 - mes) / 12;
    y = ano - a;
    m = mes + (12*a) - 2;
    q = dia + 31*m/12 + y + y/4 - y/100 + y/400;
    d = q%7;
    return d;
}


//função para imprimir a matriz dos elemnetos do mes
void imprimeMatriz(int inicio, int final){
    if (inicio != 0){
        for(int iniciar=1; iniciar<=inicio;iniciar++){
            
            printf("    ");
        }
        
        for (int dia = 1; dia <= final; dia++)
		{
			printf("%3d", dia);
			
			
			if ( ( dia + inicio ) % 7 > 0 )
				printf(" " );
			else
				printf("\n" );
		}
    
    }else{
        
        for (int dia = 1; dia <= final; dia++)
		{
			printf("%3d", dia);
			
			if ( dia % 7 > 0 )
				printf(" " );
			else
				printf("\n" );
		}
        
    }
}


int main()
{
    int diaum, mes, ano, final;
    scanf("%d %d", &mes, &ano);
    
    if(mes!=2){
        final = verificadias(mes);
    }else{
        final = verifica_bi(ano);
    }
    
    printf(" do  se  te  qu  qu  se  sa\n");
    diaum = diasemana(mes, ano);
    imprimeMatriz(diaum, final);
    
}
