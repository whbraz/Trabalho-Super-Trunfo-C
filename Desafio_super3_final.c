#include <stdio.h>

// Desafio Super Trunfo -
// Tema 1 - Cadastro das cartas
// Tema 2 - Comparação de cartas

int main() {

    // ===============================
    // Declaração das variáveis
    // ===============================

    // Carta 1
    char Estado1[3];
    char codigo1[4];
    char cidade1[30];
    int populacao1;
    int pontos1;
    float area1, densidade1;
    float pib1, pop1;

    // Carta 2
    char Estado2[3];
    char codigo2[4];
    char cidade2[30];
    int populacao2;
    int pontos2;
    float area2, densidade2;
    float pib2, pop2;

    // ===============================
    // Entrada de dados - Carta 1
    // ===============================

    printf("Carta 1\n");

    printf("Digite o estado:\n");
    scanf("%s", Estado1);

    printf("Digite o codigo da carta (ex: A01):\n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade1);

    printf("Digite a populacao da cidade:\n");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade em km²:\n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos:\n");
    scanf("%d", &pontos1);

    // Cálculos
    densidade1 = (float) populacao1 / area1;
    pop1 = pib1 / (float) populacao1;

    // Exibição Carta 1
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Estado: %s\n", Estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pop1);

    // ===============================
    // Entrada de dados - Carta 2
    // ===============================

    printf("\nCarta 2\n");

    printf("Digite o estado:\n");
    scanf("%s", Estado2);

    printf("Digite o codigo da carta (ex: A01):\n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade2);

    printf("Digite a populacao da cidade:\n");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade em km²:\n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos:\n");
    scanf("%d", &pontos2);

    // Cálculos
    densidade2 = (float) populacao2 / area2;
    pop2 = pib2 / (float) populacao2;

    // Exibição Carta 2
    printf("\n--- Dados da Carta 2 ---\n");
    printf("Estado: %s\n", Estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pop2);

    // ===============================
// Comparação das Cartas
// ===============================

int opcao1, opcao2;
float v1_c1 = 0, v1_c2 = 0;
float v2_c1 = 0, v2_c2 = 0;
float soma1, soma2;

printf("\n--- Comparação das Cartas ---\n");

/* PRIMEIRO ATRIBUTO */
printf("Escolha o PRIMEIRO atributo:\n");
printf("1 - População\n");
printf("2 - Área\n");
printf("3 - PIB\n");
printf("4 - Pontos Turísticos\n");
printf("5 - Densidade Demográfica\n");
printf("Opção: ");
scanf("%d", &opcao1);

/* validação */
switch (opcao1) {
    case 1: v1_c1 = populacao1; v1_c2 = populacao2; break;
    case 2: v1_c1 = area1;      v1_c2 = area2;      break;
    case 3: v1_c1 = pib1;       v1_c2 = pib2;       break;
    case 4: v1_c1 = pontos1;    v1_c2 = pontos2;    break;
    case 5: v1_c1 = densidade1; v1_c2 = densidade2; break;
    default:
        printf("Opção inválida!\n");
        return 0;
}

/* SEGUNDO ATRIBUTO */
printf("\nEscolha o SEGUNDO atributo:\n");
if (opcao1 != 1) printf("1 - População\n");
if (opcao1 != 2) printf("2 - Área\n");
if (opcao1 != 3) printf("3 - PIB\n");
if (opcao1 != 4) printf("4 - Pontos Turísticos\n");
if (opcao1 != 5) printf("5 - Densidade Demográfica\n");
printf("Opção: ");
scanf("%d", &opcao2);

/* validação */
if (opcao2 == opcao1) {
    printf("Não é permitido repetir o mesmo atributo!\n");
    return 0;
}

switch (opcao2) {
    case 1: v2_c1 = populacao1; v2_c2 = populacao2; break;
    case 2: v2_c1 = area1;      v2_c2 = area2;      break;
    case 3: v2_c1 = pib1;       v2_c2 = pib2;       break;
    case 4: v2_c1 = pontos1;    v2_c2 = pontos2;    break;
    case 5: v2_c1 = densidade1; v2_c2 = densidade2; break;
    default:
        printf("Opção inválida!\n");
        return 0;
}

/* EXIBIÇÃO */
printf("\n--- Resultado da Comparação ---\n");
printf("%s: %.2f | %.2f\n", cidade1, v1_c1, v2_c1);
printf("%s: %.2f | %.2f\n", cidade2, v1_c2, v2_c2);

/* SOMA */
soma1 = v1_c1 + v2_c1;
soma2 = v1_c2 + v2_c2;

printf("\nSoma dos atributos:\n");
printf("%s: %.2f\n", cidade1, soma1);
printf("%s: %.2f\n", cidade2, soma2);

/* RESULTADO FINAL */
if (soma1 > soma2)
    printf("\nVencedor: %s\n", cidade1);
else if (soma2 > soma1)
    printf("\nVencedor: %s\n", cidade2);
else
    printf("\nEmpate!\n");
    return 0;
}   
