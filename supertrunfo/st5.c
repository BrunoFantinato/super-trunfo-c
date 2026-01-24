#include <stdio.h>

int main() {
/*/    char estado1[50];   // letra a - h char
    char codigo1[4];    //código carta (letra + 01 a 04) char array
    char nome1[50];    //Nome da cidade char
    int populacao1;    //população int
    float area1;       //Área em km² float
    float pib1;        //PIB float
    int pontos_turisticos1;  //numero de pontos turisticos int

    char estado2[50];   // letra a - h char
    char codigo2[4];    //código carta (letra + 01 a 04) char array
    char nome2[50];    //Nome da cidade char
    int populacao2;    //população int
    float area2;       //Área em km² float
    float pib2;        //PIB float
    int pontos_turisticos2;  //numero de pontos turisticos int
*/
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


//Coleta de dados das cidades

/*    printf("Digite o estado da cidade 01: \n");
    scanf("%s", estado1);
    
    printf("Digite o codigo da cidade 01: \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade 01: \n");
    scanf("%s", nome1);

    printf("Digite a populacao da cidade 01: \n");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade 01: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade 01 em bilhões: \n");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos da cidade 01: \n");
    scanf("%d", &pontos_turisticos1);


    printf("Digite o estado da cidade 02: \n");
    scanf("%s", estado2);

    printf("Digite o codigo da cidade 02: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade 02: \n");
    scanf("%s", nome2);

    printf("Digite a populacao da cidade 02: \n");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade 02: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade 02 em bilhões: \n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da cidade 02: \n");
    scanf("%d", &pontos_turisticos2);
*/

// Exibe os dados coletados

    printf("\n--- Dados da Cidade 01 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f Bilhões\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", (float)populacao1 / area1);
    printf("Pib per Capita: %.2f reais\n", (float)(pib1 * 1000000000) / populacao1);
    printf("Valor do Super poder: %.2f power\n", (float)(populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 - densidade1) / 100000);


    printf("\n--- Dados da Cidade 02 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f Bilhões\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", (float)populacao2 / area2);
    printf("Pib per Capita: %.2f reais\n", (float)(pib2 * 1000000000) / populacao2);
    printf("Valor do Super poder: %.2f power\n", (float)(populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 - densidade2) / 100000);

    /*
// Comparação das cartas

    int comp_populacao = populacao1 > populacao2;
    int comp_area = area1 > area2;
    int comp_pib = pib1 > pib2;
    int comp_pontos_turisticos = pontos_turisticos1 > pontos_turisticos2;
    int comp_pib_per_capita = pib_per_capita1 > pib_per_capita2;
    int comp_densidade = densidade1 < densidade2;
    int comp_super_poder = ((float)(populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 - densidade1) / 100000) >
                           ((float)(populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 - densidade2) / 100000);
    
    printf("\n--- Comparação entre as Cidades ---\n");
    printf("A cidade %s tem maior população que %s? %d\n", nome1, nome2, comp_populacao);
    printf("A cidade %s tem maior área que %s? %d\n", nome1, nome2, comp_area);
    printf("A cidade %s tem maior PIB que %s? %d\n", nome1, nome2, comp_pib);
    printf("A cidade %s tem mais pontos turísticos que %s? %d\n", nome1, nome2, comp_pontos_turisticos);
    printf("A cidade %s tem maior PIB per capita que %s? %d\n", nome1, nome2, comp_pib_per_capita);
    printf("A cidade %s tem menor densidade populacional que %s? %d\n", nome1, nome2, comp_densidade);
    printf("A cidade %s tem maior valor de Super Poder que %s? %d\n", nome1, nome2, comp_super_poder);

 // Declara a Carta Vencedora

    int maior_ppc = pib_per_capita1 > pib_per_capita2;
   
    printf(" Carta 1 - %s  %.2f\n", nome1, pib1);
    printf(" Carta 2 - %s  %.2f\n", nome2, pib2);

    if (maior_ppc) {
        printf("Resultado: A carta %s Venceu!\n", nome1, pib_per_capita1);
    } else {
        printf("Resultado: A carta %s Venceu!\n", nome2);
    }
*/

// Menu interativo
    printf("\n ESCOLHA UMA CIDADE\n");
    printf("1. %s\n", nome1);
    printf("2. %s\n", nome2);
    printf("Escolha: ");
    scanf("%d", &escolhaCidade);

    printf("Escolha um atributo para comparar: \n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. PIB per Capita\n");
    printf("6. Densidade Populacional\n");
    printf("7. Super Poder\n");
    printf("Escolha: ");
    scanf("%d", &escolhaAtributo);
    printf("Você escolheu o atributo: ");
    
    switch (escolhaAtributo) {
        case 1:
            printf("População\n");
            break;
        case 2:
            printf("Área\n");
            break;
        case 3:
            printf("PIB\n");
            break;
        case 4:
            printf("Pontos Turísticos\n");
            break;
        case 5:
            printf("PIB per Capita\n");
            break;
        case 6:
            printf("Densidade Populacional\n");
            break;
        case 7:
            printf("Super Poder\n");
            break;
        default:
            printf("Opção inválida.\n");
    }

    // Jogador escolhe cidade e atributo

    printf("Você escolheu a cidade: ");
    if (escolhaCidade == 1) {
        printf("%s\n", nome1);
    } else if (escolhaCidade == 2) {
        printf("%s\n", nome2);
    } else {
        printf("Opção inválida.\n");
    }
    printf("E o atributo: ");
    if (escolhaAtributo == 1) {
        printf("População\n");
    } else if (escolhaAtributo == 2) {
        printf("Área\n");
    } else if (escolhaAtributo == 3) {
        printf("PIB\n");
    } else if (escolhaAtributo == 4) {
        printf("Pontos Turísticos\n");
    } else if (escolhaAtributo == 5) {
        printf("PIB per Capita\n");
    } else if (escolhaAtributo == 6) {
        printf("Densidade Populacional\n");
    } else if (escolhaAtributo == 7) {
        printf("Super Poder\n");
    } else {
        printf("Opção inválida.\n");
    }

    if (escolhaCidade == 1) {
        printf("Comparando %s com %s baseado em ", nome1, nome2);
    } else if (escolhaCidade == 2) {
        printf("Comparando %s com %s baseado em ", nome2, nome1);
    }
    if (escolhaAtributo == 1) {
        printf("População\n");
        } else if (escolhaAtributo == 2) {
        printf("Área\n");
        } else if (escolhaAtributo == 3) {
        printf("PIB\n");
        } else if (escolhaAtributo == 4) {
        printf("Pontos Turísticos\n");
        } else if (escolhaAtributo == 5) {
        printf("PIB per Capita\n");
        } else if (escolhaAtributo == 6) {
        printf("Densidade Populacional\n");
        } else if (escolhaAtributo == 7) {
        printf("Super Poder\n");
        } else {
        printf("Opção inválida.\n");
        }
    
// Compara atributos
    if (escolhaAtributo == 1) {
        if (populacao1 > populacao2) {
            printf("%s Venceu com População de %d habitantes\n", nome1, populacao1);
        } else if (populacao2 > populacao1) {
            printf("%s Venceu com População de %d habitantes\n", nome2, populacao2);
        } else {
            printf("Empate na População: %d habitantes\n", populacao1);
        }
    } else if (escolhaAtributo == 2) {
        if (area1 > area2) {
            printf("%s Venceu com Área de %.2f km²\n", nome1, area1);
        } else if (area2 > area1) {
            printf("%s Venceu com Área de %.2f km²\n", nome2, area2);
        } else {
            printf("Empate na Área: %.2f km²\n", area1);
        }
    } else if (escolhaAtributo == 3) {
        if (pib1 > pib2) {
            printf("%s Venceu com PIB de %.2f Bilhões\n", nome1, pib1);
        } else if (pib2 > pib1) {
            printf("%s Venceu com PIB de %.2f Bilhões\n", nome2, pib2);
        } else {
            printf("Empate no PIB: %.2f Bilhões\n", pib1);
        }
    } else if (escolhaAtributo == 4) {
        if (pontos_turisticos1 > pontos_turisticos2) {
            printf("%s Venceu com %d Pontos Turísticos\n", nome1, pontos_turisticos1);
        } else if (pontos_turisticos2 > pontos_turisticos1) {
            printf("%s Venceu com %d Pontos Turísticos\n", nome2, pontos_turisticos2);
        } else {
            printf("Empate nos Pontos Turísticos: %d\n", pontos_turisticos1);
        }
    } else if (escolhaAtributo == 5) {
        if (pib_per_capita1 > pib_per_capita2) {
            printf("%s Venceu com PIB per Capita de %d reais\n", nome1, pib_per_capita1);
        } else if (pib_per_capita2 > pib_per_capita1) {
            printf("%s Venceu com PIB per Capita de %d reais\n", nome2, pib_per_capita2);
        } else {
            printf("Empate no PIB per Capita: %d reais\n", pib_per_capita1);
        }
    } else if (escolhaAtributo == 6) {
        if (densidade1 < densidade2) {
            printf("%s Venceu com Densidade Populacional de %.2f hab/km²\n", nome1, densidade1);
        } else if (densidade2 < densidade1) {
            printf("%s Venceu com Densidade Populacional de %.2f hab/km²\n", nome2, densidade2);
        } else {
            printf("Empate na Densidade Populacional: %.2f hab/km²\n", densidade1);
        }
    } else if (escolhaAtributo == 7) {
        float super_poder1 = (float)(populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 - densidade1) / 100000;
        float super_poder2 = (float)(populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 - densidade2) / 100000;
        if (super_poder1 > super_poder2) {
            printf("%s Venceu com Super Poder de %.2f power\n", nome1, super_poder1);
        } else if (super_poder2 > super_poder1) {
            printf("%s Venceu com Super Poder de %.2f power\n", nome2, super_poder2);
        } else {
            printf("Empate no Super Poder: %.2f power\n", super_poder1);
        }
    } else {
        printf("Opção inválida para atributo.\n");
    }

    return 0;
}