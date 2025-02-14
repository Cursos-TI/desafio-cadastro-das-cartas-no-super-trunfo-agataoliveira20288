#include <stdio.h>
#include <stdlib.h>

int main () {
    int pontos_turisticos;
    char populacao[21];
    char area[10]; 
    char pib[10];

    printf("****SUPER TRUNFO****\n");

    printf("Digite a populacao da cidade: ");
    scanf("%20s", populacao);

    printf("Digite a area da sua cidade: ");
    scanf("%9s", area);

    printf("Digite o pib da sua cidade: ");
    scanf("%9s", pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);

    printf("Populacao: %s\n", populacao);
    printf("Area: %s\n", area);
    printf("Pib: %s\n", pib);
    printf("Pontos Turisticos: %d", pontos_turisticos);
    printf("programa completo");

    system("pause");
    return 0;
}