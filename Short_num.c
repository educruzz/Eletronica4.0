/******************************************************************************

Autor: Eduardo da Costa.
Data: 28/08/2024
Modulo: Logica de ProgramaC'C#o
Lista de Exercicios
Curso: Eletronica 4.0
Local: INDT

Escreva um programa que peC'a ao usuC!rio para inserir um nC:mero inteiro, armazene esse nC:mero em uma
variC!vel do tipo short (ou short int) e o imprima de volta na tela. Quais valores podem ser inseridos? Qual C) o maior
nC:mero que vocC* pode inserir e imprimir corretamente?

*******************************************************************************/
#include <stdio.h>


int main(void)
{
	short num;

	printf("Insira um nC:mero inteiro: ");
	scanf("%hd%*c", &num);
	printf("VocC* digitou: %hd\n", num);

	return 0;
}
