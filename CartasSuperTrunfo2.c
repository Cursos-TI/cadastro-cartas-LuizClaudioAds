#include <stdio.h>

int main(){
    /* Declaração das variáveis das cartas 1 e 2 */
    char estado1[3] = "RJ", estado2[3] = "SP";
    char codigo1[5] = "RJ01", codigo2[5] = "SP01";
    char cidade1[50] = "Niteroi", cidade2[50] = "Campinas";
    int populacao1 = 515317, populacao2 = 1213792;
    float area1 = 133.9, area2 = 795.3;
    float pib1 = 20.5, pib2 = 45.3;
    int pontosTuristicos1 = 15, pontosTuristicos2 = 10;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    /* Cálculos de Densidade Populacional e PIB per Capita*/
    densidadePopulacional1 = populacao1 / area1;
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    /* Cálculo do Super Poder */
    superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000) + (float)pontosTuristicos1 + (1 / densidadePopulacional1) + pibPerCapita1;
    superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000) + (float)pontosTuristicos2 + (1 / densidadePopulacional2) + pibPerCapita2;

    /* Exibição dos dados da Carta 1 */
    printf("\nCARTA 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);
    
    
    /* Exibição dos dados da Carta 2 */
    printf("\nCARTA 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);
    
    /* Comparação dos Atributos */
    int comparacaoPopulacao = populacao1 > populacao2;

    /* Exibição das comparações */
    printf("\nCOMPARAÇÕES ENTRE CARTAS (Atributo: População)\n");
    printf("Carta 1 - %s (%s): População: %d\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): População: %d\n", cidade2, estado2, populacao2);
    printf("Resultado da Comparação:\n");
    if (comparacaoPopulacao) {
        printf("Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao1 < populacao2) {
        printf("Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Empate!\n");
    }

    //return 0;
}
