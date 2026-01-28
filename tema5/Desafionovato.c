#include <stdio.h>

int main(){


// Tabuleiro
    int tabuleiro[10][10];

// Define para mostra 3 onde tem navio
    int navio[3] = {3, 3, 3};

    int i, j;

// Preenche tudo com Água(0)
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            tabuleiro[i][j] = 0;
        }
    }

// Posiciona os navios

// NAvio 1
    int linhaH = 2;
    int colunaInicialH = 5;

    for (i = 0; i < 3; i++){
    {
        tabuleiro[linhaH][colunaInicialH + i] = navio[i];
    }

    }

// Navio 2
    int colunaV = 9;
    int linhaInicialV = 4;

    for (i = 0; i < 3; i++)
    {
        if (linhaInicialV + i < 10)
        {
            tabuleiro[linhaInicialV + i][colunaV] = navio[i];
        }
    }

// Navio 3
    int linhaH2 = 9;
    int colunaInicialH2 = 4;

    for (i = 0; i < 3; i++)
    {
        tabuleiro[linhaH2][colunaInicialH2 + i] = navio[i];
    
    }



// Exibe o tabuleiro
    printf("\n---Batalha Naval---\n\n");

    printf(" 0 1 2 3 4 5 6 7 8 9\n");

    for (i = 0; i < 10; i++)
    {
        printf("%d", i);

        for (j = 0; j < 10; j++)
        {
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }








    return 0;

}