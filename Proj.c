#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#include <sys/stat.h>
int cadastrar();
char mquest[26][100];
int o = 1, y;
int criacaoarq();
int visualizacao();
void sobre(void);
char nomearq[40];
char nome[40];
char prontuario[30];
int q1a, q1b, q1c, q1d, q2a, q2b, q2c, q2d, q3a, q3b, q3c, q3d, q4a, q4b, q4c, q4d, q5a, q5b, q5c, q5d; // para computar as respostas aos itens
int cine, digi, audi, visu;																				// para receber e calcular o valor de cada porcentagem, de acordo com os itens.
int vetormaior[4], maior, v = 1;																		// calcular o maior entre os resultados do teste para apresent�-lo ao final
int questao1();																							// primeira
int questao2();
int questao3();
int questao4();
int questao5();
int cabecalhoquest();
int checkIfFileExists(const char *filename);
int arquivoperguntas();
int contq;
int main(int argc, char *argv[])
{

	setlocale(LC_ALL, "Portuguese"); // deixa o c�digo permitir caracteres do portugu�s
	char escolha;
inicio:
	nome[0] = '\0';
	prontuario[0] = '\0';
	printf("=====================================\n");
	printf("TESTE DOS SISTEMAS REPRESENTACIONAIS\n");
	printf("=====================================\n\n");
	printf("Digite seu nome: \n");
	scanf(" %39[^\n]", nome);
	printf("\nDigite seu Prontu�rio: ");
	scanf(" %39[^\n]", prontuario);
	if (strcmp(nome, "MASTER") == 0)
	{
		do
		{
			system("cls");
			printf("=====================================\n");
			printf("TESTE DOS SISTEMAS REPRESENTACIONAIS\n");
			printf("=====================================\n\n");
			printf("1. Cadastrar Question�rio\n");
			printf("2. Visualizar Question�rio\n");
			printf("3. Realizar Teste\n");
			printf("4. Sobre o Teste\n");
			printf("F. Fim\n\n");
			printf("=====================================\n\n");
			printf("Escolha -> ");
			scanf(" %c", &escolha);
			system("cls");
			switch (escolha)
			{
			case '1':
				cadastrar();
				system("PAUSE");
				break;
			case '2':
				visualizacao();
				system("PAUSE");
				break;
			case '3':
				questao1();
				criacaoarq();
				system("PAUSE");
				break;
			case '4':
				sobre();
				system("PAUSE");
				break;
			case 'F':
				exit(0);
				break;
			case 'f':
				exit(0);
				break;
			default:
				printf("ERRO AO ESCOLHER!\n");
				system("PAUSE");
				break;
			}
		} while (escolha != 'f' || escolha != 'F');
	}
	else
	{
		system("cls");
		questao1();
		criacaoarq();
		system("PAUSE");
		system("cls");
		goto inicio;
	}
}
int cadastrar()
{
	FILE *dat;
	dat = fopen("TESTE_SISTEMA_REPRESENTACIONAL.dat", "w");
	if (!dat)
	{
		printf("Erro ao criar o arquivo"); // mensagem de erro para o caso de n�o ser poss�vel criar o arquivo
	}
	for (o = 1; o <= 5; o++)
	{
		printf("Insira o %d enunciado: ", o);
		y++;
		scanf(" %99[^\n]", &mquest[y]);
		fprintf(dat, "%s\n", mquest[y]);
		printf("Insira o item cinestesico do %d enunciado: ", o);
		y++;
		scanf(" %99[^\n]", &mquest[y]);
		fprintf(dat, "%s\n", mquest[y]);
		printf("Insira o item auditivo do %d enunciado: ", o);
		y++;
		scanf(" %99[^\n]", &mquest[y]);
		fprintf(dat, "%s\n", mquest[y]);
		printf("Insira o item visual do %d enunciado: ", o);
		y++;
		scanf(" %99[^\n]", &mquest[y]);
		fprintf(dat, "%s\n", mquest[y]);
		printf("Insira o item digital do %d enunciado: ", o);
		y++;
		scanf(" %99[^\n]", &mquest[y]);
		fprintf(dat, "%s\n", mquest[y]);
	}
	fclose(dat);
}
int arquivoperguntas()
{
	int result;
	int t;
	if (checkIfFileExists("TESTE_SISTEMA_REPRESENTACIONAL.dat"))
	{
		FILE *dat;
		dat = fopen("TESTE_SISTEMA_REPRESENTACIONAL.dat", "r");
		if (!dat)
		{
			printf("Erro ao abrir o arquivo"); // mensagem de erro para o caso de n�o ser poss�vel criar o arquivo
		}
		for (t = 1; t < 26; t++)
		{
			result = fscanf(dat, " %99[^\n]", &mquest[t]);
		}
		t = 1;
		fclose(dat);
	}
	else
	{
		FILE *dat;
		dat = fopen("TESTE_SISTEMA_REPRESENTACIONAL.dat", "w");
		if (!dat)
		{
			printf("Erro ao abrir o arquivo"); // mensagem de erro para o caso de n�o ser poss�vel criar o arquivo
		}
		fprintf(dat, "Eu tomo decis�es importantes baseado em \nintui��o \no que me soa melhor \no que me parece melhor \num estudo preciso e minucioso do assunto \n");
		fprintf(dat, "Durante uma discuss�o eu sou mais influenciado por \nse eu entro em contato ou n�o com os sentimentos reais do outro. \no tom da voz da outra pessoa \nse eu posso ou n�o ver o argumento da outra pessoa \na l�gica do argumento da outra pessoa \n");
		fprintf(dat, "Eu comunico mais facilmente o que se passa comigo \npelos sentimentos que compartilho \npelo tom da minha voz \ndo modo como me visto e aparento \npelas palavras que escolho \n");
		fprintf(dat, "� muito f�cil para mim \nescolher os m�veis mais confort�veis \nachar o volume e a sintonia ideais num sistema de som \nescolher as combina��es de cores mais ricas e atraentes \nselecionar o ponto mais relevante relativo a um assunto interessante \n");
		fprintf(dat, "Eu me percebo assim \neu sou muito sens�vel � maneira como a roupa veste o meu corpo \nse estou muito em sintonia com os sons dos ambientes \neu respondo fortemente �s cores e � apar�ncia de uma sala \nse sou muito capaz de raciocinar com fatos e dados novos \n");
		fclose(dat);
		dat = fopen("TESTE_SISTEMA_REPRESENTACIONAL.dat", "r");
		if (!dat)
		{
			printf("Erro ao abrir o arquivo"); // mensagem de erro para o caso de n�o ser poss�vel criar o arquivo
		}
		for (t = 1; t < 26; t++)
		{
			result = fscanf(dat, " %99[^\n]", &mquest[t]);
		}
		t = 1;
		fclose(dat);
	}
}
int cabecalhoquest()
{
	printf("Nas frases a seguir, pontue com: ");
	printf("\n4. a que melhor descreve voc�;");
	printf("\n3. a pr�xima melhor descri��o;");
	printf("\n2. a pr�xima melhor;");
	printf("\n1. aquela que menos descreve voc�;\n");
}
int questao1()
{
	arquivoperguntas();
questao1:
	cabecalhoquest();
	printf("\n1. %s\na) %s\nb) %s\nc) %s\nd) %s\n", mquest[1], mquest[2], mquest[3], mquest[4], mquest[5]);
	printf("\na) -> ");
	scanf("%i", &q1a);
	printf("\nb) -> ");
	scanf("%i", &q1b);
	printf("\nc) -> ");
	scanf("%i", &q1c);
	printf("\nd) -> ");
	scanf("%i", &q1d);
	if (q1a != q1b && q1a != q1c && q1a != q1d && q1b != q1c && q1b != q1d && q1c != q1d)
	{
		if (q1a <= 4 && q1a >= 1 && q1b <= 4 && q1b >= 1 && q1c <= 4 && q1c >= 1 && q1d <= 4 && q1d >= 1)
		{
			system("cls");
			questao2();
			system("cls");
		}
		else
		{
			printf("\n S� podem ser inseridos os valores 1, 2, 3 e 4. \n");
			system("PAUSE");
			system("cls");
			goto questao1;
		}
	}
	else
	{
		printf("\nS�o aceitos somente n�meros diferentes entre si. \n");
		system("PAUSE");
		system("cls");
		goto questao1;
	}
}
int questao2()
{
questao2:
	cabecalhoquest();
	printf("\n2. %s\na) %s\nb) %s\nc) %s\nd) %s\n", mquest[6], mquest[7], mquest[8], mquest[9], mquest[10]);
	printf("\na) -> ");
	scanf("%i", &q2a);
	printf("\nb) -> ");
	scanf("%i", &q2b);
	printf("\nc) -> ");
	scanf("%i", &q2c);
	printf("\nd) -> ");
	scanf("%i", &q2d);
	if (q2a != q2b && q2a != q2c && q2a != q2d && q2b != q2c && q2b != q2d && q2c != q2d)
	{
		if (q2a <= 4 && q2a >= 1 && q2b <= 4 && q2b >= 1 && q2c <= 4 && q2c >= 1 && q2d <= 4 && q2d >= 1)
		{
			system("cls");
			questao3();
			system("cls");
		}
		else
		{
			printf("\n S� podem ser inseridos os valores 1, 2, 3 e 4. \n");
			system("PAUSE");
			system("cls");
			goto questao2;
		}
	}
	else
	{
		printf("\nS�o aceitos somente n�meros diferentes entre si. \n");
		system("PAUSE");
		system("cls");
		goto questao2;
	}
}
int questao3()
{
questao3:
	cabecalhoquest();
	printf("\n3. %s\na) %s\nb) %s\nc) %s\nd) %s\n", mquest[11], mquest[12], mquest[13], mquest[14], mquest[15]);
	printf("\na) -> ");
	scanf("%i", &q3a);
	printf("\nb) -> ");
	scanf("%i", &q3b);
	printf("\nc) -> ");
	scanf("%i", &q3c);
	printf("\nd) -> ");
	scanf("%i", &q3d);
	if (q3a != q3b && q3a != q3c && q3a != q3d && q3b != q3c && q3b != q3d && q3c != q3d)
	{
		if (q3a <= 4 && q3a >= 1 && q3b <= 4 && q3b >= 1 && q3c <= 4 && q3c >= 1 && q3d <= 4 && q3d >= 1)
		{
			system("cls");
			questao4();
			system("cls");
		}
		else
		{
			printf("\n S� podem ser inseridos os valores 1, 2, 3 e 4. \n");
			system("PAUSE");
			system("cls");
			goto questao3;
		}
	}
	else
	{
		printf("\nS�o aceitos somente n�meros diferentes entre si. \n");
		system("PAUSE");
		system("cls");
		goto questao3;
	}
}
int questao4()
{
questao4:
	cabecalhoquest();
	printf("\n4. %s\na) %s\nb) %s\nc) %s\nd) %s\n", mquest[16], mquest[17], mquest[18], mquest[19], mquest[20]);
	printf("\na) -> ");
	scanf("%i", &q4a);
	printf("\nb) -> ");
	scanf("%i", &q4b);
	printf("\nc) -> ");
	scanf("%i", &q4c);
	printf("\nd) -> ");
	scanf("%i", &q4d);
	if (q4a != q4b && q4a != q4c && q4a != q4d && q4b != q4c && q4b != q4d && q4c != q4d)
	{
		if (q4a <= 4 && q4a >= 1 && q4b <= 4 && q4b >= 1 && q4c <= 4 && q4c >= 1 && q4d <= 4 && q4d >= 1)
		{
			system("cls");
			questao5();
			system("cls");
		}
		else
		{
			printf("\n S� podem ser inseridos os valores 1, 2, 3 e 4. \n");
			system("PAUSE");
			system("cls");
			goto questao4;
		}
	}
	else
	{
		printf("\nS�o aceitos somente n�meros diferentes entre si. \n");
		system("PAUSE");
		system("cls");
		goto questao4;
	}
}
int questao5()
{
questao5:
	cabecalhoquest();
	printf("\n5. %s\na) %s\nb) %s\nc) %s\nd) %s\n", mquest[21], mquest[22], mquest[23], mquest[24], mquest[25]);
	printf("\na) -> ");
	scanf("%i", &q5a);
	printf("\nb) -> ");
	scanf("%i", &q5b);
	printf("\nc) -> ");
	scanf("%i", &q5c);
	printf("\nd) -> ");
	scanf("%i", &q5d);
	if (q5a != q5b && q5a != q5c && q5a != q5d && q5b != q5c && q5b != q5d && q5c != q5d)
	{
		if (q5a <= 4 && q5a >= 1 && q5b <= 4 && q5b >= 1 && q5c <= 4 && q5c >= 1 && q5d <= 4 && q5d >= 1)
		{
			system("cls");
			cine = (q1a + q2a + q3a + q4a + q5a) * 2;
			digi = (q1d + q2d + q3d + q4d + q5d) * 2;
			audi = (q1b + q2b + q3b + q4b + q5b) * 2;
			visu = (q1c + q2c + q3c + q4c + q5c) * 2;
			vetormaior[1] = cine;
			vetormaior[2] = digi;
			vetormaior[3] = audi;
			vetormaior[4] = visu;
			maior = cine;
		}
		else
		{
			printf("\n S� podem ser inseridos os valores 1, 2, 3 e 4. \n");
			system("PAUSE");
			system("cls");
			goto questao5;
		}
	}
	else
	{
		printf("\nS�o aceitos somente n�meros diferentes entre si. \n");
		system("PAUSE");
		system("cls");
		goto questao5;
	}
}
int criacaoarq()
{
	char txt[] = ".txt";
	char runderline[] = "RESULTADO_";
	char underline[] = "_";
	int i = 0;
	strcpy(nomearq, nome); // copia nome para nomearq
	for (i = 0; nomearq[i]; i++)
	{
		if (nomearq[i] == ' ')
			nomearq[i] = '_';
	}
	strcat(nomearq, underline);	 // nome do arquivo adicionado com o underline no final (rodrigo_passos_)
	strcat(nomearq, prontuario); // nome do arquivo com o prontu�rio no final (rodrigo_passos_235235)
	strcat(nomearq, txt);		 // nome do  arquivo com .txt no final(rodrigo_passos_234325.txt)
	strcat(runderline, nomearq); // nome do arquivo com RESULTADO_ no come�o (RESULTADO_rodrigo_passos_32552.txt)
	printf("TESTE\n");
	FILE *file;					   // cria arquivo, cujo ponteiro � file
	file = fopen(runderline, "w"); // abre cria arquivo, do tipo a,que escreve e n�o apaga o que j� cont�m
	if (!file)
	{
		printf("Erro ao criar o arquivo %s", nomearq); // mensagem de erro para o caso de n�o ser poss�vel criar o arquivo
	}
	printf("Foi criado o arquivo %35s \n", runderline);
	int f = 0;
	fprintf(file, "===PERFIL REPRESENTACIONAL DE ");
	fprintf(file, "%s", nome);
	fprintf(file, "=== \n\n");
	fprintf(file, "%d %% Visual   ", visu);
	fprintf(file, "%d %% Cinest�sico   ", cine);
	fprintf(file, "%d %% Auditivo   ", audi);
	fprintf(file, "%d %% Digital   ", digi);
	fprintf(file, "\n\n=========================================================================================================================================  \n\n");
	fprintf(file, "Algumas pessoas captam melhor as mensagens do mundo exterior atrav�s da audi��o, s�o as pessoas chamadas auditivas. \n");
	fprintf(file, "Outras pessoas sentem necessidade de perguntar muito, necessitam de muitas informa��es e fatos. Estas s�o as digitais. \n");
	fprintf(file, "As cinest�sicas aprendem melhor por meio das sensa��es t�teis, como o tato, a temperatura, a umidade, as sensa��es internas e as emo��es. \n");
	fprintf(file, "J� as pessoas visuais aprendem melhor quando se valendo da vis�o. \n\n");
	fprintf(file, "========================================================================================================================================= \n");
	fprintf(file, "Seu perfil � ");
	for (v = 1; v <= 4; v++)
	{
		if (vetormaior[v] > maior)
			maior = vetormaior[v];
	}
	if (maior == cine)
	{
		fprintf(file, "cinest�sico.");
		fclose(file);
	}
	if (maior == digi)
	{
		fprintf(file, "digital.");
		fclose(file);
	}
	if (maior == audi)
	{
		fprintf(file, "auditivo.");
		fclose(file);
	}
	if (maior == visu)
	{
		fprintf(file, "visual.");
		fclose(file);
	}
	fprintf(file, "=======================================");
}
int visualizacao()
{
	FILE *ver;
	ver = fopen("QUESTION�RIO_1.txt", "w");
	if (!ver)
	{
		printf("Erro ao criar o arquivo"); // mensagem de erro para o caso de n�o ser poss�vel criar o arquivo
	}
	fprintf(ver, "N� Enunciado                                                                         Cinest�sico                                                    Auditivo                                                         Visual                                                       Digital\n");
	fprintf(ver, "======================================================================================================================================================================================================================================================================================================================\n\n");
	fprintf(ver, "1 %60s|%60s.|%60s.|%60s.|%60s.\n", mquest[1], mquest[2], mquest[3], mquest[4], mquest[5]);
	fprintf(ver, "2 %60s|%60s.|%60s.|%60s.|%60s.\n", mquest[6], mquest[7], mquest[8], mquest[9], mquest[10]);
	fprintf(ver, "3 %60s|%60s.|%60s.|%60s.|%60s.\n", mquest[11], mquest[12], mquest[13], mquest[14], mquest[15]);
	fprintf(ver, "4 %60s|%60s.|%60s.|%60s.|%60s.\n", mquest[16], mquest[17], mquest[18], mquest[19], mquest[20]);
	fprintf(ver, "5 %60s|%60s.|%60s.|%60s.|%60s.\n", mquest[21], mquest[22], mquest[23], mquest[24], mquest[25]);
	fprintf(ver, "\n======================================================================================================================================================================================================================================================================================================================");
}
void sobre(void)
{
	FILE *sobrerep;
	sobrerep = fopen("REFERENCIAL_TEORICO.txt", "a");
	if (!sobrerep)
	{
		printf("Erro ao criar o arquivo."); // mensagem de erro para o caso de n�o ser poss�vel criar o arquivo
	}
	fprintf(sobrerep, "Segundo Albert Merabian, em seu livro ?Silent Messages?, o poder de influ�ncia das palavras n�o passa de 7 %%, \nenquanto a forma como as palavras s�o ditas e a fisiologia representam 38 %% e 55 %% deste poder, respectivamente.\n");
	fprintf(sobrerep, "Para Merabian 55 %% do impacto da comunica��o � n�o-verbal. Corresponde � postura, gestos e contato visual da \npessoa enquanto se comunica.\n");
	fprintf(sobrerep, "O tom da voz representa 38 %% do impacto da comunica��o.\n");
	fprintf(sobrerep, "Por fim, as palavras propriamente ditas det�m 7 %% do impacto da comunica��o. \n");
	fprintf(sobrerep, "Assim sendo, conclui Merabian, n�o � o que dizemos, mas como dizemos que faz a diferen�a na comunica��o. \n");
	fprintf(sobrerep, "As portas da percep��o s�o os nossos sentidos, nossos olhos, nariz, ouvidos, boca e pele, nossos �nicos pontos de \ncontato com o mundo exterior. Da mesma forma que utilizamos os sentidos para filtrarmos as experi�ncias,\n");
	fprintf(sobrerep, "utilizamos os sentidos para estruturar nosso pensamento e nossa comunica��o. \n");
	fprintf(sobrerep, "De acordo com a Programa��o Neurolingu�stica existem os seguintes sistemas representacionais: \n");
	fprintf(sobrerep, "- Auditivo \n- Digital \n- Cinest�sico \n- Visual \n");
	fprintf(sobrerep, "Algumas pessoas captam melhor as mensagens do mundo exterior atrav�s da audi��o, s�o as pessoas chamadas auditivas.");
	fprintf(sobrerep, "Outras pessoas sentem necessidade de perguntar muito, necessitam de muitas informa��es e fatos. Estas s�o as digitais.");
	fprintf(sobrerep, "As cinest�sicas aprendem melhor por meio das sensa��es t�teis, como o tato, a temperatura, a umidade, as sensa��es internas e as emo��es.");
	fprintf(sobrerep, "J� as pessoas visuais aprendem melhor quando se valendo da vis�o.");
	fprintf(sobrerep, "Cada pessoa tem um sistema representacional predominante e adequar a comunica��o ao sistema representacional dominante dela � fundamental para di�logos eficientes.");
	fclose(sobrerep);
	printf("Foi Criado o Arquivo REFERENCIAL_TEORICO.txt na pasta em que este programa est� instalado! \n");
}
int checkIfFileExists(const char *filename)
{
	struct stat buffer;
	int exist = stat(filename, &buffer);
	if (exist == 0)
		return 1;
	else
		return 0;
}
