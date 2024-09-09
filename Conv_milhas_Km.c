/******************************************************************************

Autor: Eduardo da Costa.
Data: 29/08/2024
Modulo: Logica de Programação
Exercico 1
Curso: Eletronica 4.0
Local: INDT

*******************************************************************************/
#include <stdio.h>

int main(void)
{
    float milhas, km;
    printf("Insira um valor para milhas: ");
    scanf("%f%*c", &milhas);
    
    km = milhas * 1.690;
    printf ("%f milhas é igual a %f kilometros\n", milhas, km);

    return 0;
}

