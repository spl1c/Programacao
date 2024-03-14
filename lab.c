#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PARTICIPANTS 140
#define MAX_LINE_LENGTH 256

// Estrutura para armazenar os dados de cada participante
typedef struct {
    int posicao;
    char escalao[5];
    int posicao_no_escalao;
    int dorsal;
    char nome[MAX_LINE_LENGTH];
    char sexo;
    float tempo;
} Participante;

// Função para comparar dois participantes pelo escalão
int comparar_escalao(const void *a, const void *b) {
    const Participante *participanteA = *(const Participante **)a;
    const Participante *participanteB = *(const Participante **)b;
    return strcmp(participanteA->escalao, participanteB->escalao);
}



// Função para ordenar os dados por escalão
void ordenar_por_escalao(char *linhas[], char *linhas_ord[]) {
    Participante participantes[MAX_PARTICIPANTS];


    FILE *fp;
    fp = fopen("RunResults.txt", "r");
    if (fp == NULL)
        printf("ola");
    static char *string;

    // Analisar cada linha e preencher os dados do participante correspondente
    for (int i = 0; i < MAX_PARTICIPANTS; i++) {
        Participante *participante = &participantes[i];

        fscanf(fp, "%s", string);

        /*fscanf(fp, "%d\t%s\t%d\t%d\t%s[^\t]\t%c\t%f",
           &participantes->posicao,
           participante->escalao,
           &participante->posicao_no_escalao,
           &participante->dorsal,
           participante->nome,
           &participante->sexo,
           &participante->tempo);*/

        printf("%s", string);
    }
    
    // Preencher o vetor de linhas ordenado
    for (int i = 0; i < MAX_PARTICIPANTS; i++) {
        sprintf(linhas_ord[i], "%d\t%s\t%d\t%d\t%s\t%c\t%.2f\n",
                participantes[i].posicao, participantes[i].escalao,
                participantes[i].posicao_no_escalao, participantes[i].dorsal,
                participantes[i].nome, participantes[i].sexo, participantes[i].tempo);
    }
    fclose(fp);
}

int main() {

    char *linhas[MAX_PARTICIPANTS];
    char *linhas_ord[MAX_PARTICIPANTS];

    // Alocar memória para as linhas
    for (int i = 0; i < MAX_PARTICIPANTS; i++) {
        linhas[i] = (char *)malloc(MAX_LINE_LENGTH * sizeof(char));
        linhas_ord[i] = (char *)malloc(MAX_LINE_LENGTH * sizeof(char));
    }

    // Simulação: preencher linhas com alguns dados de exemplo
    // Neste ponto, você irá preencher o array linhas com os dados do arquivo
    // Ao invés de ler do arquivo, você pode inicializar os dados manualmente aqui

    // Ordenar os dados por escalão
    ordenar_por_escalao(linhas, linhas_ord);

    // Escrever os dados ordenados
    for (int i = 0; i < MAX_PARTICIPANTS; i++) {
        printf("%s", linhas_ord[i]);
    }

    // Liberar memória alocada para as linhas
    for (int i = 0; i < MAX_PARTICIPANTS; i++) {
        free(linhas[i]);
        free(linhas_ord[i]);
    }

    return 0;
}
