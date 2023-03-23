/******************************************************************************

Faça um algoritmo que leia a idade e o sexo de uma pessoa e informe se ela pode se
aposentar ou não, de acordo com as seguintes regras:

*******************************************************************************/

#include <stdio.h>

int main()
{
    int idade, tempotrab, calc;
    char sexo;
    printf("Informe o sexo(F/M):\n");
    scanf("%c", &sexo);
    printf("Informe a sua idade\n");
    scanf("%d", &idade);
    printf("Informe a idade quando vc começou a trabalhar:\n");
    scanf("%d", &tempotrab);
    
    calc = idade-tempotrab;
    
    if (sexo == 'F'){
        if(idade >= 55 && calc >= 30){
            printf("Pode se aposentar com sua idade: %d", idade);
        }else if(idade >= 60){
            printf("Já pode se aposentar");
        }else{
            printf("Ainda não pode se aposentar");
        }
    }else{
        if(idade >= 65){
            printf("Já pode se aposentar");
        }else{
            printf("Ainda não pode se aposentar");
        }
    }

    return 0;
}
