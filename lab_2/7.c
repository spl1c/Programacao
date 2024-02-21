#include <stdio.h>

int main(void) 
{   
    double number = 3.9438426527542; 
    int n;
    double rounded_number;
    // input de um numero real
    printf("Escreva um numero real a sua escolha: ");
    scanf("%f", &number);
    // input de n, numero de casas decimais
    printf("Escreva um numero n que seja entre 1 e 7: ");
    scanf("%d", &n);

    // aqui fazia alguma cena pa aproximar


    printf("O valor esperado é %.*f", n, number); // output do resultado esperado
    printf("O valor obtido é %f", rounded_number);// e do resultado obtido

}