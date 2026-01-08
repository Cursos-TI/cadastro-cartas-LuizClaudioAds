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

    /* Cálculos de Densidade Populacional e PIB per Capita*/
    densidadePopulacional1 = populacao1 / area1;
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1; // Convertendo PIB para reais
    pibPerCapita2 = (pib2 * 1000000000) / populacao2; // Convertendo PIB para reais

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

    /* Escolha do atributo de comparação */
    int atributo;
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("Digite o número do atributo escolhido: ");
    scanf("%d", &atributo);

    /* Comparação dos Atributos */
    switch(atributo){
        case 1:
            printf("O atributo escolhido foi População.\n");
            printf("Carta 1 (%s): %d habitantes\n", pais1, populacao1);
            printf("Carta 2 (%s): %d habitantes\n", pais2, populacao2);
            if(populacao1 > populacao2){
                printf("%s vence com %d habitantes contra %d habitantes de %s.\n", pais1, populacao1, populacao2, pais2);
            } else if(populacao2 > populacao1){
                printf("%s vence com %d habitantes contra %d habitantes de %s.\n", pais2, populacao2, populacao1, pais1);
            } else {
                printf("Empate na População: ambos têm %d habitantes.\n", populacao1);
            }
            break;
        case 2:
            printf("O atributo escolhido foi Área.\n");
            printf("Carta 1 (%s): %.2f km²\n", pais1, area1);
            printf("Carta 2 (%s): %.2f km²\n", pais2, area2);
            if(area1 > area2){
                printf("%s vence com %.2f km² contra %.2f km² de %s.\n", pais1, area1, area2, pais2);
            } else if(area2 > area1){
                printf("%s vence com %.2f km² contra %.2f km² de %s.\n", pais2, area2, area1, pais1);
            } else {
                printf("Empate na Área: ambos têm %.2f km².\n", area1);
            }
            break;
        case 3:
            printf("O atributo escolhido foi PIB.\n");
            printf("Carta 1 (%s): %.2f bilhões de reais\n", pais1, pib1);
            printf("Carta 2 (%s): %.2f bilhões de reais\n", pais2, pib2);
            if(pib1 > pib2){
                printf("%s vence com %.2f bilhões de reais contra %.2f bilhões de reais de %s.\n", pais1, pib1, pib2, pais2);
            } else if(pib2 > pib1){
                printf("%s vence com %.2f bilhões de reais contra %.2f bilhões de reais de %s.\n", pais2, pib2, pib1, pais1);
            } else {
                printf("Empate no PIB: ambos têm %.2f bilhões de reais.\n", pib1);
            }
            break;
        case 4:
            printf("O atributo escolhido foi Número de Pontos Turísticos.\n");
            printf("Carta 1 (%s): %d pontos turísticos\n", pais1, pontosTuristicos1);
            printf("Carta 2 (%s): %d pontos turísticos\n", pais2, pontosTuristicos2);
            if(pontosTuristicos1 > pontosTuristicos2){
                printf("%s vence com %d pontos turísticos contra %d pontos turísticos de %s.\n", pais1, pontosTuristicos1, pontosTuristicos2, pais2);
            } else if(pontosTuristicos2 > pontosTuristicos1){
                printf("%s vence com %d pontos turísticos contra %d pontos turísticos de %s.\n", pais2, pontosTuristicos2, pontosTuristicos1, pais1);
            } else {
                printf("Empate no Número de Pontos Turísticos: ambos têm %d pontos turísticos.\n", pontosTuristicos1);
            }
            break;
        case 5:
            printf("O atributo escolhido foi Densidade Populacional.\n");
            printf("Carta 1 (%s): %.2f hab/km²\n", pais1, densidadePopulacional1);
            printf("Carta 2 (%s): %.2f hab/km²\n", pais2, densidadePopulacional2);
            if(densidadePopulacional1 < densidadePopulacional2){
                printf("%s vence com %.2f hab/km² contra %.2f hab/km² de %s.\n", pais1, densidadePopulacional1, densidadePopulacional2, pais2);
            } else if(densidadePopulacional2 < densidadePopulacional1){
                printf("%s vence com %.2f hab/km² contra %.2f hab/km² de %s.\n", pais2, densidadePopulacional2, densidadePopulacional1, pais1);
            } else {
                printf("Empate na Densidade Populacional: ambos têm %.2f hab/km².\n", densidadePopulacional1);
            }
            break;
        case 6:
            printf("O atributo escolhido foi PIB per Capita.\n");
            printf("Carta 1 (%s): %.2f reais\n", pais1, pibPerCapita1);
            printf("Carta 2 (%s): %.2f reais\n", pais2, pibPerCapita2);
            if(pibPerCapita1 > pibPerCapita2){
                printf("%s vence com %.2f reais contra %.2f reais de %s.\n", pais1, pibPerCapita1, pibPerCapita2, pais2);
            } else if(pibPerCapita2 > pibPerCapita1){
                printf("%s vence com %.2f reais contra %.2f reais de %s.\n", pais2, pibPerCapita2, pibPerCapita1, pais1);
            } else {
                printf("Empate no PIB per Capita: ambos têm %.2f reais.\n", pibPerCapita1);
            }
            break;
        default:
            printf("Atributo inválido. Atributo padrão será População.\n");
            printf("Carta 1 (%s): %d habitantes\n", pais1, populacao1);
            printf("Carta 2 (%s): %d habitantes\n", pais2, populacao2);
            if(populacao1 > populacao2){
                printf("%s vence com %d habitantes contra %d habitantes de %s.\n", pais1, populacao1, populacao2, pais2);
            } else if(populacao2 > populacao1){
                printf("%s vence com %d habitantes contra %d habitantes de %s.\n", pais2, populacao2, populacao1, pais1);
            } else {
                printf("Empate na População: ambos têm %d habitantes.\n", populacao1);
            }
            break;
    }

    return 0;

}
