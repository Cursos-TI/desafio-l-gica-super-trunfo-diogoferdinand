#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Diogo

char cod_carta1[20], cod_carta2[20]; 
unsigned long int populacao1, populacao2;
float pib1, pib2;
int n_pts_turisticos1, n_pts_turisticos2;
float area1, area2;
float densidade_pop1, densidade_pop2;
float pib_per_capta1, pib_per_capta2;
char estado1, estado2; 

void dados_primeira_carta(){
    /*-------------------------------------------------PRIMEIRA CARTA ------------------------------------------------------------*/
    printf("======================================\n");
    //usuário digita o código da cidade
    printf("[ Digite o código da primeira cidade ]\n- Ex: A01\n- [A] Nome do estado\n- [01] Número do estado: ");
    scanf("%s", &cod_carta1);
    printf("======================================\n");

    //usuário digita numero da população1
    printf("Digite a quantidade população: ");
    scanf("%d", &populacao1);

    //usuario digita area1
    printf("Área: ");
    scanf("%f", &area1);

    //usuario digita pib 1
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    //usuario digita pontos turisticos 1
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &n_pts_turisticos1);

    estado1 = cod_carta1[0];
    densidade_pop1 = populacao1/area1;// calculo de densidade populacional
    pib_per_capta1 = pib1/populacao1;// calculo do PIB per Capita
}

void dados_segunda_carta(){
    /*-------------------------------------------------SEGUNDA CARTA ------------------------------------------------------------*/
    printf("======================================\n");
    //usuário digita o código da cidade
    printf("[ Digite o código da Segunta cidade ]\n- Ex: A01\n- [A] Nome do estado\n- [01] Número do estado: ");
    scanf("%s", &cod_carta2);
    printf("======================================\n");

    //usuário digita numero da população1
    printf("Digite a quantidade população: ");
    scanf("%d", &populacao2);

    //usuario digita area1
    printf("Área: ");
    scanf("%f", &area2);

    //usuario digita pib 1
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    //usuario digita pontos turisticos 1
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &n_pts_turisticos2);

    estado2 = cod_carta2[0];
    densidade_pop2 = populacao2/area2; // calculo de densidade populacional
    pib_per_capta2 = pib2/populacao2; // calculo do PIB per Capita
}

void exibir_carta_1() {

    //exibição das informações da carta 1
    printf("===============================\n");
    printf("[            CARTA 1          ]\n");
    printf("===============================\n");
    printf("| Estado: %c                   \n", estado1);
    printf("| Código: %s                   \n", cod_carta1);
    printf("| População: %d                \n", populacao1);
    printf("| Área em km²: %.2f km²        \n", area1);
    printf("| PIB: %.2f                    \n", pib1);
    printf("| Pontos turísticos: %d        \n", n_pts_turisticos1);
    printf("| Densidade Populacional: %.2f \n", densidade_pop1);
    printf("| PIB Percapta: R$%.2f \n", pib_per_capta1);
}

void exibir_carta_2() {
    //exibição das informações da carta 2
    printf("===============================\n");
    printf("[            CARTA 2          ]\n");
    printf("===============================\n");
    printf("| Estado: %c                   \n", estado2);
    printf("| Código: %s                   \n", cod_carta2);
    printf("| População: %d                \n", populacao2);
    printf("| Área em km²: %.2f km²        \n", area2);
    printf("| PIB: %.2f                    \n", pib2);
    printf("| Pontos turísticos: %d        \n", n_pts_turisticos2);
    printf("| Densidade Populacional: %.2f \n", densidade_pop2);
    printf("| PIB Percapta: R$%.2f \n", pib_per_capta2);
}

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    dados_primeira_carta(); // entrada de dados primeira carta
    dados_segunda_carta(); // entrada de dados segunda carta

    exibir_carta_1(); //exibição carta 1
    exibir_carta_2(); // exibição carta 2

    printf("\n\n");
    
    printf("\n\nComparação de Cartas:\n\n");

    printf("Carta 1 - (%s) - PIB (%.2f)\n", cod_carta1, pib1);
    printf("Carta 2 - (%s) - PIB (%.2f)\n", cod_carta2, pib2);

    if (pib1 > pib2) {
        printf("Resultado: A Carta 1 (%s) VENCEU !", cod_carta1);
    } else {
        printf("Resultado: A Carta 2 (%s) VENCEU !", cod_carta2);
    }

    printf("\n\n");
    return 0;
}