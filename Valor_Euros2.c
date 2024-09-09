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
    float valorEuros;
    int valorCentavos, n500, n200, n100, n50, n20, n10, n5, m50, m20, m10, m5, m2, m1;

    printf("Digite o valor em euros: ");
    scanf("%f%*c", &valorEuros);

    valorCentavos = (int)(valorEuros * 100);

    n500 = valorCentavos / 50000;
    valorCentavos %= 50000;

    n200 = valorCentavos / 20000;
    valorCentavos %= 20000;

    n100 = valorCentavos / 10000;
    valorCentavos %= 10000;

    n50 = valorCentavos / 5000;
    valorCentavos %= 5000;

    n20 = valorCentavos / 2000;
    valorCentavos %= 2000;

    n10 = valorCentavos / 1000;
    valorCentavos %= 1000;

    n5 = valorCentavos / 500;
    valorCentavos %= 500;

    m50 = valorCentavos / 50;
    valorCentavos %= 50;

    m20 = valorCentavos / 20;
    valorCentavos %= 20;

    m10 = valorCentavos / 10;
    valorCentavos %= 10;

    m5 = valorCentavos / 5;
    valorCentavos %= 5;

    m2 = valorCentavos / 2;
    m1 = valorCentavos % 2;

    // Imprime o resultado
    printf("Notas de 500: %d\n", n500);
    printf("Notas de 200: %d\n", n200);
    printf("Notas de 100: %d\n", n100);
    printf("Notas de 50: %d\n", n50);
    printf("Notas de 20: %d\n", n20);
    printf("Notas de 10: %d\n", n10);
    printf("Notas de 5: %d\n", n5);
    printf("Moedas de 50 centavos: %d\n", m50);
    printf("Moedas de 20 centavos: %d\n", m20);
    printf("Moedas de 10 centavos: %d\n", m10);
    printf("Moedas de 5 centavos: %d\n", m5);
    printf("Moedas de 2 centavos: %d\n", m2);
    printf("Moedas de 1 centavo: %d\n", m1);

    return 0;
}