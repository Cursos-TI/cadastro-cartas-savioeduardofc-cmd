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

  // Área para entrada de dados da carta 1:
     printf("Digite o estado 1:\n");
     scanf("%c", &estado1);
     printf("Digite o código 1:\n");
     scanf("%c", &codigo1);
     printf("Digite a cidade 1:\n");
     scanf("%c", &cidade1);
     printf("Digite a população 1:\n");
     scanf("%d", &populacao1);
     printf("Digite o PIB 1:\n");
     scanf("%f", &pib1);
     printf("Digite os pontos turísticos 1:\n");
     scanf("%d", &pontos1);

  // Área para entrada de dados da carta 2:
     printf("Digite o estado 2:\n");
     scanf("%c", &estado2);
     printf("Digite o código 2:\n");
     scanf("%c", &codigo2);
     printf("Digite a cidade 2:\n");
     scanf("%c", &cidade2);
     printf("Digite a população 2:\n");
     scanf("%d", &populacao2);
     printf("Digite o PIB 2:\n");
     scanf("%f", &pib2);
     printf("Digite os pontos turísticos 2:\n");
     scanf("%d", &pontos2);

  // Área para exibição dos dados da cidade
     printf("\n---CARTA 1---\n");
     printf("Estado: %c"\n, estado1);
     printf("Código: %c"\n, codigo1);
     printf("Cidade: %c"\n, cidade1);
     printf("População: %d"\n, populacao1);
     printf("Area: %f"\n, area1);
     printf("PIB: %f", pib1);
     printf("Pontos Turísticos: %d"\n, pontos1);

      printf("\n---CARTA 2---\n");
     printf("Estado: %c"\n, estado2);
     printf("Código: %c"\n, codigo2);
     printf("Cidade: %c"\n, cidade2);
     printf("População: %d"\n, populacao2);
     printf("Area: %f"\n, area2);
     printf("PIB: %f", pib2);
     printf("Pontos Turísticos: %d"\n, pontos2);


return 0;
} 
