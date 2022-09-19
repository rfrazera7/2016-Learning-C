#include <stdio.h>
float financeiro( )
{
    float saldo1, saldo2, saldo3, media;
    scanf("%f", &saldo1);
    scanf("%f", &saldo2);
    scanf("%f", &saldo3);
    media=(saldo1+saldo2+saldo3)/3;
    return media;
}
main ( )
{
    float resultado;
    resultado=financeiro();
    printf("A media de faturamento nos ultimos meses eh: %f",
           resultado);
}
