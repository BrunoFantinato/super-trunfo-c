#include <stdio.h>

int main() {

//Tabuada
    int numero, i;

    printf("Digite um número para calcular a tabuada\n");
    scanf("%d", &numero);

    for (i = 0; i <= 10; i++)
    {
        printf("%d x %d = %d \n", i, numero, i * numero);
    }

/*        
// digita numero para para fechar o programa, se for impar roda de novo


        int numero;

        do {

            printf("Digite um número par para sair do programa!...\n");
            scanf("%d", &numero);

            if(numero %2 == 0){
                printf("%d é par!\n", numero);
            } else{
                printf("%d é impar!\n", numero);
            }

        } while (numero % 2 != 0);

        printf("Você digitou um número par, saindo do programa...");
*/

/*
// Mostra número par e impar
        int i = 1;

        while (i <= 10){

            if(i % 2 == 0)
            {
                printf("O numero %d é par!\n", i);
            }
            else {
                printf("O numero %d é impar!\n", i);
            }
            i++;
        }
*/
        return 0;
}
