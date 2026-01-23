#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int opcao;
    int numeroSecreto, palpite;
    int regras;

  printf("Menu Principal\n");
  printf("1. Iniciar Jogo\n");
  printf("2. Ver Regras\n");
  printf("3. Sair\n");
  printf("Escolha uma opção: \n");
  scanf("%d", &opcao);

    switch (opcao)
    {
        case 1:
            srand(time(0));
            numeroSecreto = rand() %10;
            printf("Digite um número de 0 a 9: ");
            scanf("%d", &palpite);
            if (numeroSecreto == palpite) {
                printf("Parabéns! Você acertou o número secreto!\n");
            } else {
                printf("Número errado. Tente novamente!\n");
            }
            printf("Numero secreto %d\n", numeroSecreto);
            break;

        case 2:
            printf("Selecione a Regra relacionada:\n");
            scanf("%d", &regras);
            switch (regras)
            {
                case 1:
                    printf("Regra 1: Tente adivinhar o número secreto entre 0 e 9.\n");
                break;
                case 2:
                    printf("Regra 2: Você tem apenas uma tentativa para adivinhar o número.\n");
                break;
                case 3:
                    printf("Regra 3: Se você errar, o número secreto será revelado.\n");
                break;
                    default:
                        printf("Opção de regra inválida.\n");
                }
        case 3:
        printf("Saindo do jogo\n");
        break;

        default:
        printf("Opção inválida.\n");

    }

  return 0;
}