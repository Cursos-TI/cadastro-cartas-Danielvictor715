#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
char estado, estado2;
int codigo, codigo2;
char nome[20], nome2[20];
int populacao, populacao2;
float area, area2;
float PIB, PIB2;
int pontost, pontost2;

  // Área para entrada de dados

printf("Bem vindo ao Super Trunfo de Paises\n");
printf("Vamos cadastra a 1° carta!\n\n");

// cadastro da primeira carta

printf("Digite uma letra para representar a carta:\n");
scanf(" %c", &estado);

printf("Digite o código da carta:\n");
scanf("%d", &codigo);

printf("Digite o nome do Estado que representa a carta:\n");
scanf(" %s", &nome);

printf("Digite a quantidade da população:\n");
scanf("%d", &populacao);

printf("Digite a Area em km²:\n");
scanf("%f", &area);

printf("Digite o PIB:\n");
scanf("%f", &PIB);

printf("Digite a quantidade de pontos turisticos:\n");
scanf("%d", &pontost);

// cadastro da segunda carta

printf("Vamos cadastrar a 2° carta!\n\n");

printf("Bem vindo ao Super Trunfo de Paises\n");
printf("Vamos cadastra a 1° carta!\n\n");

// cadastro da primeira carta

printf("Digite uma letra para representar a carta:\n");
scanf(" %c", &estado2);

printf("Digite o código da carta:\n");
scanf("%d", &codigo2);

printf("Digite o nome do Estado que representa a carta:\n");
scanf(" %s", &nome2);

printf("Digite a quantidade da população:\n");
scanf("%d", &populacao2);

printf("Digite a Area em km²:\n");
scanf("%f", &area2);

printf("Digite o PIB:\n");
scanf("%f", &PIB2);

printf("Digite a quantidade de pontos turisticos:\n");
scanf("%d", &pontost2);


  // Área para exibição dos dados da cidade

return 0;
} 
