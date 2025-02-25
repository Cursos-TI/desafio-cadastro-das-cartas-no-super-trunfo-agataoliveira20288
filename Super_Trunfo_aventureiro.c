
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () {
    setlocale(LC_ALL,"pt_BR.UTF-8");

    //Variáveis    
    char estado;
    int numero_carta;
    char nome_da_cidade[15], bt[10];
    int populacao, pontos_turisticos;
    float area, pib;
    char km[] = "km²";
    float densidade_populacional;
    float PIB_per_capta;

    printf("\n");
    printf("***Bem vindo(a) ao jogo Super Trunfo!***\n");
    printf("Neste jogo super trunfo iremos colocar os dados de duas cartas e calcular a densidade populacional e o PIB per capta");
    printf("Vamos começar inserindo os dados da primeira carta\n\n");

    //Entrada dos dados
    printf("Digite o seu estado (De A á H): ");
    scanf(" %c", &estado);
    
    printf("Digite o número da carta (De 1 á 8): ");
    scanf(" %d", &numero_carta);

    getchar();

    printf("Digite o nome da cidade: ");
    fgets(nome_da_cidade, 15, stdin);
    nome_da_cidade[strcspn(nome_da_cidade, "\n")] = '\0';

    printf("Digite a população da sua cidade: ");
    scanf(" %d", &populacao);

    printf("Digite a área da sua cidade: ");
    scanf("%f", &area);

    while (getchar() != '\n');

    printf("Digite o PIB da sua cidade: ");
    scanf("%f", &pib);

    while (getchar() != '\n');

    printf("O pib da sua cidade é em Milhões, bilhões ou trilhões? ");
    fgets(bt, 10, stdin);
    bt[strcspn(bt, "\n")] = '\0';

    printf("Quantos ponto turísticos tem na sua cidade? ");
    scanf(" %d", &pontos_turisticos);
    while (getchar() != '\n');

    densidade_populacional = (float)populacao /area;
    PIB_per_capta = (float)pib / populacao;

    //Exibição
    printf("\n***Exibição das cartas 1***\n");
    printf("Carta: 1\n");
    printf("Estado: %c\n", estado);
    printf("Código da carta: %c0%d\n", estado, numero_carta);
    printf("Cidade: %s\n", nome_da_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f %s \n", area, km);
    printf("Pib: %.2f %s\n", pib, bt);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos);
    printf("Densidade populacional: %.2f\n", densidade_populacional);
    printf("PIB per capta: %.2f\n", PIB_per_capta);

    //Entrada dos dados 2

    //Declarando mais algumas variáveis
    int populacao_2;
    float densidade_populacional_2, PIB_per_capta_2;
    float area2, pib2;

    printf("\nAgora vamos inserir os dados da carta 2\n\n");
    printf("Digite o seu estado (De A á H): ");
    scanf(" %c", &estado);
    
    printf("Digite o número da carta (De 1 á 8): ");
    scanf(" %d", &numero_carta);

    getchar();

    printf("Digite o nome da cidade: ");
    fgets(nome_da_cidade, 15, stdin);
    nome_da_cidade[strcspn(nome_da_cidade, "\n")] = '\0';

    printf("Digite a população da sua cidade: ");
    scanf(" %d", &populacao_2);

    printf("Digite a área da sua cidade: ");
    scanf("%f", &area2);

    while (getchar() != '\n');

    printf("Digite o PIB da sua cidade: ");
    scanf("%f", &pib2);

    while (getchar() != '\n');

    printf("O pib da sua cidade é em Milhões, bilhões ou trilhões? ");
    fgets(bt, 10, stdin);
    bt[strcspn(bt, "\n")] = '\0';

    printf("Quantos ponto turísticos tem na sua cidade? ");
    scanf(" %d", &pontos_turisticos);
    while (getchar() != '\n');

    densidade_populacional_2 = (float)populacao_2 / area2;
    PIB_per_capta_2 = (float)pib2 / populacao_2;

    //Exibição 2
    printf("\n***Exibição das cartas 2***\n");
    printf("Carta: 2\n");
    printf("Estado: %c\n", estado);
    printf("Código da carta: %c0%d\n", estado, numero_carta);
    printf("Cidade: %s\n", nome_da_cidade);
    printf("População: %d\n", populacao_2);
    printf("Área: %.2f %s \n", area2, km);
    printf("Pib: %.2f %s\n", pib2, bt);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos);
    printf("Densidade populacional: %.2f\n", densidade_populacional);
    printf("PIB per capta: %.2f\n", PIB_per_capta);

    printf("\n***Fim da exibição***\n");

    system("pause");
    return 0;
}