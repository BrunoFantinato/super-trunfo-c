#include <stdio.h>

int main() {
    char estado1[50];   // letra a - h char
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


//Coleta de dados das cidades

    printf("Digite o estado da cidade 01: \n");
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


    return 0;
}