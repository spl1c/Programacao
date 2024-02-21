#include <stdio.h>
#include <stdlib.h>

int main() {

    char primeiro, segundo, terceiro; // criar as variaveis necessarias
    int r, s;
    printf("Escreve o primeiro caracter: ");
    scanf(" %c", &primeiro);
    printf("Escreve o segundo caracter: ");
    scanf(" %c", &segundo);
    printf("Escreve o terceiro caracter: ");
    scanf(" %c", &terceiro);

    // transformar os caracteres inseridos num numero de 3 digitos inteiro
    s = (primeiro - '0') * 100 + (segundo - '0') * 10 + (terceiro - '0'); // subtrair '0' a um caracter transforma-o num inteiro
    r = s * 2; // calcular o dobro
    printf("O resultado é: %d", r); // printar o resultado
    return 0;
}
