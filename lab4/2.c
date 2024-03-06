#include <stdio.h>
#include <stdlib.h>

int num(int l) {
    if (l == 0) return 1;
    int resultado = 1;
    for (int i = 1; i <= l; ++i) {
        resultado *= i;
    }
    return resultado;
}


int number(int l, int casas) {
    return num(l) / (num(casas) * num(l - casas));
}

void forma(int m) {
    for (int l = 0; l < m; l++) {

        for (int i = 0; i < m - l - 1; i++) {
            printf(" ");
        }
        for (int j = 0; j <= l; j++) {
            printf("%d ", number(l, j)); 
        }

        printf("\n");
    }
}

int main() {
    int m;
    printf("Escreve o numero de linhas do triangulo de pascal: ");
    scanf("%d", &m);
    forma(m);

    return 0;
}
