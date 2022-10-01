#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{

	FILE *ver;
	ver = fopen("QUESTION�RIO_1.txt", "w");
	if (!ver)
	{
		printf("Erro ao criar o arquivo"); // mensagem de erro para o caso de n�o ser poss�vel criar o arquivo
	}
	fprintf(ver,"N� Enunciado"
	fprintf(ver,"==========================================================================================================================================================\n");	
	fprintf(ver,"1                          %s %s. %s. %s. %s.\n",mquest[1],mquest[2],mquest[3],mquest[4],mquest[5]);
	fprintf(ver,"2                          %s %s. %s. %s. %s.\n",mquest[6],mquest[7],mquest[8],mquest[9],mquest[10]);  
	fprintf(ver,"3                          %s %s. %s. %s. %s.\n",mquest[11],mquest[12],mquest[13],mquest[14],mquest[15]);  
	fprintf(ver,"4                          %s %s. %s. %s. %s.\n",mquest[16],mquest[17],mquest[18],mquest[19],mquest[20]); 
	fprintf(ver,"5                          %s %s. %s. %s. %s.\n",mquest[21],mquest[22],mquest[23],mquest[24],mquest[25]);  
	fprintf(ver,"==========================================================================================================================================================\n");		
	return 0;
}
