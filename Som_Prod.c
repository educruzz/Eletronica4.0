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
    float num1, num2, soma, prod;
    
    printf("Digite um número: ");
    scanf("%f%*c", &num1);
    
    printf("Digite outro número: ");
    scanf("%f%*c", &num2);
    
    soma = num1 + num2;
    prod = num1 * num2;
    printf("A soma dos números digitado é igual a: %2.f\n", soma);
    printf("O produto dos números digitado é igual a: %2.f", prod);

    return 0;
}