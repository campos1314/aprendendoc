#include <stdio.h>
#include <string.h>

#define TAM 30
#define M 5

/*Há, para cada mensagem eletrônica, o armazenamento dos seguintes dados:
remetente, destinatários, assunto, conteúdo, status (lido vs não lido) e categoria (spam, lixo ou prioritário). */


typedef struct{
    char remetente[TAM];
    char destinatario[TAM];
    char assunto[50];
    char conteudo[100];
    int st;
    //0=>Nao lido
    //1=>lido
    int categoria;
    //0=>Spam
    //1=>lixo
    //2=>prioritario
    //Por default ficara prioritario, caso execute alguma funcao, mudara para {0,1}
}MENSAG;

void preencheVetor(MENSAG *ptr){
    for (int i = 0; i < M; i++) {
        strcpy(ptr[i].remetente, "Pedro");
        strcpy(ptr[i].destinatario, "Matheus");
        strcpy(ptr[i].assunto, "bla bla bla");
        strcpy(ptr[i].conteudo, "muitas coisas bla bla bla");
        ptr[i].st = 0;
        ptr[i].categoria = 2; 

    }
}
int verificaSefoiLido(MENSAG *ptr, int n){
    //verifica se foi lido
    if(ptr[n-1].st == 0){
        return 0;
        //0=>Nao lido
    }else{
        return 1;
        //1=>Lido
    }
}
void alterarSt(MENSAG *ptr, int n){
    //altera para lido;
    int x = verificaSefoiLido(ptr, n);
    if(x == 0){
        //mudamos o status para lido
        ptr[n-1].st = 1;
    }else{
        printf("Mensagem ja foi lida\n");
    }
}


void imprimir(MENSAG *ptr){
    printf("Sua caixa de email:\n");
    printf("------------------------\n");
    for(int i=0; i<M; i++){
        printf("Mensagem numero: %d\n", i + 1);
        printf("Remetente: %s\n", ptr[i].remetente);
        printf("Destinatario: %s\n", ptr[i].destinatario);
        printf("Assunto: %s\n", ptr[i].assunto);
        printf("Conteudo: %s\n", ptr[i].conteudo);
        
        if (ptr[i].st == 0) {
            printf("Status: Não lido\n");
        } else {
            printf("Status: Lido\n");
        }
        
        switch (ptr[i].categoria) {
            case 0:
                printf("Categoria: Spam\n");
                break;
            case 1:
                printf("Categoria: Lixo\n");
                break;
            case 2:
                printf("Categoria: Prioritario\n");
                break;
            default:
                printf("Categoria: Prioritario\n");
        }
        
        printf("------------------------\n");
        
    }
}

int main(void){
    MENSAG email[M];
    MENSAG *ptr = email;

    preencheVetor(ptr);

    alterarSt(ptr, 4);
    alterarSt(ptr, 4);

    imprimir(ptr);
    

    return 0;
}