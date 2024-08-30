/******************************************************************************

Autor: Eduardo da Costa.
Data: 29/08/2024
Modulo: Logica de Programação
Exercico 2
Curso: Eletronica 4.0
Local: INDT

*******************************************************************************/
#include <stdio.h>

int main(void)
{
    int n1,n2, sum, dif;
    printf("Insira 2 numeros inteiros: ");
    scanf("%d%d%*c", &n1,&n2);
    sum = n1 + n2;
    dif = n1 - n2;
    printf("\n A soma dos numeros é igual a: %d e a diferença é igual a: %d.\n", sum, dif);

    return 0;
}
