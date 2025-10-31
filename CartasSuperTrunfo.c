#include <stdio.h>

int main() {
    // --- Dados pré-cadastrados ---
    char nome1[20] = "Brasil";
    char nome2[20] = "Argentina";

    float populacao1 = 203.0, populacao2 = 45.8;   // em milhões
    float area1 = 8516.0, area2 = 2780.0;          // em mil km²
    float PIB1 = 10400.0, PIB2 = 640.0;            // em bilhões
    int pontos1 = 55, pontos2 = 33;
    float densidade1 = (populacao1 * 1e6) / (area1 * 1e3);
    float densidade2 = (populacao2 * 1e6) / (area2 * 1e3);
    float pibCapita1 = (PIB1 * 1e9) / (populacao1 * 1e6);
    float pibCapita2 = (PIB2 * 1e9) / (populacao2 * 1e6);

    int atributo1, atributo2;
    float valorA1C1 = 0, valorA1C2 = 0, valorA2C1 = 0, valorA2C2 = 0;
    float soma1 = 0, soma2 = 0;

    printf("=== SUPER TRUNFO: COMPARAÇÃO AVANÇADA ===\n\n");

    printf("Cartas em disputa:\n");
    printf("1️  %s\n", nome1);
    printf("2️  %s\n\n", nome2);

    // --- Menu para o primeiro atributo ---
    printf("Escolha o primeiro atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade populacional (menor vence)\n");
    printf("6 - PIB per capita\n");
    printf("Opção: ");
    scanf("%d", &atributo1);

    // Validação da primeira opção
    if (atributo1 < 1 || atributo1 > 6) {
        printf("Opção inválida! Encerrando o jogo.\n");
        return 0;
    }

    // --- Menu dinâmico para o segundo atributo ---
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 6; i++) {
        if (i == atributo1) continue; // não mostra o mesmo atributo
        switch (i) {
            case 1: printf("1 - População\n"); break;
            case 2: printf("2 - Área\n"); break;
            case 3: printf("3 - PIB\n"); break;
            case 4: printf("4 - Pontos turísticos\n"); break;
            case 5: printf("5 - Densidade populacional (menor vence)\n"); break;
            case 6: printf("6 - PIB per capita\n"); break;
        }
    }
    printf("Opção: ");
    scanf("%d", &atributo2);

    // Validação do segundo atributo
    if (atributo2 < 1 || atributo2 > 6 || atributo2 == atributo1) {
        printf("Opção inválida! Você deve escolher dois atributos diferentes.\n");
        return 0;
    }

    printf("\n=== RESULTADOS DA COMPARAÇÃO ===\n");

    // --- Função de comparação (simulada via switch) ---
    for (int rodada = 1; rodada <= 2; rodada++) {
        int atributo = (rodada == 1) ? atributo1 : atributo2;
        float v1 = 0, v2 = 0;
        char nomeAtrib[30];
        int menorVence = 0;

        switch (atributo) {
            case 1:
                v1 = populacao1; v2 = populacao2;
                sprintf(nomeAtrib, "População (milhões)");
                break;
            case 2:
                v1 = area1; v2 = area2;
                sprintf(nomeAtrib, "Área (mil km²)");
                break;
            case 3:
                v1 = PIB1; v2 = PIB2;
                sprintf(nomeAtrib, "PIB (bilhões)");
                break;
            case 4:
                v1 = pontos1; v2 = pontos2;
                sprintf(nomeAtrib, "Pontos turísticos");
                break;
            case 5:
                v1 = densidade1; v2 = densidade2;
                sprintf(nomeAtrib, "Densidade populacional (menor vence)");
                menorVence = 1;
                break;
            case 6:
                v1 = pibCapita1; v2 = pibCapita2;
                sprintf(nomeAtrib, "PIB per capita (R$/hab)");
                break;
            default:
                printf("Erro interno!\n");
                return 0;
        }

        printf("\nAtributo %d: %s\n", rodada, nomeAtrib);
        printf("%s: %.2f\n", nome1, v1);
        printf("%s: %.2f\n", nome2, v2);

        // Comparação com operador ternário
        int venceu1 = menorVence ? (v1 < v2) : (v1 > v2);
        int venceu2 = menorVence ? (v2 < v1) : (v2 > v1);

        // Atribuição de pontuação
        if (rodada == 1) {
            valorA1C1 = v1;
            valorA1C2 = v2;
        } else {
            valorA2C1 = v1;
            valorA2C2 = v2;
        }

        printf("Resultado da rodada %d: %s\n",
               rodada,
               venceu1 ? nome1 : (venceu2 ? nome2 : "Empate"));
    }

    // --- Soma dos atributos ---
    soma1 = valorA1C1 + valorA2C1;
    soma2 = valorA1C2 + valorA2C2;

    printf("\n=== SOMA FINAL DOS ATRIBUTOS ===\n");
    printf("%s: %.2f\n", nome1, soma1);
    printf("%s: %.2f\n", nome2, soma2);

    // --- Resultado final ---
    printf("\n=== RESULTADO FINAL ===\n");
    (soma1 > soma2)
        ? printf("%s venceu a rodada!\n", nome1)
        : (soma2 > soma1)
            ? printf("%s venceu a rodada!\n", nome2)
            : printf("Empate!\n");

    printf("\nObrigado por jogar o Super Trunfo Avançado! \n");

    return 0;
}