#include <stdio.h>

float potencia(int p){
    float f = 1;
    for (int i = 0; i < p; i++)
    {
        f *= 10.0;
    }
    
    return f;
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
        printf("Volte a escrever o numero num intervalo entre 1 e 7: ");
        scanf("%d", &n);
    }
    
    // calculo da aproximação do decimal (explicação)

    // criamos uma potencia de base 10 com o tamanho do numero n, caso n seja 2, então pot será 100
    pot = potencia(n);
    // multiplicamos o numero por 'pot' de modo a mover o ponto decimal para a casa que queremos aproximar
    rounded_number *= pot;
    // somamos 0.5 caso a casa decimal seja 0.5 ou mais seja aproximada para o inteiro acima quando a convertermos para inteiro
    rounded_number += 0.5;
    // finalmente convertemos em inteiro que vai aproximar o numero em direcao a 0
    rounded_number = (int)rounded_number;
    // dividimos pela potencia para colocar o ponto decimal onde estava no inicio
    rounded_number /= pot;

    // ex: 
    // numero: 4.36672, queremos reduzi-lo a 2 casas decimais
    // pot seria 100, 4.36672 * pot = 436.672
    // 436.672 + 0.5 = 437.172, int(437.172) é 437
    // finalmente 437 / pot = 4.37 ficando corretamente proximado

    rounded_number = (int)(number*pot + 0.5)/pot;
    // printf do resultado esperado e do resultado do algoritmo desenvolvido
    printf("O valor esperado é %.*f", n, number);
    printf("O valor obtido é %f", rounded_number);
    return 0;
  
}