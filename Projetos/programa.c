#include <stdio.h>
#include <string.h>

int main() {
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int p_turisticos1, p_turisticos2;
    float densipopu1, densipopu2;
    int numero;

    // Lendo primeira cidade
    printf("Digite o nome da primeira cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';
    
    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &p_turisticos1);

    getchar(); // limpa buffer antes de ler a próxima cidade

    // Lendo segunda cidade 
    printf("\nDigite o nome da segunda cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &p_turisticos2);

    // Cálculos 
    densipopu1 = populacao1 / area1; 
    densipopu2 = populacao2 / area2;

    // Menu
    printf("\nDigite um número de 1 a 5 para escolher o atributo:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade populacional\n");
    scanf("%d", &numero);

    switch (numero) {
        case 1: // População
            if (populacao1 == populacao2) printf("Empate\n");
            else if (populacao1 > populacao2) printf("Cidade 1 venceu\n");
            else printf("Cidade 2 venceu\n");
            break;
        case 2: // Área
            if (area1 == area2) printf("Empate\n");
            else if (area1 > area2) printf("Cidade 1 venceu\n");
            else printf("Cidade 2 venceu\n");
            break;
        case 3: // PIB
            if (pib1 == pib2) printf("Empate\n");
            else if (pib1 > pib2) printf("Cidade 1 venceu\n");
            else printf("Cidade 2 venceu\n");
            break;
        case 4: // Pontos turísticos
            if (p_turisticos1 == p_turisticos2) printf("Empate\n");
            else if (p_turisticos1 > p_turisticos2) printf("Cidade 1 venceu\n");
            else printf("Cidade 2 venceu\n");
            break;
        case 5: // Densidade populacional
            if (densipopu1 == densipopu2) printf("Empate\n");
            else if (densipopu1 > densipopu2) printf("Cidade 1 venceu\n");
            else printf("Cidade 2 venceu\n");
            break;
        default:
            printf("Opção inválida.\n");
            break;
    }

    return 0;
}
