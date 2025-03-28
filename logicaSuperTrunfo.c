#include <stdio.h>

int main() {
    // Declaração de variáveis para a primeira carta
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1;

    // Declaração de variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2;

    // Entrada de dados para a primeira carta
    printf("Digite o estado da primeira carta (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da primeira carta (ex: A01): ");
    scanf(" %s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[São Paulo]", nomeCidade1);
    printf("Digite a população: ");
    scanf(" %d", &populacao1);
    printf("Digite a area (km²): ");
    scanf(" %f", &area1);
    printf("Digite o PIB (em bilhões de reais): ");
    scanf(" %f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos1);

    // Entrada de dados para a segunda carta
    printf("\nDigite o estado da segunda carta (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da segunda carta (ex: B02): ");
    scanf(" %s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[Rio de Janeiro]", nomeCidade2);
    printf("Digite a população: ");
    scanf(" %d", &populacao2);
    printf("Digite a area (km²): ");
    scanf(" %f", &area2);
    printf("Digite o PIB (em bilhões de reais): ");
    scanf(" %f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos2);

    // Cálculo da densidade populacional e PIB per capita
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 * 1000000000 / populacao1;
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 * 1000000000 / populacao2;

    // Exibição das informações da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Exibição das informações da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    // Comparação das cartas
    printf("\nComparação das cartas:\n");

    // Comparação da população
    if (populacao1 > populacao2)
        printf("A cidade com maior população é: %s\n", nomeCidade1);
    else if (populacao1 < populacao2)
        printf("A cidade com maior população é: %s\n", nomeCidade2);
    else
        printf("Empate na população!\n");

    // Comparação da área
    if (area1 > area2)
        printf("A cidade com maior área é: %s\n", nomeCidade1);
    else if (area1 < area2)
        printf("A cidade com maior área é: %s\n", nomeCidade2);
    else
        printf("Empate na área!\n");

    // Comparação do PIB
    if (pib1 > pib2)
        printf("A cidade com maior PIB é: %s\n", nomeCidade1);
    else if (pib1 < pib2)
        printf("A cidade com maior PIB é: %s\n", nomeCidade2);
    else
        printf("Empate no PIB!\n");

    // Comparação da densidade populacional (menor vence)
    if (densidade1 < densidade2)
        printf("A cidade com menor densidade populacional (vence) é: %s\n", nomeCidade1);
    else if (densidade1 > densidade2)
        printf("A cidade com menor densidade populacional (vence) é: %s\n", nomeCidade2);
    else
        printf("Empate na densidade populacional!\n");

    // Comparação do PIB per capita
    if (pibPerCapita1 > pibPerCapita2)
        printf("A cidade com maior PIB per capita é: %s\n", nomeCidade1);
    else if (pibPerCapita1 < pibPerCapita2)
        printf("A cidade com maior PIB per capita é: %s\n", nomeCidade2);
    else
        printf("Empate no PIB per capita!\n");

    return 0;
}
