#include <stdio.h>

    int main() {

        int idade;
        float renda;

        printf("Digite sua idade: ");
        scanf("%d", &idade);
        printf("Digite sua renda mensal: \n");
        scanf("%f", &renda);

        if (idade >= 18 && idade < 65) {
            if ( renda < 3000.0) {
                printf("Você está qualificado para o desconto especial\n");
            } else {
                printf("Você não está qualificado para o desconto devido a sua renda\n");
            }
        } else {
            printf("Você não está qualificado para o desconto devido a sua idade\n");
        }
        

        return 0;












    }