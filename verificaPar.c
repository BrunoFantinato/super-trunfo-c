#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numero;
    int resto;

    printf("Digite um número para verificar se é par ou impar: \n");
    scanf("%d", &numero);

    resto = numero % 2;

    if (resto == 0){
        printf("O número é par\n");
    }
    else{
        printf("O número é impar\n");
    }

    return 0;
}
