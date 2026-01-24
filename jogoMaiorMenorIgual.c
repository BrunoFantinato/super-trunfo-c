#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    int main() { 

        int numeroJogador, numeroComputador, resultado;
        char tipoComparacao;

        // Gerar o número aleatório para o computador
        srand(time(0));
        numeroComputador = rand() %100 + 1; // Número entre 1 e 100

        // Início do jogo
        printf("Bem-vindo ao jogo Maior, Menor ou Igual!\n");
        printf("Você deve escolher um número e o tipo de comparação:\n");
        printf("Escolha o tipo de comparação a ser útilizado:\n");
        printf("M. Maior\n");
        printf("N. Menor\n");
        printf("I. Igual\n");
        printf("Escolha a comparação: ");
        scanf("%c",  & tipoComparacao);

        printf("Escolha um número de 1 a 100: ");
        scanf("%d", &numeroJogador);

        // Exibir o número do computador
        printf( "O computador escoheu o Número: %d\n", numeroComputador);

        switch (tipoComparacao) {
        case 'M':
        case 'm':
        printf("Você escolheu a opção MAIOR!\n");
        numeroJogador > numeroComputador ? printf("Você venceu! Parabéns!\n") : printf("Você perdeu! Tente novamente.\n");
        break;
        case 'N':
        case 'n':
        printf("Você escolheu a opção MENOR!\n");
        numeroJogador < numeroComputador ? printf("Você Venceu! Parabéns!\n") : printf("Você perdeu! Tente novamente!\n");
        break;
        case 'I':
        case 'i':
        printf("Você escolheu a opção IGUAL!\n");
        numeroJogador == numeroComputador ? printf("Você Venceu! PArabéns!\n") : printf("Você perdeu! Tente novamente!\n");
        break;
        default:
            printf("Opção inválida. Escolha entre M, N ou I.\n");
         break;
        }

        return 0;
    }