/*Desenvolva um programa que crie dois vetores A e B com 10 elementos. 
A partir deles crie um vetor C, que receberá os elementos de A e B intercalados.*/ 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{
	setlocale(LC_ALL, "Portuguese");
	int a[10], b[10], c[20], i;

	for (i = 0; i < 10; i++)
	{
		scanf("%i", &a[i]);
	}
	for (i = 0; i < 10; i++)
	{
		scanf("%i", &b[i]);
	}
	for (i = 0; i < 10; i++)
	{
		c[i * 2] = a[i];
	}
	for (i = 0; i < 10; i++)
	{
		c[i * 2 + 1] = b[i];
	}
	printf("Vetor A: ");
	for (i = 0; i < 10; i++)
	{
		printf("%i", a[i]);
	}
	printf("\n");
	printf("Vetor B: ");
	for (i = 0; i < 10; i++)
	{
		printf("Vetor B: %i", b[i]);
	}
	printf("\n");
	prinf("Vetor C: ");
	for (i = 0; i < 20; i++)
	{
		printf("%i", c[i]);
	}
	system("pause");
	return 0;
}
