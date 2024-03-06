#include <stdio.h>
#include <stdlib.h>

int num(int l){
    int i;
    for (i = 0; i <= l; ++i)
    {
        l *= i;
    }
    return l;
}

int number(int l, int casas){
    return num(l)/(num(casas)*num(l-casas));
}

void forma(int m){
    int l;
    int casas = m*2 +1;
    
    for(l = 0; l<m;l++){

        for (int i = 0;i < casas/2 - l; i++)
        {
            printf(" ");
        }
        for(int j= 0; j< l+1; j++){
            printf("%d ", number(l, casas));
        }
        
        printf("\n");
    }
      
}

int main(){
    int m;
    printf("Escreve o numero de linhas do triangulo de pascal: ");
    scanf("%d", &m);
    forma(m);

    return 0;
}