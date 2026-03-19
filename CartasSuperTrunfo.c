#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // cadastro carta1 e carta2
     char estado1, estado2;
     char codigo1[4], codigo2[4];
     char cidade1[50], cidade2[50];
     int populacao1, populacao2;
     float area1, area2;
     float pib1, pib2;
     int pontos1, pontos2;
     float densidadePop1 = populacao1 / area1, densidadePop2 = populacao2 / area2;
     float pib_per_capta1 = pib1 / populacao1, pib_per_capta2 = pib2 / populacao2;

  // Área para entrada de dados da carta 1:
     printf("CADASTRO DA CARTA 1\n");
     printf("Digite o estado:\n");
     scanf(" %c", &estado1);
     printf("Digite o codigo:\n");
     scanf(" %s", codigo1); //STRING NÃO PRECISA DE & NO SCANF
     printf("Digite a cidade:\n");
     scanf(" %s", cidade1); //STRING NÃO PRECISA DE & NO SCANF
     printf("Digite a populacao:\n");
     scanf(" %d", &populacao1);
     printf("Digite a Area:\n");
     scanf(" %f", &area1);
     printf("Digite o PIB:\n");
     scanf(" %f", &pib1);
     printf("Digite os pontos turisticos:\n");
     scanf(" %d", &pontos1);
     printf("\n"); //Linha em branco
  // Área para entrada de dados da carta 2:
     printf("CADASTRO DA CARTA 2\n");
     printf("Digite o estado:\n");
     scanf(" %c", &estado2);
     printf("Digite o codigo:\n");
     scanf(" %s", codigo2); //STRING NÃO PRECISA DE & NO SCANF
     printf("Digite a cidade:\n");
     scanf(" %s", cidade2); //STRING NÃO PRECISA DE & NO SCANF
     printf("Digite a populacao:\n");
     scanf(" %d", &populacao2);
     printf("Digite a Area:\n");
     scanf(" %f", &area2);
     printf("Digite o PIB:\n");
     scanf(" %f", &pib2);
     printf("Digite os pontos turisticos:\n");
     scanf(" %d", &pontos2);
     printf("\n");
  // Área para exibição dos dados da cidade
     printf("\n---CARTA 1---\n");
     printf("Estado: %c\n", estado1);
     printf("Codigo: %s\n", codigo1);
     printf("Cidade: %s\n", cidade1);
     printf("Populacao: %d\n", populacao1);
     printf("Area: %f km²\n", area1);
     printf("PIB: %f", pib1);
     printf("Pontos Turisticos: %d\n", pontos1);
     printf("Densidade Populacional: %f\n", densidadePop1);
     printf("Pib per capita: %f\n", pib_per_capta1);
     printf("\n"); //Linha em branco
     printf("\n---CARTA 2---\n");
     printf("Estado: %c\n", estado2);
     printf("Codigo: %s\n", codigo2);
     printf("Cidade: %s\n", cidade2);
     printf("Populacao: %d\n", populacao2);
     printf("Area: %f km²\n", area2);
     printf("PIB: %f\n", pib2);
     printf("Pontos Turisticos: %d\n", pontos2);
     printf("Densidade Populacional: %f\n", densidadePop2);
     printf("Pib per capita: %f\n", pib_per_capta2);

return 0;
} 
