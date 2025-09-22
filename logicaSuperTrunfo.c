#include <stdio.h>

int main(){
    /* Desafio Super Trunfo - Desenvolvendo a Lógica do Jogo */

    // O nome das variáveis indica os atributos e número da carta ao que se referem 

    // Declaração das variáveis carta 1
    char pais1[20];
    int turismo1, populacao1;
    float area1, pib1, densidadePopulacional1, pibPerCapita1;
    
    // Declaração das variáveis carta 2
    char pais2[20];
    int turismo2, populacao2;
    float area2, pib2, densidadePopulacional2, pibPerCapita2;

    printf("Carta 1\n");     // indica ao usuário o ínicio do cadastro das informações da primeira carta do jogo

    printf("Digite o nome do País: ");
    scanf("%s", &pais1);

    printf("Digite o número de habitantes: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area1);

    printf("Digite o PIB - Produto Interno Bruto: ");
    scanf("%f", &pib1);

    printf("Digite quantos pontos turísticos tem no país: ");
    scanf("%d", &turismo1);

    // Cálculo da Densidade Populacional, PIB per Capita e Super Poder - Carta 1

    densidadePopulacional1 = (float)populacao1 / area1; // utilizar a função (float) converte explicitamente a variavel int (tipo inteiro) em float (tipo c/ casa decimal)
    pibPerCapita1 = (float)populacao1 / pib1;     
    /* utilização do operador matematico divisão para dividir a popupação pela área em km² para chegar na densidade populacional 
    e dividr a população pelo pib para chegar no pib per capita em reais */

    printf("Carta 2\n");     // indica ao usuário o ínicio do cadastro das informações da segunda carta do jogo

    printf("Digite o nome do País: ");
    scanf("%s", &pais2);

    printf("Digite o número de habitantes: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area2);

    printf("Digite o PIB - Produto Interno Bruto: ");
    scanf("%f", &pib2);

    printf("Digite quantos pontos turisticos tem no País: ");
    scanf("%d", &turismo2);

    // Cálculo da Densidade Populacional, PIB per Capita  e Super Poder - Carta 2

    densidadePopulacional2 = (float)populacao2 / area2; 
    pibPerCapita2 = (float)populacao2 / pib2;

    int escolhaAtributo;

    printf("Comparação de Cartas:\n\n");
    printf("Escolha um atributo:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("Escolha: ");
    scanf("%d", &escolhaAtributo);

    switch (escolhaAtributo)
    {
    case 1: 
        printf("Carta 1 - Brasil\n");
        printf("População: %d\n", populacao1);
        printf("Carta 2 - Argentina\n");
        printf("População: %d\n", populacao2);
         if  (populacao1 = populacao2){
             printf("*** Empate! ***");
    }    else if (populacao1 > populacao2){
             printf("*** Carta 1 venceu! ***");
    }    else {
             printf("*** Carta 2 venceu! ***");
    }
        break;
    case 2: 
        printf("Carta 1 - Brasil\n");
        printf("Área: %.2f\n", area1);
        printf("Carta 2 - Argentina\n");
        printf("Área: %.2f\n", area2);
         if (area1 == area2){
            printf("*** Empate! ***");
    }    else if (area1 > area2){
            printf("*** Carta 1 venceu! ***");
    }    else {
            printf("*** Carta 2 venceu! ***");
    }
        break;
    case 3: 
        printf("Carta 1 - Brasil\n");
        printf("PIB: %.2f\n", pib1);
        printf("Carta 2 - Argentina\n");
        printf("PIB: %.2f\n", pib2);
         if (pib1 == pib2){
            printf("*** Empate! ***");
    }    else if (pib1 > pib2){
            printf("*** Carta 1 venceu! ***");
    }    else {
            printf("*** Carta 2 venceu! ***");
    }
        break;
    case 4: 
        printf("Carta 1 - Brasil\n");
        printf("Pontos Turísticos: %d\n", turismo1);
        printf("Carta 2 - Argentina\n");
        printf("Pontos Turísticos: %d\n", turismo2);
         if (turismo1 == turismo2){
            printf("*** Empate! ***");
    }    else if (turismo1 > turismo2){
            printf("*** Carta 1 venceu! ***");
    }    else {
            printf("*** Carta 2 venceu! ***");
    }
        break;
    case 5: 
        printf("Carta 1 - Brasil\n");
        printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
        printf("Carta 2 - Argentina\n");
        printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
         if (densidadePopulacional1 == densidadePopulacional2){
            printf("*** Empate! ***");
    }    else if (densidadePopulacional1 < densidadePopulacional2) {
            printf("*** Carta 1 venceu! ***");
    }    else {
            printf("*** Carta 2 venceu! ***");
    }
        break;
    default:
        printf("Opção Inválida!\n");
    }
    return 0;
}  
