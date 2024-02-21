#include <stdio.h>

float potencia(int p){
    float i;
    for (i = 0; i <= p; i++)
    {
        i *= 10.0;
    }
    
    return i;
}
int main(void) 
{   
    float number, rounded_number, pot;
    int n;
    
    // input de um numero real
    printf("Escreva um numero real a sua escolha: ");
    scanf("%f", &number);
    // input de n, numero de casas decimais
    printf("Escreva um numero que seja entre 1 e 7: ");
    scanf("%d", &n);
    while (n<1 || n> 7)
    {
        printf("Volta a escrever o numero num intervalo entre 1 e 7: ");
        scanf("%d", &n);
    }
    
    // aqui fazia alguma cena pa aproximar
    pot = potencia(n);
    rounded_number = (number*pot + 0,5)/pot;

    printf("O valor esperado é %.*f", n, number);
    printf("O valor obtido é %f", rounded_number);
    return 0;
}