#include <stdio.h>
void instrucao ( )
{
    printf("******CALCULO DA MEDIA DE 4 NOTAS******");
    printf ("\nDigite as 4 notas:\n");
}
void leitura ( )
{
    int valor1, valor2, valor3, valor4;
    float media;
    scanf("%d", &valor1);
    scanf("%d", &valor2);
    scanf("%d", &valor3);
    scanf("%d", &valor4);

    media=(valor1+valor2+valor3+valor4)/4;
    printf("\nA media eh: %.2f", media);
}
main( )
{
    instrucao( );
    leitura ( );
}
