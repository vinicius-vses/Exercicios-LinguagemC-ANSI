#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <conio.h>
int main()
{
    float Notas[3][4];
    int Lin, Col;
    for (Lin = 1; Lin <= 3; Lin++)
    {
        printf("%d%c Aluno", Lin, 167);
        printf("\n==============\n\n");
        for (Col = 1; Col <= 4; Col++)
        {
            printf("%d%c Nota: ", Col, 166);
            scanf("%f", &Notas[Lin][Col]);
        }
        printf("\n\n");
    }
    for (Lin = 1; Lin <= 3; Lin++)
    {
        printf("%d%c Aluno", Lin, 167);
        printf("\n==============\n\n");
        for (Col = 1; Col <= 4; Col++)
            printf("%d%c Nota: %2.1f\n", Col, 166,
                   Notas[Lin][Col]);
        printf("\n\n");
    }
    getch();
}
