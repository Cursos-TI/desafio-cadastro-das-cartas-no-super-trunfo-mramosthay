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
        printf("Código: %s \n", codigo1);
        printf("Cidade: %s \n", cidade1);
        printf("População: %d", populacao1);
        printf("Área: %f, \n", area1); 
        printf("PIB: %f \n", pib1);
        quociente = populacao1 / área;
        printf("Densidade Populacional: %.2f \n", quociente);
        quociente = pib1 / populacao1;
        printf("PIB per Capita: %.2f \n", quociente);


        printf("Carta 2 \n");
        printf("\n");
        printf("Digite o Estado: \n");
        scanf("%s", &estado2); 
        printf("Digite o Código da Carta: \n");
        scanf("%s", &codigo2);
        printf("Digite a Cidade: \n");
        scanf("%s", &cidade2);
        printf("Digite a População: \n");
        scanf("%d", &populacao2);
        printf("Digite a Área: \n");
        scanf("%f", &area2);
        printf("Digite o PIB: \n");
        scanf("%f", &pib2);
        print("Digite a Quantidade de Pontos Turísticos: \n");
        scanf("%d", &pontosturisticos2);

         printf("Carta 2: \n");
        printf("\n");
        printf("Estado: %s \n", estado2);
        printf("Código: %s \n", codigo2);
        printf("Cidade: %s \n", cidade2);
        printf("População: %d", populacao2);
        printf("Área: %f, \n", area2); 
        printf("PIB: %f \n", pib2);
        quociente = populacao1 / área;
        printf("Densidade Populacional: %.2f \n", quociente);
        quociente = pib2 / populacao2;
        printf("PIB per Capita: %.2f \n", quociente);

        
        //Calculando o Super Poder
        float superpoder1 = (float) populacao1 + area1 + pib1 + pibpercapita1 + pontosturisticos1;
        float superpoder2 = (float) populacao2 + area2 + pib2 + pibpercepita2 + pontosturisticos2;

        //Calculando o inverso da densidade
        float inversodensidade1 = (densidadepopulacional1 > 0) * (1 / densidadepopulacional1);
        float inversodensidade2 = (densidadepopulacional2 > 0) * (1 / densidadepopulacional2);


        //Comparação das Cartas
        printf("Comparação das Cartas");
        printf("Vencedor em População: Carta %d\n", (populacao1 > populacao2) * 1 + (populacao1 <= populacao2) * 2);        
        printf("Vencedor em Área: Carta %d\n", (area1 > area2) * 1 + (area1 <= area2) * 2);
        printf("Vencedor em PIB: Carta %d\n", (pib1 > pib2) * 1 + (pib1 <= pib2) * 2);
        printf("Vencedor em Pontos Turísticos: Carta %d\n", (pontosturisticos1 > pontosturisticos2) * 1 + (pontosturisticos1 <= pontosturisticos2) * 2);
        printf("Vencedor em Densidade Populacional: Carta %d\n", (densidadepopulacional1 < densidadepopulacional2) * 1 + (densidadepopulacional1 >= densidadepopulacional2) * 2);
        printf("Vencedor em PIB per Capita: Carta %d\n", (pibpercapita1 > pibpercapita2) * 1 + (pibpercapita1 <= pibpercapita2) * 2);       
        printf("Vencedor em Super Poder: Carta %d\n", (superpoder1 > superpoder2) * 1 + (superpoder1 <= superpoder2) * 2);

        return 0;

    }
        




   
