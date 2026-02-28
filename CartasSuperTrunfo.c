#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    // cidade 1
  char estado[50];
  char carta[50];
  char nome[50];
  int populacao;
  float area;
  float pib;
  int pontos_turisticos;
  float densidade_populacional;
  float pib_capita;
    // cidade 2
  char estado2[50];
  char carta2[50];
  char nome2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontos_turisticos2;
  float densidade_populacional2;
  float pib_capita2;



  // Área para entrada de dados
    // cidade 1
  printf("digite uma letra de A a H para representar um estado: ");
  scanf("%s",estado);
  printf("digite a letra anterior seguida de um numero de 01 a 04: ");
  scanf("%s",carta);
  printf("nome da cidade: ");
  scanf(" %[^\n]",nome);
  printf("população: ");
  scanf("%d",&populacao);
  printf("area da cidade: ");
  scanf("%f",&area);
  printf("PIB da cidade: ");
  scanf("%f",&pib);
  printf("quantidade de pontos turisticos: ");
  scanf("%d",&pontos_turisticos);
  printf("cidade 1 cadastrada com sucesso!\n\n");

  densidade_populacional = (float) populacao/area;
  pib_capita = (float) pib/populacao;
    // cidade 2
  printf("digite uma letra de A a H para representar um estado: ");
  scanf("%s",estado2);
  printf("digite a letra anterior seguida de um numero de 01 a 04: ");
  scanf("%s",carta2);
  printf("nome da cidade: ");
  scanf( " %[^\n]",nome2);
  printf("população: ");
  scanf("%d",&populacao2);
  printf("area da cidade: ");
  scanf("%f",&area2);
  printf("PIB da cidade: ");
  scanf("%f",&pib2);
  printf("quantidade de pontos turisticos: ");
  scanf("%d",&pontos_turisticos2);
  printf("cidade 2 cadastrada com sucesso!\n\n");

  densidade_populacional2 = (float) populacao2/area2;
  pib_capita2 = (float) pib2/populacao2;


  // Área para exibição dos dados da cidade
    //cidade 1
printf("----- CIDADE 1 -----");
printf("Letra da cidade 1:%s\n",estado);
printf("Carta da cidade 1:%s\n",carta);
printf("Nome da cidade 1:%s\n",nome);
printf("População da cidade 1:%d\n",populacao);
printf("Area da cidade 1:%.2f\n",area);
printf("PIB da cidade 1:%.2f\n",pib);
printf("Pontos turisticos da cidade 1:%d\n",pontos_turisticos);


printf("Densidade populacional da cidade 1:%.2f hab/km²\n",densidade_populacional);
printf("PIB per capita da cidade 1:R$%.2f\n",pib_capita);
  // cidade 2
printf("----- CIDADE 2 -----");
printf("Letra da cidade 2:%s\n",estado2);
printf("Carta da cidade 2:%s\n",carta2);
printf("Nome da cidade 2:%s\n",nome2);
printf("População da cidade 2:%d\n",populacao2);
printf("Area da cidade 2:%.2f\n",area2);
printf("PIB da cidade 2:%.2f\n",pib2);
printf("Pontos turisticos da cidade 2:%d\n",pontos_turisticos2);

printf("Densidade populacional da cidade 2:%.2f hab/km²\n",densidade_populacional2);
printf("PIB per capita da cidade 2:R$%.2f\n",pib_capita2);

return 0;
} 
