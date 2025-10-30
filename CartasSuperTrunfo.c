#include <stdio.h>


int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
char estado, estado2, nome[20], nome2[20];
int codigo, codigo2, pontost, pontost2;
float populacao, populacao2, area, area2, PIB, PIB2;

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
scanf("%f", &populacao);

printf("Digite a Area em km²:\n");
scanf("%f", &area);

printf("Digite o PIB:\n");
scanf("%f", &PIB);

printf("Digite a quantidade de pontos turisticos:\n");
scanf("%d", &pontost);

// cadastro da segunda carta

printf("Vamos cadastrar a 2° carta!\n\n");

printf("Digite uma letra para representar a carta:\n");
scanf(" %c", &estado2);

printf("Digite o código da carta:\n");
scanf("%d", &codigo2);

printf("Digite o nome do Estado que representa a carta:\n");
scanf(" %s", &nome2);

printf("Digite a quantidade da população:\n");
scanf("%f", &populacao2);

printf("Digite a Area em km²:\n");
scanf("%f", &area2);

printf("Digite o PIB:\n");
scanf("%f", &PIB2);

printf("Digite a quantidade de pontos turisticos:\n");
scanf("%d", &pontost2);

// Cálculos com conversão correta
    float densidade = (populacao * 1000000) / area;
    float densidade2 = (populacao2 * 1000000) / area2;
    float PIBC = (PIB * 1000000000) / (populacao * 1000000);
    float PIBC2 = (PIB2 * 1000000000) / (populacao2 * 1000000);



  // Área para exibição dos dados da cidade
printf("Dados da primeira carta:\n\n");
printf("Estado: %c\n", estado);
printf("Código da carta: %c%d\n", estado, codigo);
printf("Nome do Estado: %s\n", nome);
printf("População: %.2f\n", populacao);
printf("Area em km²: %.2f km²\n", area);
printf("PIB: %.2f bilhões de reais\n", PIB);
printf("Número de pontos turisticos: %d\n", pontost);
printf("Densidade populacional: %.2f \n", densidade);
printf("PIB per capita: %.2f \n", PIBC);

printf("Dados da segunda carta:\n\n");
printf("Estado: %c\n", estado2);
printf("Código da carta: %c%d\n", estado2, codigo2);
printf("Nome do Estado: %s\n", nome2);
printf("População: %.2f\n", populacao2);
printf("Area em km²: %.2f km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", PIB2);
printf("Número de pontos turisticos: %d\n", pontost2);
printf("Densidade populacional: %.2f \n", densidade2);
printf("PIB per capita: %.2f \n", PIBC2);

// menu interativo para escolher o atributo para atacar a carta

int opção;

printf("Escolha um atributo para iniciar o duelo!\n");
printf("1 - População...\n");
printf("2 - Area em km²...\n");
printf("3 - PIB...\n");
printf("4 - Pontos turisticos...\n");
printf("5 - Densidade populacional...\n");
printf("6 - PIB per capita...\n");
scanf("%d", &opção);

// resultado e logica do jogo

   printf("\n=== RESULTADO DO DUELO ===\n");

    switch (opção) {
        case 1:
            printf("Atributo escolhido: População\n");
            printf("%s: %.2f milhões\n", nome, populacao);
            printf("%s: %.2f milhões\n", nome2, populacao2);
            if (populacao > populacao2)
                printf(" %s venceu!\n", nome);
            else if (populacao2 > populacao)
                printf(" %s venceu!\n", nome2);
            else
                printf(" Empate!\n");
            break;

        case 2:
            printf("Atributo escolhido: Área\n");
            printf("%s: %.2f km²\n", nome, area);
            printf("%s: %.2f km²\n", nome2, area2);
            if (area > area2)
                printf(" %s venceu!\n", nome);
            else if (area2 > area)
                printf(" %s venceu!\n", nome2);
            else
                printf(" Empate!\n");
            break;

        case 3:
            printf("Atributo escolhido: PIB\n");
            printf("%s: %.2f bilhões\n", nome, PIB);
            printf("%s: %.2f bilhões\n", nome2, PIB2);
            if (PIB > PIB2)
                printf(" %s venceu!\n", nome);
            else if (PIB2 > PIB)
                printf(" %s venceu!\n", nome2);
            else
                printf(" Empate!\n");
            break;

        case 4:
            printf("Atributo escolhido: Pontos turísticos\n");
            printf("%s: %d\n", nome, pontost);
            printf("%s: %d\n", nome2, pontost2);
            if (pontost > pontost2)
                printf(" %s venceu!\n", nome);
            else if (pontost2 > pontost)
                printf(" %s venceu!\n", nome2);
            else
                printf(" Empate!\n");
            break;

        case 5:
            printf("Atributo escolhido: Densidade demográfica (menor vence)\n");
            printf("%s: %.2f hab/km²\n", nome, densidade);
            printf("%s: %.2f hab/km²\n", nome2, densidade2);
            if (densidade < densidade2)
                printf(" %s venceu (menor densidade)!\n", nome);
            else if (densidade2 < densidade)
                printf(" %s venceu (menor densidade)!\n", nome2);
            else
                printf(" Empate!\n");
            break;

        case 6:
            printf("Atributo escolhido: PIB per capita\n");
            printf("%s: %.2f R$/hab\n", nome, PIBC);
            printf("%s: %.2f R$/hab\n", nome2, PIBC2);
            if (PIBC > PIBC2)
                printf(" %s venceu!\n", nome);
            else if (PIBC2 > PIBC)
                printf(" %s venceu!\n", nome2);
            else
                printf(" Empate!\n");
            break;

        default:
            printf(" Opção inválida! Escolha entre 1 e 6.");
 

return 0;
} 
