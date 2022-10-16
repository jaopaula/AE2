#include <stdio.h>
#define TAM 3

typedef struct banda{
    char nome[50];
    char estilo[50];
    int rank;
    int tamanho;
}BANDA;

void leBanda(BANDA *b){
    for(int i = 0; i < TAM; i++){
        printf("Insira o nome da banda: ");
        scanf("%s", &b[i].nome);
        printf("Insira o estilo: ");
        scanf("%s", &b[i].estilo);
        printf("Insira o ranking: ");
        scanf("%d", &b[i].rank);
        printf("Insira o tamanho: ");
        scanf("%d", &b[i].tamanho);
    }
}

void exibeBanda(BANDA b){
    printf("\n\n-----EXIBINDO BANDA------\nNome da banda: %s\nEstilo da banda: %s\nRank da banda: %d\nTamanho da banda: %d", b.nome, b.estilo, b.rank, b.tamanho);
}

int main()
{
    BANDA v[TAM];
    leBanda(v);
    exibeBanda(v[0]);

    return 0;
}


