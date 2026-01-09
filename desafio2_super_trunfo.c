#include <stdio.h>

int main(){

    /* Declaração de variáveis */
    char pais1[50] = "Brasil";
    char pais2[50] = "Argentina";
    int populacao1 = 213000000; // População do Brasil
    int populacao2 = 45000000;  // População da Argentina
    float area1 = 8515767.0;    // Área do Brasil em km²
    float area2 = 2780400.0;    // Área da Argentina em km²
    float pib1 = 1445.0;        // PIB do Brasil em bilhões de reais
    float pib2 = 450.0;         // PIB da Argentina em bilhões de reais
    int pontosTuristicos1 = 200; // Número de pontos turísticos do Brasil
    int pontosTuristicos2 = 150; // Número de pontos turísticos da Argentina
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;
    
    densidadePopulacional1 = populacao1 / area1;
    densidadePopulacional2 = populacao2 / area2;
    
    pibPerCapita1 = (pib1 * 1000000000) / populacao1; // Convertendo PIB para reais
    pibPerCapita2 = (pib2 * 1000000000) / populacao2; // Convertendo PIB para reais
    
    int atributo1, atributo2;
    
    /* Exibição dos dados das cartas */
    printf("CARTA 1 - %s\n", pais1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("\n");
    printf("CARTA 2 - %s\n", pais2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    /* Escolha do primeiro atributo */
    printf("\nEscolha o PRIMEIRO atributo:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    scanf("%d", &atributo1);

    /* Escolha do segundo atributo */
    printf("\nEscolha o SEGUNDO atributo:\n");

    for (;;){
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Número de Pontos Turísticos\n");
        printf("5 - Densidade Populacional\n");
        printf("6 - PIB per Capita\n");
        scanf("%d", &atributo2);
        if(atributo2 != atributo1){
            break;
        } else {
            printf("Atributo já escolhido. Por favor, escolha um atributo diferente.\n");
        }
    }

    /* Comparação dos Atributos Selecionados */
    printf("\nResultados da Comparação:\n");
    
    switch(atributo1){
        case 1:
            printf("Comparando o atributo População:\n");
            printf("Carta 1 - %s: %d habitantes\n", pais1, populacao1);
            printf("Carta 2 - %s: %d habitantes\n", pais2, populacao2);
            if(populacao1 > populacao2){
                printf("%s vence na População!\n", pais1);
            } else if(populacao1 < populacao2){
                printf("%s vence na População!\n", pais2);
            } else {
                printf("Empate! Ambos têm a mesma população.\n");
            }
            break;
        case 2:
            printf("Comparando o atributo Área:\n");
            printf("Carta 1 - %s: %.2f km²\n", pais1, area1);
            printf("Carta 2 - %s: %.2f km²\n", pais2, area2);
            if(area1 > area2){
                printf("%s vence na Área!\n", pais1);
            } else if(area1 < area2){
                printf("%s vence na Área!\n", pais2);
            } else {
                printf("Empate! Ambos têm a mesma área.\n");
            }
            break;
        case 3:
            printf("Comparando o atributo PIB:\n");
            printf("Carta 1 - %s: %.2f bilhões de reais\n", pais1, pib1);
            printf("Carta 2 - %s: %.2f bilhões de reais\n", pais2, pib2);
            if(pib1 > pib2){
                printf("%s vence no PIB!\n", pais1);
            } else if(pib1 < pib2){
                printf("%s vence no PIB!\n", pais2);
            } else {
                printf("Empate! Ambos têm o mesmo PIB.\n");
            }
            break;
        case 4:
            printf("Comparando o atributo Número de Pontos Turísticos:\n");
            printf("Carta 1 - %s: %d pontos turísticos\n", pais1, pontosTuristicos1);
            printf("Carta 2 - %s: %d pontos turísticos\n", pais2, pontosTuristicos2);
            if(pontosTuristicos1 > pontosTuristicos2){
                printf("%s vence no Número de Pontos Turísticos!\n", pais1);
            } else if(pontosTuristicos1 < pontosTuristicos2){
                printf("%s vence no Número de Pontos Turísticos!\n", pais2);
            } else {
                printf("Empate! Ambos têm o mesmo número de pontos turísticos.\n");
            }
            break;
        case 5:
            printf("Comparando o atributo Densidade Populacional:\n");
            printf("Carta 1 - %s: %.2f hab/km²\n", pais1, densidadePopulacional1);
            printf("Carta 2 - %s: %.2f hab/km²\n", pais2, densidadePopulacional2);
            if(densidadePopulacional1 < densidadePopulacional2){
                printf("%s vence na Densidade Populacional!\n", pais1);
            } else if(densidadePopulacional1 > densidadePopulacional2){
                printf("%s vence na Densidade Populacional!\n", pais2);
            } else {
                printf("Empate! Ambos têm a mesma densidade populacional.\n");
            }
            break;
        case 6:
            printf("Comparando o atributo PIB per Capita:\n");
            printf("Carta 1 - %s: %.2f reais\n", pais1, pibPerCapita1);
            printf("Carta 2 - %s: %.2f reais\n", pais2, pibPerCapita2);
            if(pibPerCapita1 > pibPerCapita2){
                printf("%s vence no PIB per Capita!\n", pais1);
            } else if(pibPerCapita1 < pibPerCapita2){
                printf("%s vence no PIB per Capita!\n", pais2);
            } else {
                printf("Empate! Ambos têm o mesmo PIB per Capita.\n");
            }
            break;
    }

        switch(atributo2){
        case 1:
            printf("\nComparando o atributo População:\n");
            printf("Carta 1 - %s: %d habitantes\n", pais1, populacao1);
            printf("Carta 2 - %s: %d habitantes\n", pais2, populacao2);
            if(populacao1 > populacao2){
                printf("%s vence na População!\n", pais1);
            } else if(populacao1 < populacao2){
                printf("%s vence na População!\n", pais2);
            } else {
                printf("Empate! Ambos têm a mesma população.\n");
            }
            break;
        case 2:
            printf("\nComparando o atributo Área:\n");
            printf("Carta 1 - %s: %.2f km²\n", pais1, area1);
            printf("Carta 2 - %s: %.2f km²\n", pais2, area2);
            if(area1 > area2){
                printf("%s vence na Área!\n", pais1);
            } else if(area1 < area2){
                printf("%s vence na Área!\n", pais2);
            } else {
                printf("Empate! Ambos têm a mesma área.\n");
            }
            break;
        case 3:
            printf("\nComparando o atributo PIB:\n");
            printf("Carta 1 - %s: %.2f bilhões de reais\n", pais1, pib1);
            printf("Carta 2 - %s: %.2f bilhões de reais\n", pais2, pib2);
            if(pib1 > pib2){
                printf("%s vence no PIB!\n", pais1);
            } else if(pib1 < pib2){
                printf("%s vence no PIB!\n", pais2);
            } else {
                printf("Empate! Ambos têm o mesmo PIB.\n");
            }
            break;
        case 4:
            printf("\nComparando o atributo Número de Pontos Turísticos:\n");
            printf("Carta 1 - %s: %d pontos turísticos\n", pais1, pontosTuristicos1);
            printf("Carta 2 - %s: %d pontos turísticos\n", pais2, pontosTuristicos2);
            if(pontosTuristicos1 > pontosTuristicos2){
                printf("%s vence no Número de Pontos Turísticos!\n", pais1);
            } else if(pontosTuristicos1 < pontosTuristicos2){
                printf("%s vence no Número de Pontos Turísticos!\n", pais2);
            } else {
                printf("Empate! Ambos têm o mesmo número de pontos turísticos.\n");
            }
            break;
        case 5:
            printf("\nComparando o atributo Densidade Populacional:\n");
            printf("Carta 1 - %s: %.2f hab/km²\n", pais1, densidadePopulacional1);
            printf("Carta 2 - %s: %.2f hab/km²\n", pais2, densidadePopulacional2);
            if(densidadePopulacional1 < densidadePopulacional2){
                printf("%s vence na Densidade Populacional!\n", pais1);
            } else if(densidadePopulacional1 > densidadePopulacional2){
                printf("%s vence na Densidade Populacional!\n", pais2);
            } else {
                printf("Empate! Ambos têm a mesma densidade populacional.\n");
            }
            break;
        case 6:
            printf("\nComparando o atributo PIB per Capita:\n");
            printf("Carta 1 - %s: %.2f reais\n", pais1, pibPerCapita1);
            printf("Carta 2 - %s: %.2f reais\n", pais2, pibPerCapita2);
            if(pibPerCapita1 > pibPerCapita2){
                printf("%s vence no PIB per Capita!\n", pais1);
            } else if(pibPerCapita1 < pibPerCapita2){
                printf("%s vence no PIB per Capita!\n", pais2);
            } else {
                printf("Empate! Ambos têm o mesmo PIB per Capita.\n");
            }
            break;
    }

    /* Soma dos Atributos Escolhidos */
    float soma1 = 0, soma2 = 0;
    switch(atributo1){
        case 1:
            soma1 += populacao1;
            soma2 += populacao2;
            break;
        case 2:
            soma1 += area1;
            soma2 += area2;
            break;
        case 3:
            soma1 += pib1;
            soma2 += pib2;
            break;
        case 4:
            soma1 += pontosTuristicos1;
            soma2 += pontosTuristicos2;
            break;
        case 5:
            soma1 += densidadePopulacional1;
            soma2 += densidadePopulacional2;
            break;
        case 6:
            soma1 += pibPerCapita1;
            soma2 += pibPerCapita2;
            break;
    }
    switch(atributo2){
        case 1:
            soma1 += populacao1;
            soma2 += populacao2;
            break;
        case 2:
            soma1 += area1;
            soma2 += area2;
            break;
        case 3:
            soma1 += pib1;
            soma2 += pib2;
            break;
        case 4:
            soma1 += pontosTuristicos1;
            soma2 += pontosTuristicos2;
            break;
        case 5:
            soma1 += densidadePopulacional1;
            soma2 += densidadePopulacional2;
            break;
        case 6:
            soma1 += pibPerCapita1;
            soma2 += pibPerCapita2;
            break;
    }

    printf("\nSoma dos Atributos Escolhidos:\n");
    printf("%s: %.2f\n", pais1, soma1);
    printf("%s: %.2f\n", pais2, soma2);
    if(soma1 > soma2){
        printf("%s vence no total dos atributos escolhidos!\n", pais1);
    } else if(soma1 < soma2){
        printf("%s vence no total dos atributos escolhidos!\n", pais2);
    } else {
        printf("Empate no total dos atributos escolhidos!\n");
    }

    return 0;

}
