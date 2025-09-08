#include <stdio.h>

int main() {
    char estado1[20], cidade1[20], cod1[10];
    int populacao1, pontosturi1;
    float area1, pib1;

    char estado2[20], cidade2[20], cod2[10];
    int populacao2, pontosturi2;
    float area2, pib2;

    printf("> [Player 1]\n> INSIRA OS DADOS DA CARTA: \n");
    printf("Estado: ");
    scanf("%s", estado1);
    printf("Código da carta: ");
    scanf("%s", cod1);
    printf("Nome da cidade: ");
    scanf("%s", cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB: ");
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
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Nº de pontos turísticos: ");
    scanf("%d", &pontosturi2);

    printf("\n\n>>> Carta 1:\n");
    printf("> Estado: %s\n> Código: %s\n> Nome da cidade: %s\n> População: %d\n> Área: %.2f Km²\n> PIB: %.2f\n> Número de pontos turísticos: %d\n",
           estado1, cod1, cidade1, populacao1, area1, pib1, pontosturi1);

    printf("\n>>> Carta 2:\n");
    printf("> Estado: %s\n> Código: %s\n> Nome da cidade: %s\n> População: %d\n> Área: %.2f Km²\n> PIB: %.2f\n> Número de pontos turísticos: %d\n",
           estado2, cod2, cidade2, populacao2, area2, pib2, pontosturi2);

    return 0;
}
