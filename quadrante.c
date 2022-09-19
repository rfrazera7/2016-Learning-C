#include <stdio.h>
#include <stdlib.h>

main()
{
    int x, y;
    printf ("obs.: lembrando que as definicoes de quadrante aqui usadas sao as que estavam nas instrucoes da EP\n\n");
    printf ("Digite a coordenada x:\n");
    scanf ("%f", &x);
    printf ("\nDigite a coordenada y:\n");
    scanf ("%f", &y);
    if (x==0 && y==0)
    printf ("\nEsta na origem\n");
    else {
    if (x==0 && y!=0)
    printf ("\nEsta no eixo das ordenadas\n");
    if(x!=0 && y==0)
    printf ("\nEsta no eixo das abssissas\n");
    if (x>0 && y>0)
    printf ("\nEsta no primeiro quadrante\n");
    if (x<0 && y>0)
    printf ("\nEsta no quarto quadrante\n");
    if (x<0 && y<0)
    printf ("\nEsta no terceiro quadrante\n");
    if (x>0 && y<0)
    printf ("\nEsta no segundo quadrante\n");}

    }

