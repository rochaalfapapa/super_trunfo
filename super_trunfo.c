#include <stdio.h>

int main (){

    //Declaração das variáveis
    char estado1, estado2;
    char codigo1[4], codigo2[4], cidade1[20], cidade2[20];
    int populacao1, populacao2, pontos1, pontos2;
    float area1, area2, pib1, pib2;

    //Mensagem de introdução ao usuário
    printf("Olá, Bem vindo ao Super Trunfo!\n\n\nPrimeiramente vamos começar cadastrando os dados de duas cidades.\n\n");
    
    //Cadastro das informações da primeira cidade
    printf("Primeira cidade:\n\nInsira o Estado (uma letra de 'A' a 'H' - representando um dos oito estados):\n");
    scanf("%c", &estado1);
    printf("Digite o Código da Carta (letra do estado seguida de um número de 01 a 04 - ex: A01, B03):\n");
    scanf("%s", &codigo1);
    printf("Digite o nome da cidade:\n");
    scanf("%s", &cidade1);
    printf("Digite o número de habitantes da cidade:\n");
    scanf("%d", &populacao1);
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
    scanf("%s", &codigo2);
    printf("Digite o nome da cidade:\n");
    scanf("%s", &cidade2);
    printf("Digite o número de habitantes da cidade:\n");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade (em km²):\n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade (em bilhões de R$):\n");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turísticos da segunda cidade:\n");
    scanf("%d", &pontos2);

    //Retornando os dados das duas cidades
    printf("-------------------------------------------------------------------------------------------------------------");
    printf("\nAgora vamos visualizar as informações cadastradas:\n\n");
    printf("Carta 1\n\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d habitantes\nÁrea: %.1f km²\nPIB: %.2f bilhões de reais\nNúmero de pontos turísticos: %d\n\n", estado1, codigo1, cidade1, populacao1, area1, pib1, pontos1);
    printf("\n\nCarta 2\n\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d habitantes\nÁrea: %.1f km²\nPIB: %.2f bilhões de reais\nNúmero de pontos turísticos: %d\n\n", estado2, codigo2, cidade2, populacao2, area2, pib2, pontos2);

    return 0;
}
