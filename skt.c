#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PARTICIPANTS 140
#define MAX_LINE_LENGTH 256

typedef struct
{
    /* data */
    int posicao;
    char *escalao;
    int posicao_no_escalao;
    int dorsal;
    char *nome;
    char sexo;
    float tempo;
}part;



// Função para ler os dados do arquivo e armazenar apenas os resultados femininos
int ler_dados(char *linhas[]) {
    FILE *file = fopen("RunResults.txt", "r");
    if (file == NULL) {
        perror("Erro ao abrir o arquivo RunResults.txt");
        exit(EXIT_FAILURE);
    }

    char line[MAX_LINE_LENGTH];
    part participantes[140];
    int num_participantes = 0;
    int i = 0;

    // Ler o arquivo e armazenar apenas os resultados femininos
    while (fgets(line, MAX_LINE_LENGTH, file) != NULL && num_participantes < MAX_PARTICIPANTS) {
        printf("Linha lida: %s\n", line); // Debugging para verificar a linha lida
        sscanf(line, "%d\t%s\t%d\t%d\t%[^\t]s\t%c\t%f\n",
        &participantes[i].posicao,
        participantes[i].escalao,
        &participantes[i].posicao_no_escalao,
        &participantes[i].dorsal, 
        participantes[i].nome,
        &participantes[i].sexo,
        &participantes[i].tempo);

        if (participantes[i].sexo == 'F') { // Verificar se o participante é feminino
            printf("Participante feminino encontrado.\n"); // Debugging para verificar se um participante feminino foi encontrado
            linhas[num_participantes] = strdup(line);
            num_participantes++;

        i++;
        }
    }

    fclose(file);
    return num_participantes;
}

// Função para escrever os dados ordenados em um novo arquivo
void escrever_arquivo_ordenado(char *linhas_ord[], int num_participantes) {
    FILE *file = fopen("RunResults_out.txt", "w");
    if (file == NULL) {
        perror("Erro ao abrir o arquivo RunResults_out.txt para escrita");
        exit(EXIT_FAILURE);
    }

    // Escrever os dados ordenados no novo arquivo
    for (int i = 0; i < num_participantes; i++) {
        fputs(linhas_ord[i], file);
    }

    fclose(file);
}

int main() {
    char *linhas[MAX_PARTICIPANTS];

    // Ler os dados do arquivo e armazenar apenas os resultados femininos
    int num_participantes = ler_dados(linhas);

    // Verificar se há participantes para escrever no arquivo
    if (num_participantes == 0) {
        printf("Não foram encontrados resultados femininos.\n");
        return 0;
    }

    // Escrever os dados ordenados em um novo arquivo
    escrever_arquivo_ordenado(linhas, num_participantes);

    // Liberar memória alocada para as linhas
    for (int i = 0; i < num_participantes; i++) {
        free(linhas[i]);
    }

    printf("Resultados femininos foram gravados com sucesso no arquivo RunResults_out.txt.\n");

    return 0;
}