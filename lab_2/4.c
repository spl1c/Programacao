#include <stdio.h>
#include <stdlib.h>

int main() {

    char primeiro, segundo, terceiro;
    int r, s;
    printf("Escreve o primeiro caracter: ");
    scanf(" %c", &primeiro);
    printf("Escreve o segundo caracter: ");
    scanf(" %c", &segundo);
    printf("Escreve o terceiro caracter: ");
    scanf(" %c", &terceiro);

    s = (primeiro - '0') * 100 + (segundo - '0') * 10 + (terceiro - '0');
    r = s * 2;
    printf("O resultado é: %d", r);
    return 0;
}
