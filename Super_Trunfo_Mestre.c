#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variáveis    
    int pontos_turisticos;
    unsigned long int populacao;
    float area, pib;
    float densidade_populacional, PIB_per_capta;
    float super_trunfo;

    // Entrada dos dados 1
    printf("Carta 1\n\n");
    printf("Digite a população da sua cidade: \n");
    scanf("%lu", &populacao);

    printf("Digite a área da sua cidade: \n");
    scanf("%f", &area);

    while (getchar() != '\n');

    printf("Digite o PIB da sua cidade: \n");
    scanf("%f", &pib);

    while (getchar() != '\n');

    printf("Quantos pontos turísticos tem na sua cidade? \n");
    scanf("%d", &pontos_turisticos);

    //Declarando mais algumas variáveis
    int pontos_turisticos2;
    unsigned long int populacao_2;
    float densidade_populacional_2, PIB_per_capta_2;
    float area2, pib2;
    float super_trunfo2;

    // Entrada dos dados 2

    printf("\nCarta 2\n\n");

    printf("Digite a população da sua cidade: \n");
    scanf("%lu", &populacao_2);

    printf("Digite a área da sua cidade: \n");
    scanf("%f", &area2);

    while (getchar() != '\n');

    printf("Digite o PIB da sua cidade: \n");
    scanf("%f", &pib2);

    while (getchar() != '\n');

    printf("Quantos pontos turísticos tem na sua cidade? \n");
    scanf("%d", &pontos_turisticos2);

    // Cálculos
     densidade_populacional = populacao / (float) area;
     PIB_per_capta = pib / (float) populacao;

     densidade_populacional_2 = populacao_2 / (float) area2;
     PIB_per_capta_2 = pib2 / (float) populacao_2;

     super_trunfo = (float)populacao + area + pib + pontos_turisticos + PIB_per_capta + (1 / densidade_populacional);
     super_trunfo2 = (float)populacao_2 + area2 + pib2 + pontos_turisticos2 + PIB_per_capta_2 + (1 / densidade_populacional_2);


    //Exibição
    printf("\nComparação das cartas\n\n");
    printf("População: Carta 1 venceu? (%d)\n", populacao > populacao_2);
    printf("Área: Carta 1 venceu? (%d)\n", area > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib > pib2);
    printf("Pontos Turísticos: Carta 2 venceu? (%d)\n", pontos_turisticos < pontos_turisticos2);
    printf("Densidade Populacional: Carta 1 venceu? (%d)\n",densidade_populacional > densidade_populacional_2 );
    printf("PIB per capta: Carta 1 venceu? (%d)\n", PIB_per_capta > PIB_per_capta_2);
    printf("Super poder: Carta 2 venceu? (%d)\n", super_trunfo < super_trunfo2);

    printf("Fim da exibição\n");

    system("pause");
    return 0;
}