#include <stdio.h>
#include <stdlib.h>
int main()
{
	/*declaraçoes: todas as variaveis utilizadas precisam ser declaradas*/
	int idade;

	/*programa*/
	printf("digite a sua idade\n");
	scanf_s("%d", & idade);
	printf("%d?Legal, voce parece ter %d anos!\n", idade, idade * 2);
	/*fim do programa*/
	system("pause");
	return 0;
}