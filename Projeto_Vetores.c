#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{
	setlocale(LC_ALL, "Portuguese");
	float a[10], b[10], c[20];
	int ia, ib, ic;

	for (ia = 0; ia <= 9; ia++)
	{
		printf("Digite 10 n�meros para o vetor A: ", a[ia]);
		scanf("%f", &a[ia]);
	}
	for (ib = 0; ib <= 9; ib++)
	{
		printf("Digite 10 n�meros para o vetor B: ", b[ib]);
		scanf("%f", &b[ib]);
	}
	for (ic = 0; ic <= 19; ic++)
	{
		c[ic] = a[ia];
		c[ic] = b[ib];
		printf("%i - O vetor C �: %.f\n", c[ic]);
	}
	system("pause");
	return 0;
}
