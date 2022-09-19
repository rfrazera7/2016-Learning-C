#include <stdio.h>
void divisao()
{
    float dividendo, divisor, resultado;
    printf("Digite o dividendo:");
    scanf("%f", &dividendo);
    printf("Digite o divisor:");
    scanf("%f", &divisor);
    resultado=dividendo/divisor;
    printf("Resultado: %f", resultado);
}
main ()
{
    divisao();
}
