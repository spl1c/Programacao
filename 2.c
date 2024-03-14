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

// Função para dividir uma linha nos campos e preencher a estrutura Participante
void analisar_linha(char *linha, Participante *participante) {
    char *token = strtok(linha, "\t");
    participante->posicao = atoi(token);

    token = strtok(NULL, "\t");
    strcpy(participante->escalao, token);

    token = strtok(NULL, "\t");
    participante->posicao_no_escalao = atoi(token);

    token = strtok(NULL, "\t");
    participante->dorsal = atoi(token);

    token = strtok(NULL, "\t");
    strcpy(participante->nome, token);

    token = strtok(NULL, "\t");
    participante->sexo = token[0];

    token = strtok(NULL, "\t");
    participante->tempo = atof(token);
}

// Função para encontrar o participante pelo nome e imprimir sua posição geral e no escalão
void encontrar_participante(char *linhas[], int num_participantes, char *nome_procurado) {
    Participante participantes[MAX_PARTICIPANTS];

    // Analisar cada linha e preencher os dados do participante correspondente
    for (int i = 0; i < num_participantes; i++) {
        analisar_linha(linhas[i], &participantes[i]);
    }

    // Procurar o participante pelo nome
    for (int i = 0; i < num_participantes; i++) {
        if (strcmp(participantes[i].nome, nome_procurado) == 0) {
            printf("Posição geral: %d\n", participantes[i].posicao);
            printf("Posição no escalão: %d\n", participantes[i].posicao_no_escalao);
            return;
        }
    }

    // Se o participante não for encontrado
    printf("Participante não encontrado.\n");
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <nome_do_participante>\n", argv[0]);
        return 1;
    }

    char *linhas[MAX_PARTICIPANTS];
    int num_participantes = 0;

    // Simulação: preencher linhas com alguns dados de exemplo
    // Neste ponto, você irá preencher o array linhas com os dados do arquivo
    // Ao invés de ler do arquivo, você pode inicializar os dados manualmente aqui
    // Aqui está um exemplo de como poderia ser feito:
    /*
    linhas[num_participantes++] = "1\tF20\t1\t101\tMaria\tF\t40.5";
    linhas[num_participantes++] = "2\tM20\t1\t102\tJoão\tM\t35.2";
    // ...
    */

    // Procurar e imprimir informações do participante
    encontrar_participante(linhas, num_participantes, argv[1]);

    return 0;
}
