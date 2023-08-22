#include <stdio.h>
#include <string.h>

#define TAM 30
#define M 5

typedef struct {
    char nome[TAM];
    int intervalo;
    char descricao[TAM];
    char nomeArquivo[TAM];
    int duracao;
} EP;

typedef struct {
    char nomeSerie[TAM];
    EP lista[M];
    int reproduzido[M];
} SERIE;

// Função para imprimir tudo da serie
void imprimir(SERIE *ptr) {
    printf("Nome da Série: %s\n", ptr->nomeSerie);
    
    for(int i=0; i< M; i++){
        printf("%d ", ptr->reproduzido[i]);
    }
    printf("\n");
    for (int i = 0; i < M; i++) {
        printf("Episódio %d:\n", i + 1);
        printf("Nome: %s\n", ptr->lista[i].nome);
        printf("Tempo Assistido: %d minutos\n", ptr->lista[i].intervalo);
        printf("Descrição: %s\n", ptr->lista[i].descricao);
        printf("Nome do Arquivo: %s\n", ptr->lista[i].nomeArquivo);
        printf("Duração: %d minutos\n", ptr->lista[i].duracao);
    }
}
int verifacarSeAssistiu(SERIE *ptr, int n){
    if(n>M||n<0){
        //caso tenha fornecido um num de ep que nn existe
        return -1;
    }else{
        if(ptr->reproduzido[n-1] == 0){
            //caso nao tenha assistido
            return 0;
        }
        //caso tenha assistido
        return 1;
    }
}
void alteraStatusAssistiu(SERIE *ptr, int n){
    int x = verifacarSeAssistiu(ptr, n);
    if(x == 0){
        ptr->reproduzido[n-1] = 1;
        ptr->lista[n-1].intervalo += 10;
        ptr->lista[n-1].duracao -= 10;
    }
}

int main(void) {
    int a=-1;
    SERIE friends;
    SERIE *ptr = &friends;

    strcpy(friends.nomeSerie, "Friends");

    for(int i=0; i<M; i++){
        friends.reproduzido[i] = 0;
    }

    for (int i = 0; i < M; i++) {
        sprintf(friends.lista[i].nome, "Episódio %d", i + 1);
        friends.lista[i].intervalo = 0;
        sprintf(friends.lista[i].descricao, "Descrição do episódio %d", i + 1);
        sprintf(friends.lista[i].nomeArquivo, "episodio%d.mp4", i + 1);
        //tempo em minutos
        friends.lista[i].duracao = 30;
    }
    while(a == -1){
        printf("Escolha qual episódio para assistir (1-5): ");
        scanf("%d ", &a);
        a = verifacarSeAssistiu(ptr, a);
    }
    alteraStatusAssistiu(ptr, a);
    imprimir(ptr);
    

    
    return 0;
}