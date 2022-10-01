/*Faça um algoritmo que auxilie as estatísticas de um hospital sobre pacientes com dengue. 
O algoritmo deve receber os dados sobre o número de casos suspeitos,
o número de casos confirmados e o número de casos de mortes. 
No final, deve apresentar os dados inseridos e o total de casos registrados. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Casos de dengue

int main(int argc, char *argv[])
{
	int cs, cc, cm, tcr;
	printf("Numero de casos suspeitos:.. ");
	scanf("%i", &cs);
	printf("Numero de casos confirmados: ");
	scanf("%i", &cc);
	printf("Numero de casos de morte:... ");
	scanf("%i", &cm);
	printf("Casos suspeitos:.. %i\n", cs);
	printf("Casos confirmados: %i\n", cc);
	printf("Casos de morte:... %i\n", cm);
	tcr = cs + cc + cm;
	printf("Total de casos:... %i\n", tcr);
	system("pause");
	return 0;
}
