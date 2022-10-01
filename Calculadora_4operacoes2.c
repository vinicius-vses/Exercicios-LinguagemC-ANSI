/* Programa Calculadora */
#include <stdio.h>
#include <conio.h>

float R, A, B;      
void rotadicao(void); 
void rotsubtracao(void);
void rotmultiplicacao(void);
void rotdivisao(void);

int main(void)
{
    char TECLA;
    int OPCAO = 0;
    while (OPCAO != 5)
    {
        printf("\n\nMenu Principal\n");
        printf("--------------\n\n");
        printf("1 - Adicao\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("5 - Fim de Programa\n\n");
        printf("Escolha uma opcao: ");
        fflush(stdin);
        scanf("%d", &OPCAO);
        if (OPCAO != 5)
        {
            if (OPCAO == 1)
                rotadicao();
            if (OPCAO == 2)
                rotsubtracao();
            if (OPCAO == 3)
                rotmultiplicacao();
            if (OPCAO == 4)
                rotdivisao();
        }
    }
    // getch();
}
// declara��es das fun��es
void rotadicao(void)
{
    char TECLA;
    printf("\n\nRotina de Soma\n");
    printf("--------------\n\n");
    printf("Entre um valor para A: ");
    fflush(stdin);
    scanf("%f", &A);
    printf("Entre um valor para B: ");
    fflush(stdin);
    scanf("%f", &B);
    R = A + B;
    printf("\nSoma = %6.2f\n", R);
    printf("\nTecle <Enter> para acessar o menu: ");
    fflush(stdin);
    // while ((TECLA = getchar())!= '\r') //getchar() captura UMA tecla
}
void rotsubtracao(void)
{
    char TECLA;
    printf("\n\nRotina de Subtracao\n");
    printf("-------------------\n\n");
    printf("Entre um valor para A: ");
    fflush(stdin);
    scanf("%f", &A);
    printf("Entre um valor para B: ");
    fflush(stdin);
    scanf("%f", &B);
    R = A - B;
    printf("\nSubtracao = %6.2f\n", R);
    printf("\nTecle <Enter> para acessar o menu: ");
    fflush(stdin);
    // while ((TECLA = getchar())!= '\r')
}

void rotmultiplicacao(void)
{
    char TECLA;
    printf("\n\nRotina de Multiplicacao\n");
    printf("-----------------------\n\n");
    printf("Entre um valor para A: ");
    fflush(stdin);
    scanf("%f", &A);
    printf("Entre um valor para B: ");
    fflush(stdin);
    scanf("%f", &B);
    R = A * B;
    printf("\nMultiplicacao = %6.2f\n", R);
    printf("\nTecle <Enter> para acessar o menu: ");
    fflush(stdin);
    // while ((TECLA = getchar())!= '\r')
}

void rotdivisao(void)
{
    char TECLA;
    printf("\n\nRotina de Divisao\n");
    printf("-----------------\n\n");
    printf("Entre um valor para A: ");
    fflush(stdin);
    scanf("%f", &A);
    printf("Entre um valor para B: ");
    fflush(stdin);
    scanf("%f", &B);
    if (B == 0)
        printf("\nErro de divisao\n");
    else
    {
        R = A / B;
        printf("\nDivisao = %6.2f\n", R);
    }
    printf("\nTecle <Enter> para acessar o menu: ");
    fflush(stdin);
    // while ((TECLA = getchar())!= '\r')
}
