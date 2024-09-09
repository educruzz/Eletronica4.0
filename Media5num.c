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
    int num1, num2, num3, num4, num5;
    float soma, media;

    printf("Digite o primeiro número: ");
    scanf("%d%*c", &num1);

    printf("Digite o segundo número: ");
    scanf("%d%*c", &num2);

    printf("Digite o terceiro número: ");
    scanf("%d%*c", &num3);

    printf("Digite o quarto número: ");
    scanf("%d%*c", &num4);

    printf("Digite o quinto número: ");
    scanf("%d%*c", &num5);

    soma = num1 + num2 + num3 + num4 + num5;

    media = soma / 5.0;

    printf("A média dos números é: %.2f\n", media);

    return 0;
}