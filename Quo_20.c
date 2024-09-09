/******************************************************************************

Autor: Eduardo da Costa.
Data: 28/08/2024
Modulo: Logica de Programação
Lista de Exercicios
Curso: Eletronica 4.0
Local: INDT

Escreva um programa que peça ao usuário para inserir 2 números reais, calcule o quociente e armazene-o em
uma variável do tipo float. Imprima o quociente com 20 casas decimais

*******************************************************************************/
#include <stdio.h>


int main(void)
{
    float num1, num2, quo;
    
    printf("Digite um número: ");
    scanf("%f%*c", &num1);
    
    printf("Digite outro número: ");
    scanf("%f%*c", &num2);
    
    quo =  (float)num1 / num2;
    printf("O quociente é: %.20f", quo);

    return 0;
}