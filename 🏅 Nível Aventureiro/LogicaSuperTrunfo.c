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

// ---------- FUNÇÃO DE COMPARAÇÃO ----------
void comparar(int opcao){
    printf("\nComparando cartas pelo atributo escolhido...\n");

    switch(opcao){
        case 1: // População
            if(populacao1 > populacao2){
                printf("CARTA 1 venceu na População!\n");
            } else if(populacao2 > populacao1){
                printf("CARTA 2 venceu na População!\n");
            } else { 
                // Empate → comparar área
                if(area1 > area2){
                    printf("Empate em População. Desempate na Área: CARTA 1 venceu!\n");
                } else if(area2 > area1){
                    printf("Empate em População. Desempate na Área: CARTA 2 venceu!\n");
                } else {
                    printf("Empate total em População e Área!\n");
                }
            }
            printf("Carta 1 População: %lu\n", populacao1);
            printf("Carta 2 População: %lu\n", populacao2);
            break;

        case 2: // Área
            if(area1 > area2){
                printf("CARTA 1 venceu na Área!\n");
            } else if(area2 > area1){
                printf("CARTA 2 venceu na Área!\n");
            } else {
                // Empate → comparar PIB
                if(pib1 > pib2){
                    printf("Empate na Área. Desempate no PIB: CARTA 1 venceu!\n");
                } else if(pib2 > pib1){
                    printf("Empate na Área. Desempate no PIB: CARTA 2 venceu!\n");
                } else {
                    printf("Empate total em Área e PIB!\n");
                }
            }
            printf("Carta 1 Área: %.2f km²\n", area1);
            printf("Carta 2 Área: %.2f km²\n", area2);
            break;

        case 3: // PIB
            if(pib1 > pib2){
                printf("CARTA 1 venceu no PIB!\n");
            } else if(pib2 > pib1){
                printf("CARTA 2 venceu no PIB!\n");
            } else {
                // Empate → comparar PIB per capita
                if(pib_per_capta1 > pib_per_capta2){
                    printf("Empate no PIB. Desempate no PIB per capita: CARTA 1 venceu!\n");
                } else if(pib_per_capta2 > pib_per_capta1){
                    printf("Empate no PIB. Desempate no PIB per capita: CARTA 2 venceu!\n");
                } else {
                    printf("Empate total em PIB e PIB per capita!\n");
                }
            }
            printf("Carta 1 - PIB: %.2f\n", pib1);
            printf("Carta 2 - PIB: %.2f\n", pib2);
            break;

        case 4: // Pontos turísticos
            if(n_pts_turisticos1 > n_pts_turisticos2){
                printf("CARTA 1 venceu nos Pontos Turísticos!\n");
            } else if(n_pts_turisticos2 > n_pts_turisticos1){
                printf("CARTA 2 venceu nos Pontos Turísticos!\n");
            } else {
                printf("Empate total em Pontos Turísticos!\n");
            }
            printf("Carta 1 Pontos turísticos: %d\n", n_pts_turisticos1);
            printf("Carta 2 Pontos turísticos: %d\n", n_pts_turisticos2);
            break;

        default:
            printf("Opção inválida!\n");
    }
}

// ---------- MAIN ----------
int main(){
    int opcao;

    dados_primeira_carta();
    dados_segunda_carta();

    exibir_carta_1();
    exibir_carta_2();

    printf("\nMENU DE COMPARAÇÃO\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    comparar(opcao);

    return 0;
}
