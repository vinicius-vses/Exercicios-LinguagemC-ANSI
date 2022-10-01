/*Faca um programa na Linguagem C, que receber os cadastros de 5400 pessoas que receberam a primeira dose
de uma vacina contra Covid19, com os seguintes dados: nome, idade, sexo,
cidade de origem, estado de origem e, se a pessoa tem diabetes (s/n).
No final devem ser exibidas os seguintes resultados:
- numero de mulheres, com 20 anos ou mais, da cidade de Catanduva
- total de homens do estado do Cear� ou Pernambuco
- percentual de pessoas entre 40 e 75 anos que se declararam diab�ticas
- total e percentual de homens da pesquisa
- total e percentual de mulheres da pesquisa
o programa deve oferecer ao usu�rio a possibilidade de encerrar
o processamento e reinici�-lo, se o usu�rio desejar.*/
#include <stdio.h>
#include <string.h>
#include <locale.h>
int main()
{
  setlocale(LC_ALL, "portuguese");
  char nome[20], cidade[20], estado[2], diabetes, sexo, resp;
  int i, idade;
  float contMulh = 0, homEstado = 0, pessDiab = 0, homPesq = 0, mulPesq = 0;
  resp = 's';
  while (resp == 's' || resp == 'S')
  {
    for (i = 1; i <= 2; i++)
    {
      printf("nome da %d� pessoa: ", i);
      fflush(stdin); // limpa o buffer do teclado
      gets(nome);
      printf("idade da %d� pessoa: ", i);
      scanf("%d", &idade);
      printf("Cidade da %d� pessoa: ", i);
      fflush(stdin); // limpa o buffer do teclado
      gets(cidade);
      printf("Estado da %d� pessoa: ", i);
      fflush(stdin); // limpa o buffer do teclado
      gets(estado);
      printf("Diabetes da %d� pessoa: ", i);
      fflush(stdin);          // limpa o buffer do teclado
      scanf("%c", &diabetes); // diabetes = getch();
      printf("Sexo da %d� pessoa: ", i);
      fflush(stdin);      // limpa o buffer do teclado
      scanf("%c", &sexo); // sexo = getch();
      if (sexo == 'f' && idade >= 20 && (strcmp(cidade, "catanduva") == 0))
        contMulh++;
      if (sexo == 'm' && (strcmp(estado, "ceara") == 0) || (strcmp(estado, "pernambuco") == 0))
        homEstado++;
      if (idade >= 40 && idade <= 75 && diabetes == 's')
        pessDiab++;
      if (sexo == 'm')
        homPesq++;
      if (sexo == 'f')
        mulPesq++;
    }

    printf("mulheres, com 20 anos ou mais, de Catanduva: %d\n", contMulh);
    printf("homens do estado do Cear� ou Pernambuco: %d\n", homEstado);
    printf("percentual de pessoas 40 e 75 anos diab�ticas: %f%%\n", (pessDiab / (i - 1)) * 100);
    printf("total %f e percentual de homens %f%% da pesquisa\n", homPesq, (homPesq / (i - 1) * 100));
    printf("total %f e percentual de mulheres %f%% da pesquisa\n", mulPesq, (mulPesq / (i - 1) * 100));
    printf("deseja continuar[s/]?: ");
    fflush(stdin);
    scanf("%c", &resp);
    system("cls"); // limpa a tela)
  }
}
