#include <stdio.h>
#include <stdlib.h>

// A. Função para calcular o histograma
void calculaHistograma(float vect[], int n, int k, int histograma[]) {
    float min = 0, max = 1;
    float intervalo = (max - min) / k;
    for (int i = 0; i < k; i++) {
        histograma[i] = 0; // Inicializa o histograma
    }
    for (int i = 0; i < n; i++) {
        int indice = (vect[i] - min) / intervalo;
        if (indice == k) indice--; // Ajusta o último intervalo
        histograma[indice]++;
    }
}

// B. Função para imprimir o histograma
void imprimeHistograma(int histograma[], int k) {
    for (int i = 0; i < k; i++) {
        printf("%d - %d: ", i, i + 1);
        for (int j = 0; j < histograma[i]; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n, k;

    // Solicita ao usuário os valores de n e k
    printf("Entre com o número de elementos (n): ");
    scanf("%d", &n);
    printf("Entre com o número de intervalos (k, menor que 10): ");
    scanf("%d", &k);
    if (k >= 10) {
        printf("k deve ser menor que 10.\n");
        return 1;
    }

    float *vect = (float *)malloc(n * sizeof(float));
    int *histograma = (int *)malloc(k * sizeof(int));

    // C. Gera n valores aleatórios no intervalo [0,1] e calcula o histograma
    for (int i = 0; i < n; i++) {
        vect[i] = (float)rand() / RAND_MAX;
    }

    calculaHistograma(vect, n, k, histograma);
    imprimeHistograma(histograma, k);

    // Libera a memória alocada
    free(vect);
    free(histograma);

    return 0;
}
