#include <stdio.h>

int main(){
    int ms, m, h, d, t;
    float s;
    printf("Escreve um numero em segundos: ");
    scanf("%f", &s);

    d = s/86400;
    t = s%86400;

    h = t/3600;
    s = t%3600;

    m = s/60;
    s = s%60;

    printf("O resultado e %dd %d %d: %d %d",d, h, m, s, ms);
}