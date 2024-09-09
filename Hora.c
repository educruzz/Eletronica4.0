/******************************************************************************

Autor: Eduardo da Costa.
Data: 28/08/2024
Modulo: Logica de Programação
Lista de Exercicios
Curso: Eletronica 4.0
Local: INDT

O horário inserido é: hh horas mm minutos e ss segundos onde hh e mm podem ser apenas números inteiros. ss
pode ter dígitos após o ponto decimal.
*******************************************************************************/
#include <stdio.h>


int main(void)
{
    int hor, min;
    float seg;
    
    printf("Digite as horas: ");
    scanf("%d%*c", &hor);
    printf("Digite os minutos: ");
    scanf("%d%*c", &min);
    printf("Digite os segundos: ");
    scanf("%f%*c", &seg);
    
    printf("O horário inserido é: %d horas %d minutos e %.2f segundos\n", hor, min, seg );
    
    
      return 0;
}