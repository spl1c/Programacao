#include <stdio.h>
#include <stdlib.h>




int *histogram(float vect[], int k, int max, int min)
{
    int* results = (int *)malloc(sizeof(int)*k);
/*    float min = vect[1];
    float max = vect[1];

      for(int i = 1; i < vect[0]; i++)
    {
        if (vect[i] < min)
        {
            min = vect[i];
        }
        if (vect[i] > max)
        {
            max = vect[i];
        }
    }*/

    float largura = (float)(max-min)/k;
    int indice;

    for(int j=1; j <= vect[0]; j++)
    {
        indice = ((vect[j]-min)/largura);
        results[indice]++;
    }

    return results;
}

void printhistogram(int results[], int k)
{
    int j;
    for(int i = 0; i<k;i++)
    {
        printf("%d ", i);
        for(j=0; j<results[i];++j){
            printf("*");
        }
        printf("\n");
    }
}
int main()
{   
    int k, q, min, max;
    int div = 1;
    printf("Introduza o número de intervalos: ");
    scanf("%d", &k);
    printf("\nIntroduza a quantidade de valores: ");
    scanf("%d", &q);
    printf("Introduza uma valor mínimo: ");
    scanf("%d", &min);
    printf("Introduza um valor máximo: ");
    scanf("%d", &max);

    float vect[q+1];

    for(int i=0; i<q; i++)
    {
        vect[i+1] = (float) (rand()%100)/100;
        
    }
    vect[0] = (float)q;

    int *results = histogram(vect, k, min, max);
    printhistogram(results, k);

}