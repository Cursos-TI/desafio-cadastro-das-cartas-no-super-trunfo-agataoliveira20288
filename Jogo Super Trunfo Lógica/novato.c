#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Carta 1

    // Variáveis
    int populacao, pontos_turisticos;
    float area, pib, PIB_per_capta, densidade_populacional;
    char estado[3], codigo[3], nome[20];

    printf("\nCarta 1\n");

    printf("Digite o nome da sua cidade: \n");
    fgets(nome, 20, stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("Digite o código da sua cidade de (1 á 8): \n");
    fgets(codigo, 3, stdin);
    codigo[strcspn(codigo, "\n")] = '\0';

    printf("Digite o estado da sua cidade de (A á H): \n");
    fgets(estado, 3, stdin);
    estado[strcspn(estado, "\n")] = '\0';

    printf("Digite a população da sua cidade: \n");
    scanf("%d", &populacao);

    printf("Digite o número de pontos turísticos da sua cidade: \n");
    scanf("%d", &pontos_turisticos);

    printf("Digite a área da sua cidade: \n");
    scanf("%f", &area);

    while (getchar() != '\n');

    printf("Digite o PIB da sua cidade: \n");
    scanf("%f", &pib);

    // Cálculos
    densidade_populacional = (float) populacao / area;
    PIB_per_capta = (float) pib / populacao;

    // Exibição carta 1
    printf("\nCarta 1\n");
    printf("Cidade: %s\n", nome);
    printf("Código: %s0%s\n", estado, codigo);
    printf("População: %d\n", populacao);
    printf("Pontos turísticos: %d\n", pontos_turisticos);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Densidade populacional: %.2f\n", densidade_populacional);
    printf("PIB per Capta: %.2f\n", PIB_per_capta);

    // Carta 2

    // Variáveis
    int populacao2, pontos_turisticos2;
    float area2, pib2, PIB_per_capta2, densidade_populacional2;
    char estado2[3], codigo2[3], nome2[15];

    printf("\nCarta 2\n");

    printf("Digite o nome da sua cidade: \n");
    while (getchar() != '\n');
    fgets(nome2, sizeof(nome2), stdin);
    nome2[strcspn(nome2, "\n")] = '\0';

    while (getchar() != '\n');

    printf("Digite o código da sua cidade de (1 á 8): \n");
    fgets(codigo2, 3, stdin);
    codigo2[strcspn(codigo2, "\n")] = '\0';

    printf("Digite o estado da sua cidade (A a H): \n");
    fgets(estado2, 3, stdin);
    estado2[strcspn(estado2, "\n")] = '\0';

    printf("Digite a população da sua cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite o número de pontos turísticos da sua cidade: \n");
    scanf("%d", &pontos_turisticos2);

    printf("Digite a área da sua cidade: \n");
    scanf("%f", &area2);

    while (getchar() != '\n');

    printf("Digite o PIB da sua cidade: \n");
    scanf("%f", &pib2);

    // Cálculos
    densidade_populacional2 = (float) populacao2 / area2;
    PIB_per_capta2 = (float) pib2 / populacao2;

    // Exibição Carta 2
    printf("\nCarta 2\n");
    printf("Cidade: %s\n", nome2);
    printf("Código: %s0%s\n", estado2, codigo2);
    printf("População: %d\n", populacao2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Densidade populacional: %.2f\n", densidade_populacional2);
    printf("PIB per Capta: %.2f\n", PIB_per_capta2);

    // Comparação de Área
    printf("\nNa Quesito Área: \n");
    if (area > area2) {
        printf("Carta 1 Venceu!\n");
    }
    else {
        printf("Carta 2 Venceu!\n");
    }

    system("pause");
    return 0;
}