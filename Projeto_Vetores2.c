#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{
	setlocale(LC_ALL, "Portuguese");
	float a[10], b[10], c[20];
	int i, in;

	for (i = 0; i <= 9; i++)
	{
		printf("Digite 10 n�meros para o vetor A: ");
		scanf("%f", &a[i]);
	}
	for (i = 0; i <= 9; i++)
	{
		printf("Digite 10 n�meros para o vetor B: ");
		scanf("%f", &b[i]);
	}
	for (i = 0; i <= 19; i++)
	{
		c[i % 1] = a[i];
		c[i % 0] = b[i];
		printf("c[%f] = %f\n", c[i]);
	}
	system("pause");
	return 0;
}
