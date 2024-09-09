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
    int valorEuros, n500, n200, n100, n50, n20, n10, n5, m2, m1;
   
    printf("Digite o valor em euros: ");
    scanf("%d%*c", &valorEuros);

    n500 = valorEuros / 500;
    valorEuros %= 500;

    n200 = valorEuros / 200;
    valorEuros %= 200;

    n100 = valorEuros / 100;
    valorEuros %= 100;

    n50 = valorEuros / 50;
    valorEuros %= 50;

    n20 = valorEuros / 20;
    valorEuros %= 20;

    n10 = valorEuros / 10;
    valorEuros %= 10;

    n5 = valorEuros / 5;
    valorEuros %= 5;

    m2 = valorEuros / 2;
    m1 = valorEuros % 2;

    printf("Notas de 500: %d\n", n500);
    printf("Notas de 200: %d\n", n200);
    printf("Notas de 100: %d\n", n100);
    printf("Notas de 50: %d\n", n50);
    printf("Notas de 20: %d\n", n20);
    printf("Notas de 10: %d\n", n10);
    printf("Notas de 5: %d\n", n5);
    printf("Moedas de 2: %d\n", m2);
    printf("Moedas de 1: %d\n", m1);

    return 0;
}
