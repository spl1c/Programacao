#include <stdio.h>
#include <time.h>
#include <math.h>

int rand1, rand2;
//Desenvolver os numeors random
void random(){
    rand1 = rand()%9 + 1;
    rand2 = rand()%9 + 1;
}
//Main com multiplicação das contas
int main()
{
    int res, aluno, i = 1;
    float percentagem;
    srand(time(NULL));
    random(rand1, rand2);
    res = rand1 * rand2;
    //Escrever a resposta dada pelo aluno
    printf("Escreve o resultado de %d*%d= ", rand1, rand2);
    scanf("%d", &aluno);
    //Caso errado, volta a tentar
    while(aluno!=res){
        printf("Erraste, tenta outra vez %d*%d= ", rand1, rand2);
        scanf("%d", &aluno);
        i++;
    }
    percentagem = 1/(float)i * 100;

    printf("Acertaste o resultado e %d, tens uma precisão de %f %%\n", res, percentagem);
    return 0;
}