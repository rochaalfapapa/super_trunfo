#include <stdio.h>

int main (){

    //Declaração das variáveis
    char estado1, estado2;
    char codigo1[4], codigo2[4], cidade1[20], cidade2[20];
    int pontos1, pontos2;

    //alterado o tipo de variável da população no desafio nível mestre
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    float densidade1, densidade2, pibpercapta1, pibpercapta2;
    float superPoder1, superPoder2;
    int resultadoPopulacao, resultadoArea, resultadoPib, resultadoPontos, resultadoDensidade, resultadoPibPerCapta, resultadoSuperPoder;

    //Mensagem de introdução ao usuário
    printf("Olá, Bem vindo ao Super Trunfo!\n\n\nPrimeiramente vamos começar cadastrando os dados de duas cidades.\n\n");
    
    //Cadastro das informações da primeira cidade
    printf("Primeira cidade:\n\nInsira o Estado (uma letra de 'A' a 'H' - representando um dos oito estados):\n");
    scanf(" %c", &estado1);
    printf("Digite o Código da Carta (letra do estado seguida de um número de 01 a 04 - ex: A01, B03):\n");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade (sem ser nome composto):\n");
    scanf("%s", cidade1);
    printf("Digite o número de habitantes da cidade:\n");
    scanf("%lu", &populacao1);
    printf("Digite a área da cidade (em km²):\n");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade (em bilhões de R$):\n");
    scanf("%f", &pib1);
    printf("Para finalizarmos o cadastro da primeira cidade, por favor, insira a quantidade de pontos turísticos:\n");
    scanf("%d", &pontos1);

    //Cadastro da segunda cidade
    printf("\n\nAgora vamos iniciar o cadastramento da segunda cidade.\n\nPor gentileza, insira o segundo Estado (uma letra de 'A' a 'H' - representando um dos oito estados):\n ");
    scanf(" %c", &estado2);
    printf("Digite o Código da Carta (letra do estado seguida de um número de 01 a 04 - ex: A01, B03):\n");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade (sem ser nome composto):\n");
    scanf("%s", cidade2);
    printf("Digite o número de habitantes da cidade:\n");
    scanf("%lu", &populacao2);
    printf("Digite a área da cidade (em km²):\n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade (em bilhões de R$):\n");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turísticos da segunda cidade:\n");
    scanf("%d", &pontos2);

    //Cálculo da Densidade Populacional e do Pib per Capita das duas cidades

    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;
    pibpercapta1 =  (float) ((pib1*1000000000) / populacao1);
    pibpercapta2 = (float) ((pib2*1000000000) / populacao2);

    //Cálculo do super poder
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontos1 + pibpercapta1 + (float) (1/densidade1);
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontos2 + pibpercapta2 + (float) (1/densidade2);

    //Comparação dos atributos das cartas
    resultadoPopulacao = populacao1 > populacao2;
    resultadoArea = area1 > area2;
    resultadoPib = pib1 > pib2;
    resultadoPontos = pontos1 > pontos2;
    resultadoDensidade = densidade1 < densidade2;
    resultadoPibPerCapta = pibpercapta1 > pibpercapta2;
    resultadoSuperPoder = superPoder1 > superPoder2;

    //Retornando os dados das duas cidades
    printf("-------------------------------------------------------------------------------------------------------------");
    printf("\nAgora vamos visualizar as informações cadastradas:\n\n");
    printf("Carta 1\n\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %lu habitantes\nÁrea: %.1f km²\nPIB: %.2f bilhões de reais\nNúmero de pontos turísticos: %d\nDensidade populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\nSuper Poder Carta 1: %.2f\n\n", estado1, codigo1, cidade1, populacao1, area1, pib1, pontos1, densidade1, pibpercapta1, superPoder1);
    printf("\n\nCarta 2\n\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %lu habitantes\nÁrea: %.1f km²\nPIB: %.2f bilhões de reais\nNúmero de pontos turísticos: %d\nDensidade populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\nSuper Poder Carta 2: %.2f\n\n", estado2, codigo2, cidade2, populacao2, area2, pib2, pontos2, densidade2, pibpercapta2, superPoder2);

    //Retornando os resultados das comparações dos atributos
    printf("\n\nComparação das Cartas:\n\nPopulação: Carta 1 Venceu (%d)\nÁrea: Carta 1 Venceu (%d)\nPIB: Carta 1 Venceu (%d)\nPontos Turísticos: Carta 1 Venceu (%d)\nDensidade Populacional: Carta 1 Venceu (%d)\nPIB per Capta: Carta 1 Venceu (%d)\nSuper Poder: Carta 1 Venceu (%d)\n\n\n", resultadoPopulacao, resultadoArea, resultadoPib, resultadoPontos, resultadoDensidade, resultadoPibPerCapta, resultadoSuperPoder);

    return 0;
}
