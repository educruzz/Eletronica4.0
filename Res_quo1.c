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
    int num1, num2, quo_in, resto;
    float quo_real;
    
    printf("Digite um número: ");
    scanf("%d%*c", &num1);
    
    printf("Digite outro número: ");
    scanf("%d%*c", &num2);
    
    quo_in = num1 / num2;
    resto = num1 % num2;
    quo_real =  (float)num1 / num2;
    printf("O quociente inteiro é igual a: %d\n", quo_in);
    printf("O resto é igual a: %d\n", resto);
    printf("O quociente é: %.2f", quo_real);

    return 0;
}