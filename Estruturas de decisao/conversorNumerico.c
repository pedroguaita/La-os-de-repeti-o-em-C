#include <stdio.h>
#include <stdlib.h>

int main()
{
	int opcao;
	int valor;
	
	puts("Conversor de Bases Numericas\n");
	
	printf("1: Decimal para Hexadecimal \n");
	printf("2: Hexadecimal para Decimal \n\n");
	
	printf("Informe a opcao:\n");
	scanf("%d", &opcao);
	getchar();
	
	if(opcao == 1)
	{
		printf("\nInforme o valor em DECIMAL: ");
		scanf("%d", &valor);
		getchar();
		
		printf("\n%d em Hexadecimal eh %x", valor, valor);
	}
	else if(opcao == 2)
	{
		printf("\nInforme o valor em HEXADECIMAL: ");
		scanf("%x", &valor);
		getchar();
		
		printf("%x em Decimal eh %d", valor, valor);
	}
	else
	{
		puts("\nValor invalido!\n");
	}
}