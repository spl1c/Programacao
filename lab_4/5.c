#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void FlagMultipleNumbers(int n, int primes[], int p) {
    for (int i = p * 2; i <= n; i += p) {
        primes[i] = 0; // Marca os múltiplos de p como não primos
    }
}

void SieveOfEratosthenes(int n) {
    int *primes = (int *)malloc((n + 1) * sizeof(int));
    if (!primes) {
        printf("Falha na alocação de memória.\n");
        return;
    }

    // Inicializa o vetor de primos
    memset(primes, 1, (n + 1) * sizeof(int));
    primes[0] = 0; // 0 não é primo
    primes[1] = 0; // 1 não é primo

    for (int p = 2; p * p <= n; p++) {
        // Se p é primo, marca todos os múltiplos de p como não primos
        if (primes[p] == 1) {
            FlagMultipleNumbers(n, primes, p);
        }
    }

    // Imprime os números primos
    for (int p = 2; p <= n; p++) {
        if (primes[p] == 1) {
            printf("%d ", p);
        }
    }
    printf("\n");

    free(primes); // Libera a memória alocada
}

int main() {
    int n;
    printf("Entre com o número inteiro positivo (entre 1 e 1000): ");
    scanf("%d", &n);

    if (n < 1 || n > 1000) {
        printf("Número fora do intervalo permitido.\n");
        return 1;
    }

    SieveOfEratosthenes(n);

    return 0;
}
