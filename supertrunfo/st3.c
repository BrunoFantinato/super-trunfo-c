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




    return 0;
}