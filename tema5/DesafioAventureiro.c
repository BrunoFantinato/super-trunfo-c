#include <stdio.h>

#define TAM 10
#define AGUA 0
#define NAVIO 3

    int main(){

        int tabuleiro [TAM][TAM];

        for(int i = 0; i < TAM; i++)
        {
            for(int j = 0; j < TAM; j++)
            {
                tabuleiro[i][j] = AGUA;
            }
        }

        for (int k = 0; k < 3; k++)
        {
            tabuleiro[2][4 + k] = NAVIO;
        }

        for (int k = 0; k < 3; k++)
        {
            tabuleiro[5 + k][8] = NAVIO;
        }

        for (int k = 0; k < 3; k++)
        {
            tabuleiro[7 + k][2 - k] = NAVIO;
        }
                for (int k = 0; k < 3; k++)
        {
            tabuleiro[3 + k][1 + k] = NAVIO;
        }

        printf("\n BATALHA NAVAL\n\n");

        printf("  0 1 2 3 4 5 6 7 8 9\n");

        for (int i = 0; i < TAM; i++)
        {
            printf("%d ", i);
            for(int j = 0; j < TAM; j++)
            {
                printf("%d ", tabuleiro[i][j]);
            }
            printf("\n");
        }

        return 0;
    }