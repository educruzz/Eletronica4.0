/******************************************************************************

Autor: Eduardo da Costa.
Data: 02/09/2024
Modulo: Logica de Programação
Exercicio:Par_Impar
Curso: Eletronica 4.0
Local: INDT

*******************************************************************************/
#include <stdio.h>

int main(void)
{
    int n;
    printf("Insira um numero  inteiro: ");
    scanf("%d%*c", &n);
    
    if (n % 2==0)
    {
        printf("%d é par", n);
    }
    else {
        printf("%d é impar", n);
    }

    return 0;
}