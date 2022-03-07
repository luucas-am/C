#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int altura;
    int largura;
    printf("Altura e Largura: ");
    scanf("%d %d", &altura, &largura);


    char parede[999][999];
    if (largura >= 3 && altura >= 3)
    {
        for (int i = 0; i < altura; ++i)
        {
            scanf("%s", &parede[i][0]);
            
            if (strlen(parede[i]) != largura)
            {
                printf("Valor Invalido.\n");
                system("Pause");
                return 0;
            }
        }

        system("cls");
        for (int i = 0; i < altura; ++i)
        {
            for (int k = 0; k < largura; ++k)
            {
                // if (parede[i][k] != '.' || parede[i][k] != '#' || parede[i][k] != 'o')
                // {
                //     printf("Valor Invalido.\n");
                //     system("Pause");
                //     return 0;
                // }

                if (parede[i+2][k] == '#')
                {
                    parede[i+1][k] = 'o';
                    parede[i+1][k+1] = 'o';
                    parede[i+1][k-1] = 'o';
                }
                else if (parede[i+1][k] == '#')
                {
                    parede[i][k+1] = 'o';
                    parede[i][k-1] = 'o';
                }
                else if (parede[i+1][k] == '.' && parede[i][k] == 'o')
                {
                    parede[i+1][k] = 'o';
                }
            }
        }
    }
    else
        printf("\nValor Inválido");

    for (int i = 0; i < altura; ++i)
    {
        for (int k = 0; k < largura; ++k)
        {
            printf("%c", parede[i][k]);
        }
        printf("\n");
    }

    system("Pause");
    return 0;
}