#include <stdio.h>

//Função recursiva Torre
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas -1);
    }
}

//Função recursiva Bispo
void moverBispo(int casas) {
    if (casas > 0) {
        printf("Cima\n");
        printf("Direita\n");
        moverBispo(casas -1);
    }
}

//Função recursiva Rainha
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverRainha(casas -1);
    }
}


int main(){

    int opcao;

    printf("Escolha a peça para mover:\n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("4. Cavalo\n");
    printf("Digite sua opção\n");
    scanf("%d", &opcao);

    printf("\n");

    switch (opcao) 
    {
        case 1:
            printf("Torre se move 5 para a frente ou para os lados\n");
            moverTorre(5);
        break;

        case 2:
            printf("O Bispo se move 5 casas na Vertical\n");
            moverBispo(5);
        break;

        case 3:
            printf("A Rainha se move 8 casas em qualquer direção\n");
            moverRainha(8);            
        break;

        case 4:
            printf("O Cavalo se move em 'L' e pode se mover 3 vezes.\n");
            for (int i = 0; i < 1; i++)
            {
                int c = 0;
                while (c < 2) 
                {
                    printf("Baixo\n");
                    c++;
                }

                for (int j = 0; j < 1; j++)
                {
                    printf("Esquerda\n");
                }
            }
            break;

        default:
        printf("Opção Inválida!");
        break;
    }


    return 0;
}