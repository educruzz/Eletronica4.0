/******************************************************************************

Autor: Eduardo da Costa.
Data: 02/09/2024
Modulo: Logica de ProgramaC'C#o
Exercicio: Switch_Case
Curso: Eletronica 4.0
Local: INDT

*******************************************************************************/
#include <stdio.h>

int main(void)
{
	char letra;

	printf("Escolha uma letra : ");
	scanf("%c%*c", &letra);
	switch (letra)
	{
	case 'a':
	case 'A':
	    printf("Argentina\n");
		break;
	case 'b':
	case 'B':
		printf("Brasil\n");
		break;
	case 'h':
	case 'H':
        printf("Honduras\n");
        break;
	case 'm':
	case 'M':
		printf("Mexico\n");
		break;
	case 'p':
	case 'P':
		printf("Peru\n");
		break;
	default:
		printf("Pais Deconhecido");
		break;
	}


	return 0;
}
