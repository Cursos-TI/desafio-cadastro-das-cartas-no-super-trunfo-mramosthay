#include <stdio.h>

int main() {
    // Declaração das variáveis
    char estado1[50], estado2[50];
    char codigo1[50], codigo2[50];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;
    float densidadepopulacional1, densidadepopulacional2;
    float pibpercapita1, pibpercapita2;
    float superpoder1, superpoder2;

    // Cadastro da Carta 1
    printf("===== Cadastro da Carta 1 =====\n");
    printf("Digite o Estado: ");
    scanf("%s", estado1); 
    printf("Digite o Código da Carta: ");
    scanf("%s", codigo1);
    printf("Digite a Cidade: ");
    scanf("%s", cidade1);
    printf("Digite a População: ");
    scanf("%d", &populacao1);
    printf("Digite a Área: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite a Quantidade de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos1);

    // Cadastro da Carta 2
    printf("\n===== Cadastro da Carta 2 =====\n");
    printf("Digite o Estado: ");
    scanf("%s", estado2); 
    printf("Digite o Código da Carta: ");
    scanf("%s", codigo2);
    printf("Digite a Cidade: ");
    scanf("%s", cidade2);
    printf("Digite a População: ");
    scanf("%d", &populacao2);
    printf("Digite a Área: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite a Quantidade de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos2);

    // Cálculo da Densidade Populacional e PIB per capita
    densidadepopulacional1 = populacao1 / area1;
    densidadepopulacional2 = populacao2 / area2;
    pibpercapita1 = pib1 / populacao1;
    pibpercapita2 = pib2 / populacao2;

    // Cálculo do Super Poder
    superpoder1 = populacao1 + area1 + pib1 + pibpercapita1 + pontosturisticos1;
    superpoder2 = populacao2 + area2 + pib2 + pibpercapita2 + pontosturisticos2;

    // Exibição dos dados das cartas
    printf("\n===== CARTA 1 =====\n");
    printf("Estado: %s | Código: %s | Cidade: %s\n", estado1, codigo1, cidade1);
    printf("População: %d | Área: %.2f km² | PIB: %.2f bilhões\n", populacao1, area1, pib1);
    printf("Densidade Populacional: %.2f hab/km² | PIB per Capita: %.2f\n", densidadepopulacional1, pibpercapita1);
    printf("Pontos Turísticos: %d | Super Poder: %.2f\n", pontosturisticos1, superpoder1);

    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %s | Código: %s | Cidade: %s\n", estado2, codigo2, cidade2);
    printf("População: %d | Área: %.2f km² | PIB: %.2f bilhões\n", populacao2, area2, pib2);
    printf("Densidade Populacional: %.2f hab/km² | PIB per Capita: %.2f\n", densidadepopulacional2, pibpercapita2);
    printf("Pontos Turísticos: %d | Super Poder: %.2f\n", pontosturisticos2, superpoder2);

    // Comparação das cartas
    printf("\n===== RESULTADO DA COMPARAÇÃO =====\n");
    printf("Vencedor em População: Carta %d\n", (populacao1 > populacao2) ? 1 : 2);
    printf("Vencedor em Área: Carta %d\n", (area1 > area2) ? 1 : 2);
    printf("Vencedor em PIB: Carta %d\n", (pib1 > pib2) ? 1 : 2);
    printf("Vencedor em Pontos Turísticos: Carta %d\n", (pontosturisticos1 > pontosturisticos2) ? 1 : 2);
    printf("Vencedor em Densidade Populacional: Carta %d\n", (densidadepopulacional1 < densidadepopulacional2) ? 1 : 2);
    printf("Vencedor em PIB per Capita: Carta %d\n", (pibpercapita1 > pibpercapita2) ? 1 : 2);
    printf("Vencedor em Super Poder: Carta %d\n", (superpoder1 > superpoder2) ? 1 : 2);

    return 0;
}
