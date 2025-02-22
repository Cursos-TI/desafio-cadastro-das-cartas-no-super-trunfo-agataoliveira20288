
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

    printf("\n");
    printf("***Bem vindo(a) ao jogo Super Trunfo!***\n");
    printf("Neste jogo super trunfo iremos colocar os dados de duas cartas");
    printf("Vamos começar inserindo os dados da primeira carta\n\n");

    //Entrada dos dados.
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

    printf("Digite o PIB da sua cidade: ");
    scanf(" %f", &pib);

    getchar();

    printf("O pib da sua cidade é em Milhões, bilhões ou trilhões? ");
    fgets(bt, 10, stdin);
    bt[strcspn(bt, "\n")] = '\0';

    printf("Quantos ponto turísticos tem na sua cidade? ");
    scanf("%d", &pontos_turisticos);

    //Exibição.
    printf("\n***Exibição das cartas1***\n");
    printf("Carta: 1\n");
    printf("Estado: %c\n", estado);
    printf("Código da carta: %c0%d\n", estado, numero_carta);
    printf("Cidade: %s\n", nome_da_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f%s \n", area, km);
    printf("Pib: %.2f %s\n", pib, bt);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos);

    //Entrada dos dados 2.
    printf("\nAgora vamos inserir os dados da carta 2\n");

    printf("\nDigite o seu estado (De A á H): ");
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

    printf("Digite o PIB da sua cidade: ");
    scanf(" %f", &pib);

    getchar();

    printf("O pib da sua cidade é em Milhões, bilhões ou trilhões? ");
    fgets(bt, 10, stdin);
    bt[strcspn(bt, "\n")] = '\0';

    printf("Quantos ponto turísticos tem na sua cidade? ");
    scanf("%d", &pontos_turisticos);

    //Exibição 2.
    printf("\n***Exibição das cartas 2***\n");
    printf("Carta: 2\n");
    printf("Estado: %c\n", estado);
    printf("Código da carta: %c0%d\n", estado, numero_carta);
    printf("Cidade: %s\n", nome_da_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f%s \n", area, km);
    printf("Pib: %.2f %s\n", pib, bt);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos);

    printf("\nFim da exibição\n");

    /* obs: tive problemas para escrever o código aqui então escrevi no vscode de desktop 
    depois passei o código para cá. Espero que não tenha problema. Também vi alguns vídeos 
    para aprender a limpar buffer e tentar colocar o idioma em português. Aguardando o feedback :-}. */

    system("pause");
    return 0;
}


