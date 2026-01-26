#include <stdio.h>

int main() {

    int entradaUsuario, movimento;

// Menu de seleção de peça
    printf("Qual peça você quer usar?\n");
    printf("1. Torre\n2. Bispo\n3. Rainha\n");
    scanf("%d", &entradaUsuario);

    switch (entradaUsuario) {
        case 1:
            printf("Você escolheu a Torre!\n");
            break;
        case 2:
            printf("Você escolheu o Bispo!\n");
            break;
        case 3:
            printf("Você escolheu a Rainha!\n");
            break;
        default:
            printf("Opção inválida! Por favor, escolha uma peça válida.\n");
            break;
        }


    movimento = (entradaUsuario == 1) ? 5 :
                (entradaUsuario == 2) ? 3 :
                (entradaUsuario == 3) ? 8 :
                0;

// Lógica de movimento para cada peça

    //Lógica da Torre
    if (entradaUsuario == 1) {
        printf("A Torre pode se mover %d casas para frente ou para os lados.\n", movimento);
        for(int i = 1; i <= movimento; i++) {
            printf("Movimento %d: Direita.\n", i);
        }}

    //Lógica do Bispo
    if (entradaUsuario == 2) {
        printf("O Bispo se move %d casas na diagonal.\n", movimento);
            while (entradaUsuario == 2 && movimento >= 1 && movimento <=3) {
            printf("Movimento %d: Cima, Direita Diagonal.\n", movimento);
            movimento--;
        }
    }

    //Lógica da Rainha
    if (entradaUsuario == 3) {
        printf("A Rainha pode se mover %d casas em qualquer direção.\n", movimento);
         do{
            printf("Movimento %d: Direita\n", movimento);
            movimento--;

        } while (movimento >= 1 && movimento <= 8);






    }

    return 0;
}