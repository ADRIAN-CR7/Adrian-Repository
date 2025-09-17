#include <stdio.h>

// Função para retornar o valor do atributo escolhido
float valorAtributo(int opcao, float pop, float area, float pib, float tur, float dens) {
    switch(opcao) {
        case 1: return pop;
        case 2: return area;
        case 3: return pib;
        case 4: return tur;
        case 5: return dens;
        default: return 0;
    }
}

int main() {
    // Valores das cidades
    char cidade1[] = "Cidade A";
    char cidade2[] = "Cidade B";

    int populacao1 = 500000, populacao2 = 450000;
    float area1 = 250.5, area2 = 180.0;
    float pib1 = 15000.0, pib2 = 16000.0;
    int p_turisticos1 = 10, p_turisticos2 = 20;
    float densipopu1, densipopu2;

    int atributo1, atributo2;

    // Calcula densidade populacional
    densipopu1 = populacao1 / area1;
    densipopu2 = populacao2 / area2;

    // Mostra os valores das cidades
    printf("Valores das cidades:\n");
    printf("%s: Populacao=%d, Area=%.2f, PIB=%.2f, Pontos turisticos=%d, Densidade=%.2f\n",
           cidade1, populacao1, area1, pib1, p_turisticos1, densipopu1);
    printf("%s: Populacao=%d, Area=%.2f, PIB=%.2f, Pontos turisticos=%d, Densidade=%.2f\n\n",
           cidade2, populacao2, area2, pib2, p_turisticos2, densipopu2);

    // Menu para escolher atributos
    printf("Escolha dois atributos para comparar e somar (1 a 5):\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos turísticos\n5 - Densidade populacional\n");
    printf("Primeiro atributo: "); scanf("%d", &atributo1);
    printf("Segundo atributo: "); scanf("%d", &atributo2);

    // Calcula soma dos atributos escolhidos
    float soma1 = valorAtributo(atributo1, populacao1, area1, pib1, p_turisticos1, densipopu1) +
                  valorAtributo(atributo2, populacao1, area1, pib1, p_turisticos1, densipopu1);

    float soma2 = valorAtributo(atributo1, populacao2, area2, pib2, p_turisticos2, densipopu2) +
                  valorAtributo(atributo2, populacao2, area2, pib2, p_turisticos2, densipopu2);

    // Mostra resultado
    printf("\nSoma da Cidade 1: %.2f\n", soma1);
    printf("Soma da Cidade 2: %.2f\n", soma2);

    if (soma1 > soma2) printf("Cidade 1 venceu pela soma dos atributos!\n");
    else if (soma1 < soma2) printf("Cidade 2 venceu pela soma dos atributos!\n");
    else printf("Empate na soma dos atributos!\n");

    return 0;
}
