#include <stdio.h>
#include <stdlib.h>


int histogram(float vect[], int k)
{
    int results[k];
    float min = vect[0];
    float max = vect[0];


    for(int i = 0; i < ((sizeof vect)/(sizeof *vect)); i++)
    {
        if (vect[i] < min)
        {
            min = vect[i];
        }
        if (vect[i] > max)
        {
            max = vect[i];
        }
    }

    float largura = (max-min)/k;
    int indice;

    for(int j=0; j < k; j++)
    {
        indice = (int)vect[j]/largura;
        results[indice]++;
    }

    return results;
}

void printhistogram(int results[], int k)
{
    for(int i = 0; i<k;i++)
    {
        printf("%d ", i);
        for(int j=0; j<results[i];++j){
            printf("*");
        }
    }
}
int main()
{   
    int k;
    int n;
    int div = 1;
    printf("Introduza o número de intervalos: ");
    scanf("%d", &k);
    printf("\nIntroduza a quantidade de valores: ");
    scanf("%d", &n);

    float vect[n];

    for(int i=0; i<n; i++)
    {
        vect[i] = (float) rand();
        
    }

    int results = histogram(vect, k);
    printhistogram(results, k);

}