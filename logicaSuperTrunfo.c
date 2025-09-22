#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main(){ /* Desafio Super Trunfo - Desenvolvendo a Lógica do Jogo */

    // O nome das variáveis indica os atributos e número da carta ao que se referem 

    // Declaração das variáveis carta 1
    char pais1[20];
    int turismo1, populacao1;
    float area1, pib1, densidadeDemografica1, pibPerCapita1;
    
    // Declaração das variáveis carta 2
    char pais2[20];
    int turismo2, populacao2;
    float area2, pib2, densidadeDemografica2, pibPerCapita2;

    printf("Bem-vindo ao jogo Super Trunfo - Países!\n");

    printf("\nCarta 1 - Cadastro dos atributos\n");     // indica ao usuário o ínicio do cadastro das informações da primeira carta do jogo

    printf("Digite o nome do País: ");
    scanf("%s", pais1);

    printf("Digite o número de habitantes: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area1);

    printf("Digite o PIB - Produto Interno Bruto: ");
    scanf("%f", &pib1);

    printf("Digite quantos pontos turísticos tem no país: ");
    scanf("%d", &turismo1);

    // Cálculo da Densidade Demográfica e PIB per Capita - Carta 1

    densidadeDemografica1 = (float)populacao1 / area1; // utilizar a função (float) converte explicitamente a variavel int (tipo inteiro) em float (tipo c/ casa decimal)
    pibPerCapita1 = (pib1 * 1000000000.0) / (float)populacao1;     
    /* utilização do operador matematico divisão para dividir a popupação pela área em km² para chegar na densidade demografica
    e dividr o PIB pela população para chegar no pib per capita em reais */

    printf("\nCarta 2 - Cadastro dos atributos\n");     // indica ao usuário o ínicio do cadastro das informações da segunda carta do jogo

    printf("Digite o nome do País: ");
    scanf("%s", pais2);

    printf("Digite o número de habitantes: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area2);

    printf("Digite o PIB - Produto Interno Bruto: ");
    scanf("%f", &pib2);

    printf("Digite quantos pontos turisticos tem no País: ");
    scanf("%d", &turismo2);

    // Cálculo da Densidade Demográfica e PIB per Capita - Carta 2

    densidadeDemografica2 = (float)populacao2 / area2; 
    pibPerCapita2 = (pib2 * 1000000000.0) / (float)populacao2;

    // Declaração das variáveis para desenvolver menu interativo de escolha de dois atributos para comparação entre as duas cartas do jogo
    int escolhaAtributo1, escolhaAtributo2, comparacaoAtributos1, comparacaoAtributos2;
    float somaCarta1 = 0, somaCarta2 = 0;

    printf("\nComparação de Cartas - Escolha dois atributos para comparação\n");

    printf("\nPrimeiro Atributo:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade Demográfica\n");

    printf("Escolha do primeiro atributo: ");
    scanf("%d", &escolhaAtributo1);

    printf("\nSegundo Atributo:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade Demográfica\n");

    printf("Escolha do segundo atributo: ");
    scanf("%d", &escolhaAtributo2);

    if (escolhaAtributo1 == escolhaAtributo2)
    {
        printf("\nVocê não pode escolher o mesmo atributo duas vezes, escolha outro atributo: ");
        scanf("%d", &escolhaAtributo2);
        if (escolhaAtributo1 == escolhaAtributo2) {
        printf("\nVocê repetiu o mesmo atributo novamente. O programa será encerrado.\n");
        return 1;
    } }

    // === Imprime nome das cartas e indica os atributos escolhidos ===
    printf("\nCarta 1 - %s\n", pais1); 
    printf("Carta 2 - %s\n", pais2);
    printf("\nAtributos Escolhidos:\n");
    
    // === Imprime informações sobre o segundo atributo escolhido ===
    switch (escolhaAtributo1) 
    {
    case 1:
        comparacaoAtributos1 = (populacao1 == populacao2) ? 0 : (populacao1 > populacao2 ? 1 : -1); // Comparação dos atributos individualmente (sem impressão), conforme solicitado.
        printf("1. População\n");
        printf("%s: %d\n", pais1, populacao1);
        printf("%s: %d\n", pais2, populacao2);
        somaCarta1 = somaCarta1 + populacao1; // soma dos atributos para cada carta! 
        somaCarta2 = somaCarta2 + populacao2; 
        break;
    case 2:
        comparacaoAtributos1 = (area1 == area2) ? 0 : (area1 > area2 ? 1 : -1); 
        printf("1. Área\n");
        printf("%s: %.2f km²\n", pais1, area1);
        printf("%s: %.2f km²\n", pais2, area2);
        somaCarta1 = somaCarta1 + area1; 
        somaCarta2 = somaCarta2 + area2; 
        break;
    case 3:
        comparacaoAtributos1 = (pib1 == pib2) ? 0 : (pib1 > pib2 ? 1 : -1);  
        printf("1. PIB\n");
        printf("%s: %.2f\n", pais1, pib1);
        printf("%s: %.2f\n", pais2, pib2);
        somaCarta1 = somaCarta1 + pib1; 
        somaCarta2 = somaCarta2 + pib2; 
        break;
    case 4:
        comparacaoAtributos1 = (turismo1 == turismo2) ? 0 : (turismo1 > turismo2 ? 1 : -1); 
        printf("1. Turismo\n");
        printf("%s: %d\n", pais1, turismo1);
        printf("%s: %d\n", pais2, turismo2);
        somaCarta1 = somaCarta1 + turismo1; 
        somaCarta2 = somaCarta2 + turismo2;
        break;
    case 5:
        comparacaoAtributos1 = (densidadeDemografica1 == densidadeDemografica2) ? 0 : (densidadeDemografica1 < densidadeDemografica2 ? 1 : -1); 
        printf("1. Densidade Demográfica\n");
        printf("%s: %.2f hab/km²\n", pais1, densidadeDemografica1);
        printf("%s: %.2f hab/km²\n", pais2, densidadeDemografica2);
        somaCarta1 = somaCarta1 + densidadeDemografica1;  
        somaCarta2 = somaCarta2 + densidadeDemografica2;  
        break;
    default:
        printf("\nOpção de atributo inválida!\n");
        break;
    }

        // === Imprime informações sobre o segundo atributo escolhido ===
    switch (escolhaAtributo2) 
    {
    case 1:
        comparacaoAtributos2 = (populacao1 == populacao2) ? 0 : (populacao1 > populacao2 ? 1 : -1); 
        printf("2. População\n");
        printf("%s: %d\n", pais1, populacao1);
        printf("%s: %d\n", pais2, populacao2);
        break;
    case 2:
        comparacaoAtributos2 = (area1 == area2) ? 0 : (area1 > area2 ? 1 : -1); 
        printf("2. Área\n");
        printf("%s: %.2f km²\n", pais1, area1);
        printf("%s: %.2f km²\n", pais2, area2);
        break;
    case 3:
        comparacaoAtributos2 = (pib1 == pib2) ? 0 : (pib1 > pib2 ? 1 : -1);  
        printf("2. PIB\n");
        printf("%s: %.2f\n", pais1, pib1);
        printf("%s: %.2f\n", pais2, pib2);
        break;
    case 4:
        comparacaoAtributos2 = (turismo1 == turismo2) ? 0 : (turismo1 > turismo2 ? 1 : -1); 
        printf("2. Turismo\n");
        printf("%s: %d\n", pais1, turismo1);
        printf("%s: %d\n", pais2, turismo2);
        break;
    case 5:
        comparacaoAtributos2 = (densidadeDemografica1 == densidadeDemografica2) ? 0 : (densidadeDemografica1 < densidadeDemografica2 ? 1 : -1); 
        printf("2. Densidade Demográfica\n");
        printf("%s: %.2f hab/km²\n", pais1, densidadeDemografica1);
        printf("%s: %.2f hab/km²\n", pais2, densidadeDemografica2); 
        break;
    default:
        printf("\nOpção de atributo inválida!\n");
        break;
    }

    // Soma dos dois atributos escolhidos paracada carta para exibição do resultado e vencedor da rodada
    printf("\nSoma dos atributos:\n");
    printf("Carta 1: %.2f\n", somaCarta1);
    printf("Carta 2: %.2f\n", somaCarta2);

    somaCarta1 == somaCarta2 ? printf("\n*** Empate!!! ***") :
    somaCarta1 > somaCarta2 ? printf("\n*** Carta 1 venceu! ***") :
    printf("\n*** Carta 2 venceu! ***");

}