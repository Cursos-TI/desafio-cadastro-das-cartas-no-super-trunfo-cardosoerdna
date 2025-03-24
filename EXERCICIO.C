#include <stdio.h>

int main() {
    // Variáveis para armazenar os dados das duas cartas
    char Estado1, Estado2; // Estado representado por uma letra de A-H
    char Codigo1[5], Codigo2[5]; // Letra representante do estado + numero da carta. ex:A01, B03
    char Cidade1[30], Cidade2[30]; // nome da cidade
    int Populacao1, Populacao2; // numero de habitantes da cidade
    float Area1, Area2; // area da cidade em km²
    float PIB1, PIB2; // o produto interno bruto da cidade
    int Numero_pontos_turisticos1, Numero_pontos_turisticos2;
    
    // Entrada de informações para a primeira carta
    printf("Digite os dados da Carta 1:\n");
    printf("Estado: ");
    scanf(" %c", &Estado1);
    printf("Código da Carta: ");
    scanf("%s", Codigo1);
    printf("Nome da Cidade: ");
    scanf(" %s", Cidade1);
    printf("População: ");
    scanf("%d", &Populacao1);
    printf("Área em km²: ");
    scanf("%f", &Area1);
    printf("PIB: ");
    scanf("%f", &PIB1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &Numero_pontos_turisticos1);
    
    // Entrada de informações para a segunda carta
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado: ");
    scanf(" %c", &Estado2);
    printf("Código da Carta: ");
    scanf("%s", Codigo2);
    printf("Nome da Cidade: ");
    scanf(" %s", Cidade2);
    printf("População: ");
    scanf("%d", &Populacao2);
    printf("Área em km²: ");
    scanf("%f", &Area2);
    printf("PIB: ");
    scanf("%f", &PIB2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &Numero_pontos_turisticos2);
    
    // Exibição das informações cadastradas
    printf("\nCarta 1\n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", Codigo1);
    printf("Nome da Cidade: %s\n", Cidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", Numero_pontos_turisticos1);
    
    printf("\nCarta 2\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Nome da Cidade: %s\n", Cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", Numero_pontos_turisticos2);
    
    return 0;
}
