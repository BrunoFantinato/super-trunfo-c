#include <stdio.h>

int main() {

    char estado1[50] = "A";
    char codigo1[4] = "A01";
    char nome1[50] = "São Paulo";
    unsigned long int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontos_turisticos1 = 50;
    int pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    float densidade1 = (float)populacao1 / area1;

    char estado2[50] = "B";
    char codigo2[4] = "B02";
    char nome2[50] = "Rio De Janeiro";
    unsigned long int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontos_turisticos2 = 30;
    int pib_per_capita2 = (pib2 * 1000000000) / populacao2;
    float densidade2 = (float)populacao2 / area2;

    int escolhaCidade;
    int escolhaAtributo;
    int escolhaAtributo2;

    float somaCidade1;
    float somaCidade2;



//Escolha da cidade
    printf("Escolha a cidade:\n");
    printf("1 - %s\n", nome1);
    printf("2 - %s\n", nome2);
    printf("Digite o número da cidade escolhida: ");
    scanf("%d", &escolhaCidade);

//Escolha do Atributo
    printf("Escolha o primeiro atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - PIB per Capita\n");
    printf("6 - Densidade Demográfica\n");
    printf("Digite o número do atributo escolhido: ");
    scanf("%d", &escolhaAtributo);

    int available[5];
    int count = 0;
    for(int i=1; i<=6; i++){
        if(i != escolhaAtributo){
            available[count++] = i;
        }
    }

    printf("Escolha o segundo atributo para comparar:\n");
    for(int i=0; i<5; i++){
        int attr = available[i];
        switch(attr){
            case 1: printf("%d - População\n", i+1); break;
            case 2: printf("%d - Área\n", i+1); break;
            case 3: printf("%d - PIB\n", i+1); break;
            case 4: printf("%d - Pontos Turísticos\n", i+1); break;
            case 5: printf("%d - PIB per Capita\n", i+1); break;
            case 6: printf("%d - Densidade Demográfica\n", i+1); break;
        }
    }
    printf("Digite o número do atributo escolhido: ");
    int choice;
    scanf("%d", &choice);
    if(choice >=1 && choice <=5){
        escolhaAtributo2 = available[choice-1];
    } else {
        printf("Escolha inválida. Usando o primeiro disponível.\n");
        escolhaAtributo2 = available[0];
    }

// Exibe os atributos escolhidos
    if (escolhaCidade == 1) {
        switch (escolhaAtributo) {
            case 1:
                printf("População de %s: %lu\n", nome1, populacao1);
                break;
            case 2:
                printf("Área de %s: %.2f km²\n", nome1, area1);
                break;
            case 3:
                printf("PIB de %s: R$ %.2f bilhões\n", nome1, pib1);
                break;
            case 4:
                printf("Pontos Turísticos de %s: %d\n", nome1, pontos_turisticos1);
                break;
            case 5:
                printf("PIB per Capita de %s: R$ %d\n", nome1, pib_per_capita1);
                break;
            case 6:
                printf("Densidade Demográfica de %s: %.2f hab/km²\n", nome1, densidade1);
                break;
            default:
                printf("Atributo inválido.\n");
        }
                switch (escolhaAtributo2) {
            case 1:
                printf("População de %s: %lu\n", nome1, populacao1);
                break;
            case 2:
                printf("Área de %s: %.2f km²\n", nome1, area1);
                break;
            case 3:
                printf("PIB de %s: R$ %.2f bilhões\n", nome1, pib1);
                break;
            case 4:
                printf("Pontos Turísticos de %s: %d\n", nome1, pontos_turisticos1);
                break;
            case 5:
                printf("PIB per Capita de %s: R$ %d\n", nome1, pib_per_capita1);
                break;
            case 6:
                printf("Densidade Demográfica de %s: %.2f hab/km²\n", nome1, densidade1);
                break;
            default:
                printf("Atributo inválido.\n");
        }

    } else if (escolhaCidade == 2) {
        switch (escolhaAtributo) {
            case 1:
                printf("População de %s: %lu\n", nome2, populacao2);
                break;
            case 2:
                printf("Área de %s: %.2f km²\n", nome2, area2);
                break;
            case 3:
                printf("PIB de %s: R$ %.2f bilhões\n", nome2, pib2);
                break;
            case 4:
                printf("Pontos Turísticos de %s: %d\n", nome2, pontos_turisticos2);
                break;
            case 5:
                printf("PIB per Capita de %s: R$ %d\n", nome2, pib_per_capita2);
                break;
            case 6:
                printf("Densidade Demográfica de %s: %.2f hab/km²\n", nome2, densidade2);
                break;
            default:
                printf("Atributo inválido.\n");
        }
                switch (escolhaAtributo2) {
            case 1:
                printf("População de %s: %lu\n", nome2, populacao2);
                break;
            case 2:
                printf("Área de %s: %.2f km²\n", nome2, area2);
                break;
            case 3:
                printf("PIB de %s: R$ %.2f bilhões\n", nome2, pib2);
                break;
            case 4:
                printf("Pontos Turísticos de %s: %d\n", nome2, pontos_turisticos2);
                break;
            case 5:
                printf("PIB per Capita de %s: R$ %d\n", nome2, pib_per_capita2);
                break;
            case 6:
                printf("Densidade Demográfica de %s: %.2f hab/km²\n", nome2, densidade2);
                break;
            default:
                printf("Atributo inválido.\n");
        }
    } else {
        printf("Cidade inválida.\n");
    }

// Verifica se o mesmo atributo foi escolhido duas vezes
if (escolhaAtributo == escolhaAtributo2) {
    printf("Atenção: Você escolheu o mesmo atributo duas vezes.\n");
    escolhaAtributo2 = 0;
    escolhaAtributo = 0;
}

//Compara os atributos escolhidos contra o autra cidade
    printf("\nComparação dos atributos escolhidos entre as cidades:\n");
    if (escolhaCidade == 1) {
        switch (escolhaAtributo) {
            case 1:
                printf("População: %s (%lu) vs %s (%lu)\n", nome1, populacao1, nome2, populacao2);
                break;
            case 2:
                printf("Área: %s (%.2f km²) vs %s (%.2f km²)\n", nome1, area1, nome2, area2);
                break;
            case 3:
                printf("PIB: %s (R$ %.2f bilhões) vs %s (R$ %.2f bilhões)\n", nome1, pib1, nome2, pib2);
                break;
            case 4:
                printf("Pontos Turísticos: %s (%d) vs %s (%d)\n", nome1, pontos_turisticos1, nome2, pontos_turisticos2);
                break;
            case 5:
                printf("PIB per Capita: %s (R$ %d) vs %s (R$ %d)\n", nome1, pib_per_capita1, nome2, pib_per_capita2);
                break;
            case 6:
                printf("Densidade Demográfica: %s (%.2f hab/km²) vs %s (%.2f hab/km²)\n", nome1, densidade1, nome2, densidade2);
                break;
            default:
                printf("Atributo inválido para comparação.\n");
        }
                switch (escolhaAtributo2) {
            case 1:
                printf("População: %s (%lu) vs %s (%lu)\n", nome1, populacao1, nome2, populacao2);
                break;
            case 2:
                printf("Área: %s (%.2f km²) vs %s (%.2f km²)\n", nome1, area1, nome2, area2);
                break;
            case 3:
                printf("PIB: %s (R$ %.2f bilhões) vs %s (R$ %.2f bilhões)\n", nome1, pib1, nome2, pib2);
                break;
            case 4:
                printf("Pontos Turísticos: %s (%d) vs %s (%d)\n", nome1, pontos_turisticos1, nome2, pontos_turisticos2);
                break;
            case 5:
                printf("PIB per Capita: %s (R$ %d) vs %s (R$ %d)\n", nome1, pib_per_capita1, nome2, pib_per_capita2);
                break;
            case 6:
                printf("Densidade Demográfica: %s (%.2f hab/km²) vs %s (%.2f hab/km²)\n", nome1, densidade1, nome2, densidade2);
                break;
            default:
                printf("Atributo inválido para comparação.\n");
        }

    } else if (escolhaCidade == 2) {
        switch (escolhaAtributo) {
            case 1:
                printf("População: %s (%lu) vs %s (%lu)\n", nome2, populacao2, nome1, populacao1);
                break;
            case 2:
                printf("Área: %s (%.2f km²) vs %s (%.2f km²)\n", nome2, area2, nome1, area1);
                break;
            case 3:
                printf("PIB: %s (R$ %.2f bilhões) vs %s (R$ %.2f bilhões)\n", nome2, pib2, nome1, pib1);
                break;
            case 4:
                printf("Pontos Turísticos: %s (%d) vs %s (%d)\n", nome2, pontos_turisticos2, nome1, pontos_turisticos1);
                break;
            case 5:
                printf("PIB per Capita: %s (R$ %d) vs %s (R$ %d)\n", nome2, pib_per_capita2, nome1, pib_per_capita1);
                break;
            case 6:
                printf("Densidade Demográfica: %s (%.2f hab/km²) vs %s (%.2f hab/km²)\n", nome2, densidade2, nome1, densidade1);
                break;
            default:
                printf("Atributo inválido para comparação.\n");
        }
                switch (escolhaAtributo2) {
            case 1:
                printf("População: %s (%lu) vs %s (%lu)\n", nome2, populacao2, nome1, populacao1);
                break;
            case 2:
                printf("Área: %s (%.2f km²) vs %s (%.2f km²)\n", nome2, area2, nome1, area1);
                break;
            case 3:
                printf("PIB: %s (R$ %.2f bilhões) vs %s (R$ %.2f bilhões)\n", nome2, pib2, nome1, pib1);
                break;
            case 4:
                printf("Pontos Turísticos: %s (%d) vs %s (%d)\n", nome2, pontos_turisticos2, nome1, pontos_turisticos1);
                break;
            case 5:
                printf("PIB per Capita: %s (R$ %d) vs %s (R$ %d)\n", nome2, pib_per_capita2, nome1, pib_per_capita1);
                break;
            case 6:
                printf("Densidade Demográfica: %s (%.2f hab/km²) vs %s (%.2f hab/km²)\n", nome2, densidade2, nome1, densidade1);
                break;
            default:
                printf("Atributo inválido para comparação.\n");
        }
    } else {
        printf("Cidade inválida para comparação.\n");
    }

// Soma os atributos 1 e 2 da cidade escolhida e da outra cidade
    printf("\nSoma dos atributos escolhidos:\n");
    if (escolhaCidade == 1) {
        float somaCidade1 = 0;
        float somaCidade2 = 0;

        switch (escolhaAtributo) {
            case 1:
                somaCidade1 += populacao1;
                somaCidade2 += populacao2;
                break;
            case 2:
                somaCidade1 += area1;
                somaCidade2 += area2;
                break;
            case 3:
                somaCidade1 += pib1;
                somaCidade2 += pib2;
                break;
            case 4:
                somaCidade1 += pontos_turisticos1;
                somaCidade2 += pontos_turisticos2;
                break;
            case 5:
                somaCidade1 += pib_per_capita1;
                somaCidade2 += pib_per_capita2;
                break;
            case 6:
                somaCidade1 -= densidade1;
                somaCidade2 -= densidade2;
                break;
        }

        switch (escolhaAtributo2) {
            case 1:
                somaCidade1 += populacao1;
                somaCidade2 += populacao2;
                break;
            case 2:
                somaCidade1 += area1;
                somaCidade2 += area2;
                break;
            case 3:
                somaCidade1 += pib1;
                somaCidade2 += pib2;
                break;
            case 4:
                somaCidade1 += pontos_turisticos1;
                somaCidade2 += pontos_turisticos2;
                break;
            case 5:
                somaCidade1 += pib_per_capita1;
                somaCidade2 += pib_per_capita2;
                break;
            case 6:
                somaCidade1 -= densidade1;
                somaCidade2 -= densidade2;
                break;
        }

        printf("Soma dos atributos de %s: %.2f\n", nome1, somaCidade1);
        printf("Soma dos atributos de %s: %.2f\n", nome2, somaCidade2);

    } else if (escolhaCidade == 2) {
        float somaCidade1 = 0;
        float somaCidade2 = 0;

        switch (escolhaAtributo) {
            case 1:
                somaCidade1 += populacao2;
                somaCidade2 += populacao1;
                break;
            case 2:
                somaCidade1 += area2;
                somaCidade2 += area1;
                break;
            case 3:
                somaCidade1 += pib2;
                somaCidade2 += pib1;
                break;
            case 4:
                somaCidade1 += pontos_turisticos2;
                somaCidade2 += pontos_turisticos1;
                break;
            case 5:
                somaCidade1 += pib_per_capita2;
                somaCidade2 += pib_per_capita1;
                break;
            case 6:
                somaCidade1 += densidade2;
                somaCidade2 += densidade1;
                break;
        }

        switch (escolhaAtributo2) {
            case 1:
                somaCidade1 += populacao2;
                somaCidade2 += populacao1;
                break;
            case 2:
                somaCidade1 += area2;
                somaCidade2 += area1;
                break;
            case 3:
                somaCidade1 += pib2;
                somaCidade2 += pib1;
                break;
            case 4:
                somaCidade1 += pontos_turisticos2;
                somaCidade2 += pontos_turisticos1;
                break;
            case 5:
                somaCidade1 += pib_per_capita2;
                somaCidade2 += pib_per_capita1;
                break;
            case 6:
                somaCidade1 += densidade2;
                somaCidade2 += densidade1;
                break;
        }

        printf("Soma dos atributos de (%s): %.2f\n", nome1, somaCidade1);
        printf("Soma dos atributos de %s: %.2f\n", nome2, somaCidade2);
    }

// Declara o vencedor com base na soma dos atributos
    if (escolhaCidade == 1) {
        if (somaCidade1 > somaCidade2) {
            printf("\n%s é a cidade vencedora!\n", nome1);
        } else if (somaCidade1 < somaCidade2) {
            printf("\n%s é a cidade vencedora!\n", nome2);
        } else {
            printf("\nEmpate entre as cidades!\n");
        }
    } else if (escolhaCidade == 2) {
        if (somaCidade1 > somaCidade2) {
            printf("\n%s é a cidade vencedora!\n", nome2);
        } else if (somaCidade1 < somaCidade2) {
            printf("\n%s é a cidade vencedora!\n", nome1);
        } else {
            printf("\nEmpate entre as cidades!\n");
        }
    }





































    return 0;
}