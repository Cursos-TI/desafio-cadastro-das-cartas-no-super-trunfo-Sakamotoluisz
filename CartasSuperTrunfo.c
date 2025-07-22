#include <stdio.h>

int main (){
    char estado1[50], estado2[50];
    char codigo_da_carta1[20];
    char codigo_da_carta2[20];
    char nome_da_cidade1[20];
    char nome_da_cidade2[20];
    int populacao1;
    int populacao2;
    float area_em_km2_1;
    float area_em_km2_2;
    float pib1;
    float pib2;
    int numero_de_pontos_turisticos1;
    int numero_de_pontos_turisticos2;

    printf("Digite qual é o estado da primeira carta: \n");
    scanf("%s", estado1);

    printf("Digite qual é o estado da segunda carta: \n");
    scanf("%s", estado2);

    printf("Digite o código da carta 1: \n");
    scanf("%s", codigo_da_carta1);

    printf("Digite o código da carta 2: \n");
    scanf("%s", codigo_da_carta2);

    printf("Digite o nome da cidade 1: \n");
    scanf("%s", nome_da_cidade1);

    printf("Digite o nome da cidade 2: \n");
    scanf("%s", nome_da_cidade2);

    printf("Digite o número da população da primeira carta: \n");
    scanf("%d", &populacao1);

    printf("Digite o número da população da segunda carta: \n");
    scanf("%d", &populacao2);

    printf("Digite a área em km² da primeira carta: \n");
    scanf("%f", &area_em_km2_1); 

    printf("Digite a área em km² da segunda carta: \n");
    scanf("%f", &area_em_km2_2);

    printf("Digite o PIB respectivo da primeira carta: \n"); 
    scanf("%f", &pib1); 

    printf("Digite o PIB respectivo da segunda carta: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da primeira carta: \n");
    scanf("%d", &numero_de_pontos_turisticos1);

    printf("Digite a quantidade de pontos turísticos da segunda carta: \n");
    scanf("%d", &numero_de_pontos_turisticos2); 

    printf("\n--- RESULTADOS ---\n");
    printf("Estados: %s - %s\n", estado1, estado2);
    printf("Códigos das cartas: %s - %s\n", codigo_da_carta1, codigo_da_carta2);
    printf("Cidades: %s - %s\n", nome_da_cidade1, nome_da_cidade2);
    printf("População: %d - %d\n", populacao1, populacao2);
    printf("Área em km²: %.2f - %.2f\n", area_em_km2_1, area_em_km2_2);
    printf("PIB: %.2f - %.2f\n", pib1, pib2);
    printf("Pontos turísticos: %d - %d\n", numero_de_pontos_turisticos1, numero_de_pontos_turisticos2);

    return 0;
}