#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){
    /* Declaração das variáveis das cartas 1 e 2 */
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    /* Inserção dos Dados da CARTA 1 */
    printf("Cadastro da Carta 1\n");

    printf("Digite o estado (letra de 'A' a 'H'): ");
    scanf("%c", &estado1);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    /* Inserção dos Dados da CARTA 2 */
    printf("\nCadastro da Carta 2\n");

    printf("Digite o estado (letra de 'A' a 'H'): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);
    
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
    printf("Estado: %c\n", estado1);
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
    printf("Estado: %c\n", estado2);
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
    int comparacaoArea = area1 > area2;
    int comparacaoPIB = pib1 > pib2;
    int comparacaoPontosTuristicos = pontosTuristicos1 > pontosTuristicos2;
    int comparacaoDensidadePopulacional = densidadePopulacional1 < densidadePopulacional2;
    int comparacaoPIBperCapita = pibPerCapita1 > pibPerCapita2;
    int comparacaoSuperPoder = superPoder1 > superPoder2;

    /* Exibição das comparações */
    printf("\nCOMPARAÇÕES ENTRE CARTAS\n");
    printf("População: %s (%d)\n", comparacaoPopulacao ? "Carta 1 venceu" : "Carta 2 venceu", comparacaoPopulacao);
    printf("Área: %s (%d)\n", comparacaoArea ? "Carta 1 venceu" : "Carta 2 venceu", comparacaoArea);
    printf("PIB: %s (%d)\n", comparacaoPIB ? "Carta 1 venceu" : "Carta 2 venceu", comparacaoPIB);
    printf("Pontos Turísticos: %s (%d)\n", comparacaoPontosTuristicos ? "Carta 1 venceu" : "Carta 2 venceu", comparacaoPontosTuristicos);
    printf("Densidade Populacional: %s (%d)\n", comparacaoDensidadePopulacional ? "Carta 1 venceu" : "Carta 2 venceu", comparacaoDensidadePopulacional);
    printf("PIB per Capita: %s (%d)\n", comparacaoPIBperCapita ? "Carta 1 venceu" : "Carta 2 venceu", comparacaoPIBperCapita);
    printf("Super Poder: %s (%d)\n", comparacaoSuperPoder ? "Carta 1 venceu" : "Carta 2 venceu", comparacaoSuperPoder);

    //return 0;
}
