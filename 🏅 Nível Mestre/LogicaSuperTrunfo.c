#include <stdio.h>

// Variáveis globais (duas cartas)
char cod_carta1[20], cod_carta2[20]; 
unsigned long int populacao1, populacao2;
float pib1, pib2;
int n_pts_turisticos1, n_pts_turisticos2;
float area1, area2;
float densidade_pop1, densidade_pop2;
float pib_per_capta1, pib_per_capta2;
char estado1, estado2; 

// ---------- FUNÇÕES DE ENTRADA DE DADOS ----------
void dados_primeira_carta(){
    printf("======================================\n");
    printf("[ Digite o código da primeira cidade ]\nEx: A01\n");
    scanf("%s", cod_carta1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &n_pts_turisticos1);

    estado1 = cod_carta1[0];
    densidade_pop1 = populacao1 / area1;
    pib_per_capta1 = pib1 / populacao1;
}

void dados_segunda_carta(){
    printf("======================================\n");
    printf("[ Digite o código da segunda cidade ]\nEx: B02\n");
    scanf("%s", cod_carta2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &n_pts_turisticos2);

    estado2 = cod_carta2[0];
    densidade_pop2 = populacao2 / area2;
    pib_per_capta2 = pib2 / populacao2;
}

// ---------- FUNÇÕES DE EXIBIÇÃO ----------
void exibir_carta_1() {
    printf("===============================\n");
    printf("[          CARTA 1             ]\n");
    printf("===============================\n");
    printf("| Estado: %c\n", estado1);
    printf("| Código: %s\n", cod_carta1);
    printf("| População: %lu\n", populacao1);
    printf("| Área: %.2f km²\n", area1);
    printf("| PIB: %.2f\n", pib1);
    printf("| Pontos turísticos: %d\n", n_pts_turisticos1);
    printf("| Densidade Pop.: %.2f\n", densidade_pop1);
    printf("| PIB per capita: %.2f\n", pib_per_capta1);
}

void exibir_carta_2() {
    printf("===============================\n");
    printf("[          CARTA 2             ]\n");
    printf("===============================\n");
    printf("| Estado: %c\n", estado2);
    printf("| Código: %s\n", cod_carta2);
    printf("| População: %lu\n", populacao2);
    printf("| Área: %.2f km²\n", area2);
    printf("| PIB: %.2f\n", pib2);
    printf("| Pontos turísticos: %d\n", n_pts_turisticos2);
    printf("| Densidade Pop.: %.2f\n", densidade_pop2);
    printf("| PIB per capita: %.2f\n", pib_per_capta2);
}

// ---------- FUNÇÃO DE COMPARAÇÃO DE DOIS ATRIBUTOS ----------
void comparar(int opcao1, int opcao2){
    float valor1_c1 = 0, valor1_c2 = 0;
    float valor2_c1 = 0, valor2_c2 = 0;

    // Primeiro atributo escolhido
    switch(opcao1){
        case 1: valor1_c1 = populacao1; valor1_c2 = populacao2; break;
        case 2: valor1_c1 = area1; valor1_c2 = area2; break;
        case 3: valor1_c1 = pib1; valor1_c2 = pib2; break;
        case 4: valor1_c1 = n_pts_turisticos1; valor1_c2 = n_pts_turisticos2; break;
        case 5: valor1_c1 = densidade_pop1; valor1_c2 = densidade_pop2; break;
        case 6: valor1_c1 = pib_per_capta1; valor1_c2 = pib_per_capta2; break;
        default: printf("Opção inválida!\n");
    }

    // Segundo atributo escolhido
    switch(opcao2){
        case 1: valor2_c1 = populacao1; valor2_c2 = populacao2; break;
        case 2: valor2_c1 = area1; valor2_c2 = area2; break;
        case 3: valor2_c1 = pib1; valor2_c2 = pib2; break;
        case 4: valor2_c1 = n_pts_turisticos1; valor2_c2 = n_pts_turisticos2; break;
        case 5: valor2_c1 = densidade_pop1; valor2_c2 = densidade_pop2; break;
        case 6: valor2_c1 = pib_per_capta1; valor2_c2 = pib_per_capta2; break;
        default: printf("Opção inválida!\n");
    }

    // Mostrar valores
    printf("\n===== RESULTADO DA COMPARAÇÃO =====\n");
    printf("Carta 1 (%s) x Carta 2 (%s)\n\n", cod_carta1, cod_carta2);

    // Comparar primeiro atributo
    if(opcao1 == 5){ // densidade -> menor vence
        printf("Primeiro atributo (Densidade): Carta1 %.2f x Carta2 %.2f\n", valor1_c1, valor1_c2);
        printf("%s venceu no 1º atributo!\n", 
            (valor1_c1 < valor1_c2) ? "Carta 1" : (valor1_c2 < valor1_c1 ? "Carta 2" : "Empate"));
    } else {
        printf("Primeiro atributo: Carta1 %.2f x Carta2 %.2f\n", valor1_c1, valor1_c2);
        printf("%s venceu no 1º atributo!\n", 
            (valor1_c1 > valor1_c2) ? "Carta 1" : (valor1_c2 > valor1_c1 ? "Carta 2" : "Empate"));
    }

    // Comparar segundo atributo
    if(opcao2 == 5){ // densidade -> menor vence
        printf("Segundo atributo (Densidade): Carta1 %.2f x Carta2 %.2f\n", valor2_c1, valor2_c2);
        printf("%s venceu no 2º atributo!\n", 
            (valor2_c1 < valor2_c2) ? "Carta 1" : (valor2_c2 < valor2_c1 ? "Carta 2" : "Empate"));
    } else {
        printf("Segundo atributo: Carta1 %.2f x Carta2 %.2f\n", valor2_c1, valor2_c2);
        printf("%s venceu no 2º atributo!\n", 
            (valor2_c1 > valor2_c2) ? "Carta 1" : (valor2_c2 > valor2_c1 ? "Carta 2" : "Empate"));
    }

    // Soma final
    float soma1 = valor1_c1 + valor2_c1;
    float soma2 = valor1_c2 + valor2_c2;
    printf("\nSoma dos dois atributos:\nCarta 1: %.2f | Carta 2: %.2f\n", soma1, soma2);

    printf("\n>>> %s\n", 
        (soma1 > soma2) ? "CARTA 1 venceu a rodada!" : (soma2 > soma1 ? "CARTA 2 venceu a rodada!" : "EMPATE!"));
}

// ---------- MAIN ----------
int main(){
    int opcao1, opcao2;

    dados_primeira_carta();
    dados_segunda_carta();

    exibir_carta_1();
    exibir_carta_2();

    // Primeiro menu
    printf("\nMENU DE ATRIBUTOS\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB per capita\n");
    printf("Escolha o primeiro atributo: ");
    scanf("%d", &opcao1);

    // Segundo menu (não mostra o atributo já escolhido)
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    if(opcao1 != 1) printf("1 - População\n");
    if(opcao1 != 2) printf("2 - Área\n");
    if(opcao1 != 3) printf("3 - PIB\n");
    if(opcao1 != 4) printf("4 - Pontos Turísticos\n");
    if(opcao1 != 5) printf("5 - Densidade Demográfica\n");
    if(opcao1 != 6) printf("6 - PIB per capita\n");
    scanf("%d", &opcao2);

    if(opcao1 == opcao2){
        printf("Erro: não é permitido escolher o mesmo atributo duas vezes!\n");
        return 1;
    }

    comparar(opcao1, opcao2);

    return 0;
}