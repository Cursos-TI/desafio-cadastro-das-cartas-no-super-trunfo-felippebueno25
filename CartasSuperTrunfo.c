#include <stdio.h>

int main() {
    // Declaração de variáveis
    char estado1[20], cidade1[20], cod1[10];
    int populacao1, pontosturi1;
    float area1, pib1;

    char estado2[20], cidade2[20], cod2[10];
    int populacao2, pontosturi2;
    float area2, pib2;

    // Entrada de Dados
    printf("> [Player 1]\n> INSIRA OS DADOS DA CARTA: \n");
    printf("Estado: ");
    scanf("%s", estado1);
    printf("Código da carta: ");
    scanf("%s", cod1);
    printf("Nome da cidade: ");
    scanf("%s", cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões): R$ ");
    scanf("%f", &pib1);
    printf("Nº de pontos turísticos: ");
    scanf("%d", &pontosturi1);

    printf("\n> [Player 2]\n> INSIRA OS DADOS DA CARTA: \n");
    printf("Estado: ");
    scanf("%s", estado2);
    printf("Código da carta: ");
    scanf("%s", cod2);
    printf("Nome da cidade: ");
    scanf("%s", cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões): R$ ");
    scanf("%f", &pib2);
    printf("Nº de pontos turísticos: ");
    scanf("%d", &pontosturi2);

    // Cálculo das densidades populacionais
    float densidadepop1 = (float) populacao1 / area1;
    float densidadepop2 = (float) populacao2 / area2;

    // Cálculo do PIB per capita
    // Fiquei confuso sobre como deveria entrar os dados do PIB para fazer o cálculo e tive de coverter pro número cheio pra realizar o cálculo do per capita
    float pibpercapita1 = (pib1 * 1000000000) / (float) populacao1;
    float pibpercapita2 = (pib2 * 1000000000) / (float) populacao2;

    // Cálculo dos Super Poderes
    float superPoder1 = (populacao1 + area1 + pib1 + pontosturi1 + pibpercapita1 + (1/densidadepop1));
    float superPoder2 = (populacao2 + area2 + pib2 + pontosturi2 + pibpercapita2 + (1/densidadepop2));

    // Saída de Dados
    printf("\n\n>>> Carta 1:\n");
    printf("> Estado: %s\n> Código: %s\n> Nome da cidade: %s\n> População: %d habitantes\n> Área: %.2f Km²\n> PIB: %.2f bilhões de reais\n> Número de pontos turísticos: %d\n> Densidade Populacional %.2f hab/Km²\n> PIB per Capita: R$ %.2f\n",
           estado1, cod1, cidade1, populacao1, area1, pib1, pontosturi1, densidadepop1, pibpercapita1);

    printf("\n>>> Carta 2:\n");
    printf("> Estado: %s\n> Código: %s\n> Nome da cidade: %s\n> População: %d habitantes\n> Área: %.2f Km²\n> PIB: %.2f bilhões de reais\n> Número de pontos turísticos: %d\n> Densidade Populacional %.2f hab/Km²\n> PIB per Capita: R$ %.2f\n", estado2, cod2, cidade2, populacao2, area2, pib2, pontosturi2, densidadepop2, pibpercapita2);

    // Comparação de cartas
    printf("\n\n[ Comparação de cartas ]\n");
    printf("> População: Carta 1 venceu. %d\n", (populacao1 > populacao2));
    printf("> Área: Carta 1 venceu. %d\n", (area1 > area2));
    printf("> PIB: Carta 1 venceu. %d\n", (pib1 > pib2));
    printf("> Pontos Turísticos: Carta 1 venceu. %d\n", (pontosturi1 > pontosturi2));
    printf("> Densidade Populacional: Carta 1 venceu. %d\n", (densidadepop1 < densidadepop2));
    printf("> PIB per capita: Carta 1 venceu. %d\n", (pibpercapita1 > pibpercapita2));
    printf("> Super Poder: Carta 1 venceu. %d\n\n", (superPoder1 > superPoder2));

    return 0;
}
