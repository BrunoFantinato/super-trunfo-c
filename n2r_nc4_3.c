#include <stdio.h>

    int main() {

        int dia;

        printf("Entre o valor do dia!\n");
        scanf("%d", &dia);

     /*   if (dia == 1){
            printf("Domingo\n");
        } else if (dia == 2){
            printf("Segunda-Feira\n");
        } else if (dia == 3){
            printf("Terça-Feira\n");
        } else if (dia == 4){
            printf("Quarta-Feira\n");
        } else if (dia == 5){
            printf("Quinta-Feira\n");
        } else if (dia == 6){
            printf("Sexta-Feira\n");
        } else if (dia == 7){
            printf("Sábado\n");
        }
*/

        switch (dia){
            case 1:
                printf("Domingo\n");
                break;
            case 2:
                printf("Segunda-Feira\n");
                break;
            case 3:
                printf("Terça-Feira\n");
                break;
            case 4:
                printf("Quarta-Feira\n");
                break;
            case 5:
                printf("Quinta-Feira\n");
                break;
            case 6:
                printf("Sexta-Feira\n");
                break;
            case 7:
                printf("Sábado\n");
                break;
            default:
                printf("Dia inválido!\n");
                break;
        }


        return 0;
    }



















