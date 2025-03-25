#include <stdio.h>

int main() {

    char estado1;
    char codigo1[5];
    char cidade1[50];
    int populacao1;
    float area1, pib1;
    int turisticos1;

    char estado2;
    char codigo2[5];
    char cidade2[50];
    int populacao2;
    float area2, pib2;
    int turisticos2;

    printf("Informe o Estado da Carta 1 (A-H): ");
    scanf(" %c", &estado1);

    printf("Informe o Código da Carta 1 (Ex: A01): ");
    scanf("%s", codigo1);

    printf("Informe o Nome da Cidade da Carta 1: ");
    scanf(" %[^\n]", cidade1);

    printf("Informe a População da Carta 1: ");
    scanf("%d", &populacao1);

    printf("Informe a Área da Cidade da Carta 1 (em km²): ");
    scanf("%f", &area1);

    printf("Informe o PIB da Cidade da Carta 1 (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Informe o Número de Pontos Turísticos da Carta 1: ");
    scanf("%d", &turisticos1);

    printf("\n=== Carta 1 Cadastrada ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turisticos1);

    getchar();

    printf("\nInforme o Estado da Carta 2 (A-H): ");
    scanf(" %c", &estado2);

    printf("Informe o Código da Carta 2 (Ex: A01): ");
    scanf("%s", codigo2);

    printf("Informe o Nome da Cidade da Carta 2: ");
    scanf(" %[^\n]", cidade2);

    printf("Informe a População da Carta 2: ");
    scanf("%d", &populacao2);

    printf("Informe a Área da Cidade da Carta 2 (em km²): ");
    scanf("%f", &area2);

    printf("Informe o PIB da Cidade da Carta 2 (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Informe o Número de Pontos Turísticos da Carta 2: ");
    scanf("%d", &turisticos2);

    printf("\n=== Carta 2 Cadastrada ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turisticos2);

    return 0;
}
