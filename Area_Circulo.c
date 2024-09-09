/******************************************************************************

Autor: Eduardo da Costa.
Data: 28/08/2024
Modulo: Logica de Programação
Lista de Exercicios
Curso: Eletronica 4.0
Local: INDT

*******************************************************************************/
#include <stdio.h>

int main(void)
{
    const double pi = 3.141592653589793;
    double raio, area;

    printf("Digite o raio do círculo: ");
    scanf("%lf%*c", &raio);

    area = pi * raio * raio;

    printf("A área do círculo é: %.2lf\n", area);

    return 0;
}