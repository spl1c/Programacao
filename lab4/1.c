#include <stdio.h>
#include <time.h>

int rand1, rand2;

void random(){
    rand1 = rand()%9 + 1;
    rand2 = rand()%9 + 1;
}

int main()
{
    int res, aluno;
    srand(time(NULL));
    random(rand1, rand2);
    res = rand1 * rand2;
    printf("Escreve o resultado de %d*%d= ", rand1, rand2);
    scanf("%d", &aluno);
    while(aluno!=res){
        printf("Erraste, tenta outra vez %d*%d= ", rand1, rand2);
        scanf("%d", &aluno);
    }
    printf("Acertaste o resultado e %d", res);
    return 0;
}