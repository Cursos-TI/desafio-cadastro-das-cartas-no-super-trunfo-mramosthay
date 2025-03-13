#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
//Teste Thaynara


//Variáveis para cadastro das castas
    int main() {
        char estado1[50], estado2[50];
        char codigo1[50], codigo2[50];
        char cidade1[50], cidade2[50];
        int populacao1, populacao2;
        float area1, area2;
        float pib1, pib2;
        int pontosturisticos1, pontosturisticos2;
        float densidadepopulacional1, densidadepopulacional2;
        float pibpercapita1, pibpercapita2;
        float quociente;

    
    // Cadastro e leitura das Cartas:
        printf("Carta 1 \n");
        printf("\n");
        printf("Digite o Estado: \n");
        scanf("%s", &estado1); 
        printf("Digite o Código da Carta: \n");
        scanf("%s", &codigo1);
        printf("Digite a Cidade: \n");
        scanf("%s", &cidade1);
        printf("Digite a População: \n");
        scanf("%d", &populacao1);
        printf("Digite a Área: \n");
        scanf("%f", &area1);
        printf("Digite o PIB: \n");
        scanf("%f", &pib1);
        print("Digite a Quantidade de Pontos Turísticos: \n");
        scanf("%d", &pontosturisticos1);

        printf("Carta 1: \n");
        printf("\n");
        printf("Estado: %s \n", estado1);






    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
