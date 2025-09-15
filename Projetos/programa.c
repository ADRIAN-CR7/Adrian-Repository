#include <stdio.h>
#include <string.h>


int main() {
    
    char cidade1[50], cidade2[50];
    int populacao1, populacao2, codigo1, codigo2;
    float area1, area2;
    float pib1, pib2;
    int p_turisticos1, p_turisticos2;
    float densipopu1, densipopu2;
    float pibpercapita1, pibpercapita2;

    // Lendo primeira cidade
    printf("Digite o nome da primeira cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';

    printf("Codigo da cidade: ");
    scanf("%d", &codigo1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &p_turisticos1);

    getchar(); // limpa buffer antes de ler a próxima cidade

    //  Lendo segunda cidade 
    printf("\nDigite o nome da segunda cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("Codigo da cidade: ");
    scanf("%d", &codigo2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &p_turisticos2);

    //  Cálculos 
    densipopu1 = populacao1 / area1; 
    densipopu2 = populacao2 / area2;

    pibpercapita1 = pib1 / populacao1;
    pibpercapita2 = pib2 / populacao2;

    //  Comparações 
    printf("\n===== BATALHA DE CIDADES =====\n");

    // População
    if (populacao1 > populacao2)
        printf("Populacao: %s vence!\n", cidade1);
    else if (populacao2 > populacao1)
        printf("Populacao: %s vence!\n", cidade2);
    else
        printf("Populacao: Empate\n");

    // Área
    if (area1 > area2)
        printf("Area: %s vence!\n", cidade1);
    else if (area2 > area1)
        printf("Area: %s vence!\n", cidade2);
    else
        printf("Area: Empate\n");

    // PIB
    if (pib1 > pib2)
        printf("PIB: %s vence!\n", cidade1);
    else if (pib2 > pib1)
        printf("PIB: %s vence!\n", cidade2);
    else
        printf("PIB: Empate\n");

    // PIB per capita
    if (pibpercapita1 > pibpercapita2)
        printf("PIB per capita: %s vence!\n", cidade1);
    else if (pibpercapita2 > pibpercapita1)
        printf("PIB per capita: %s vence!\n", cidade2);
    else
        printf("PIB per capita: Empate\n");

    // Densidade populacional
    if (densipopu1 > densipopu2)
        printf("Densidade populacional: %s vence!\n", cidade1);
    else if (densipopu2 > densipopu1)
        printf("Densidade populacional: %s vence!\n", cidade2);
    else
        printf("Densidade populacional: Empate\n");

    // Pontos turísticos
    if (p_turisticos1 > p_turisticos2)
        printf("Pontos turisticos: %s vence!\n", cidade1);
    else if (p_turisticos2 > p_turisticos1)
        printf("Pontos turisticos: %s vence!\n", cidade2);
    else
        printf("Pontos turisticos: Empate\n");


    return 0;
}
