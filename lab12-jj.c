#include <stdio.h>
#define MAX 5

void LEITURA (float *notas)//notas é o vetor com as 10 notas
{
    int i;
    for(i=0; i<MAX; i++)
    {
        printf ("\nDigite a nota %d: ", i);
        scanf("%f", &notas[i]);
    }
}

void CALCULO (float *notas, float *media)//recebe o vetor e me=*media
{
    int i;
    float soma = 0;

    for(i=0; i<MAX; i++)
    {
        soma = soma + notas[i];
    }

    *media = soma/MAX;
}
void IMPRESSAO (float *notas)
{
    int i;
    for (i=0; i<MAX; i++)
        printf ("\nNota %d eh: %f ", i, notas[i]);
}

float COMPARACAO (float *notas, float *media)
{
    int i, abaixo=0, j, aux[MAX];

    for(i=0; i<MAX; i++)

    {
        if (notas[i]<*media)
            abaixo++;

        aux[j]=abaixo;
    }

    for(j=0; j<MAX; j++)
    {
        printf("vetor %d na posicao %d",aux[j], j);
    }
    printf("\nO numero de alunos abaixo da media eh %d. \n", abaixo );
    return abaixo;
}

main ()
{

    float notas[MAX], m;
    int ab=0;
    LEITURA (notas);
    CALCULO (notas, &m);
    IMPRESSAO(notas);
    ab=COMPARACAO(notas, &m);

    printf("\nA media eh %.2f \n", m);
    printf("\nO numero de alunos abaixo da media eh %d. \n", ab);
}
