#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// A. Função para ler números e armazenar no vetor
void leNumeros(int **vetor, int *n) {
    printf("Quantos números inteiros pretende introduzir? ");
    scanf("%d", n);
    
    *vetor = (int *)malloc(*n * sizeof(int));
    
    printf("Introduza os números (valores de 0 a 9): ");
    for (int i = 0; i < *n; i++) {
        scanf("%d", &((*vetor)[i]));
    }
}

// B. Função para codificar o vetor de inteiros
void codificaVetor(int *vetor, int n, char **resultado) {
    *resultado = (char *)malloc(n * 2 * sizeof(char) + 1); // Espaço suficiente para codificação
    int pos = 0;
    for (int i = 0; i < n; i++) {
        int count = 1;
        while (i < n - 1 && vetor[i] == vetor[i + 1] && count < 9) {
            count++;
            i++;
        }
        pos += sprintf(*resultado + pos, "%d%d", count, vetor[i]);
    }
    (*resultado)[pos] = '\0'; // Termina a string
}

// C. Função para decodificar a string para o vetor de inteiros
void decodificaString(char *resultado, int **vetor, int *n) {
    int len = strlen(resultado);
    *n = 0;
    for (int i = 0; i < len; i += 2) {
        *n += resultado[i] - '0'; // Calcula o tamanho necessário
    }

    *vetor = (int *)malloc(*n * sizeof(int));
    int pos = 0;
    for (int i = 0; i < len; i += 2) {
        int count = resultado[i] - '0';
        int val = resultado[i + 1] - '0';
        for (int j = 0; j < count; j++) {
            (*vetor)[pos++] = val;
        }
    }
}

int main() {
    int *vetor, n;
    char *resultado;
    
    leNumeros(&vetor, &n);
    codificaVetor(vetor, n, &resultado);
    
    printf("Vetor codificado: %s\n", resultado);

    int *vetorDecodificado;
    decodificaString(resultado, &vetorDecodificado, &n);

    printf("Vetor decodificado: ");
    for (int i = 0; i < n; i++) {
        printf("%d", vetorDecodificado[i]);
    }
    printf("\n");

    // Libera a memória alocada
    free(vetor);
    free(resultado);
    free(vetorDecodificado);

    return 0;
}
