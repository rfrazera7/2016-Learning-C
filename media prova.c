#include <stdio.h>
#include <stdlib.h>

main ()
{
    float nota1, nota2, media;
    printf("Digite a nota da sua primeira prova\n");
    scanf("%f", &nota1);
    printf("\nDigite a nota da sua segunda prova\n");
    scanf("%f", &nota2);
    media=(nota1+nota2)/2;
    printf("\nA media das provas eh\n");
    printf("%.2f", media);



}
