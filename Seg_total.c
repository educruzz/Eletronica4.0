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
    int seg, dias, horas, minutos, segundos;

    printf("Digite o número de segundos: ");
    scanf("%d%*c", &seg);
    
    dias = seg / 86400;
    seg %= 86400;

    horas = seg / 3600;
    seg %= 3600;

    minutos = seg / 60;
    segundos = seg % 60;

    printf("%d seg = %d dia(s), %d hora(s), %d minuto(s) e %d segundo(s)\n", seg, dias, horas, minutos, segundos);

    return 0;
}