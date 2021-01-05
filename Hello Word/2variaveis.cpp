#include <stdio.h>
#include <stdlib.h>

int main() {
	int opcao;

	printf("Digite um numero de 1 a 7: ");
	scanf_s("%d", &opcao);

	switch (opcao)

	{
	case 1:
		printf("O dia escolhido foi domingo\n\n");
		break;
	case 2:
		printf("O dia escolhido foi segunda\n\n");
		break;
	case 3:
		printf("O dia escolhido foi terca \n\n");
		break;
	case 4:
		printf("O dia escolhido foi quarta\n\n");
		break;
	case 5:
		printf("O dia escolhido foi quinta\n\n");
		break;
	case 6:
		printf("O dia escolhido foi sexta\n\n");
		break;
	case 7:
		printf("O dia escolhido foi sabado\n\n");
		break;
	default:
		printf("Nao existe dia da semana para esse numero");
		break;
	}
}