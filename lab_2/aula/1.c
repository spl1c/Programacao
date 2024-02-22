#include <stdio.h>

int main(){
    float ms = 0, t1, t2;
    int d, h, m;
    float s;
    printf("Escreve um numero em segundos: ");
    scanf("%f", &s);

    d = (int)(s/86400);
    t1 = s-(d*86400);
    h = (int)(t1/3600);
    t2 = t1-(h*3600);
    m = (int)(t2/60);
    s = t2-(m*60);
    printf("O resultado e %dd %d:%d:%.2f", d, h, m, s);

}