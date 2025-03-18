#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


int main(){


int opcao;

printf("\n### Jogo de Interação De Cartas ###\n\n");


printf("Menu Inicial\n");
printf("1. Iniciar Jogo\n");
printf("2. Ver Regras\n");
printf("3. Sair\n");
printf("Digite uma opção: \n");
scanf("%d", &opcao);
switch (opcao) {       //Pedindo Informações das cartas para o jogador
    case 1:
    char codigoCarta1[4]; //Código carta
    char estadoCarta1;    
    char nomeCarta1[50]; //Nome da cidade
    long int populacaoCarta1; //População da cidade
    long double areaCarta1; //Área da cidade
    long double PIBCarta1; //PIB da cidade
    long int pontosTuristicosCarta1; //Pontos turisticos da cidade
    
     
     printf("Digite o estado da carta 1 (A-H): \n");
     scanf(" %c", &estadoCarta1);
     printf("Digite o código da carta (01-04): \n");
     scanf("%s", codigoCarta1);
     printf("Digite o nome da cidade: \n");
     scanf("%s", &nomeCarta1);
     printf("Digite a população da cidade: \n");
     scanf("%ld", &populacaoCarta1);
     printf("Digite a área da cidade (em km²): \n");
     scanf("%lf", &areaCarta1);
     printf("Digite o PIB da cidade: \n");
     scanf("%lf", &PIBCarta1);
     printf("Digite o número de pontos turísticos da cidade: \n");
     scanf("%ld", &pontosTuristicosCarta1);

     long double dencidadePopulacionalCarta1 = populacaoCarta1 / areaCarta1;  //Calculando Dencidade
     long double PIBpercaptaCarta1 = PIBCarta1 / populacaoCarta1; //Calculando PIB percapta
     long double superPoderCarta1 = (pontosTuristicosCarta1 * dencidadePopulacionalCarta1 * PIBpercaptaCarta1); //Calculando Super Poder


     printf("\n*** Carta 1 ***\n");
     printf("Estado: %c\n", estadoCarta1);
     printf("Código: %s\n", codigoCarta1);
     printf("Cidade: %s\n", nomeCarta1);
     printf("População: %ld\n", populacaoCarta1);
     printf("Área: %lf\n", areaCarta1);
     printf("PIB: %lf\n", PIBCarta1);
     printf("Pontos Turisticos: %ld\n", pontosTuristicosCarta1);
     printf("Dencidade Populacional: %lf\n", dencidadePopulacionalCarta1);
     printf("PIB percapta: %lf\n", PIBpercaptaCarta1);
     printf("Super Poder: %lf\n", superPoderCarta1);
     printf("\n");



     char codigoCarta2[4]; //Código carta
    char estadoCarta2;    
    char nomeCarta2[50]; //Nome da cidade
    long int populacaoCarta2; //População da cidade
    long double areaCarta2; //Área da cidade
    long double PIBCarta2; //PIB da cidade
    long int pontosTuristicosCarta2; //Pontos turisticos da cidade
    

    printf("Digite o estado da carta 2 (A-H): \n");
    scanf(" %c", &estadoCarta2);
    printf("Digite o código da carta (01-04): \n");
    scanf("%s", codigoCarta2);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomeCarta2);
    printf("Digite a população da cidade: \n");
    scanf("%ld", &populacaoCarta2);
    printf("Digite a área da cidade (em km²): \n");
    scanf("%lf", &areaCarta2);
    printf("Digite o PIB da cidade: \n");
    scanf("%lf", &PIBCarta2);
    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%ld", &pontosTuristicosCarta2);

    long double dencidadePopulacionalCarta2 = populacaoCarta2 / areaCarta2;  //Calculando Dencidade
    long double PIBpercaptaCarta2 = PIBCarta2 / populacaoCarta2; //Calculando PIB percapta
    long double superPoderCarta2 = (pontosTuristicosCarta2 * dencidadePopulacionalCarta2 * PIBpercaptaCarta2); //Calculando Super Poder



    printf("\n*** Carta 2 ***\n");
    printf("Estado: %c\n", estadoCarta2);
    printf("Código: %s\n", codigoCarta2);
    printf("Cidade: %s\n", nomeCarta2);
    printf("População: %ld\n", populacaoCarta2);
    printf("Área: %lf\n", areaCarta2);
    printf("PIB: %lf\n", PIBCarta2);
    printf("Pontos Turisticos: %ld\n", pontosTuristicosCarta2);
    printf("Dencidade Populacional: %lf\n", dencidadePopulacionalCarta2);
    printf("PIB percapta: %lf\n", PIBpercaptaCarta2);
    printf("Super Poder: %lf\n", superPoderCarta2);
    printf("\n");

    //Comparação cartas

    if (populacaoCarta1 > populacaoCarta2) {
        printf("Carta 1 venceu, pois possui maior população\n");
        } else if (populacaoCarta1 < populacaoCarta2) {
        printf("Carta 2 venceu, pois possui maior população\n");
        } else {
        printf("As cartas possuem a mesma população\n");
        }   
        if (areaCarta1 > areaCarta2) {
        printf("Carta 1 venceu, pois possui maior área\n");
        } else if (areaCarta1 < areaCarta2) {
        printf("Carta 2 venceu, pois possui maior área\n");
        } else {
        printf("As cartas possuem a mesma área\n");
        }
        if (PIBCarta1 > PIBCarta2) {
        printf("Carta 1 venceu, pois possui maior PIB\n");
        } else if (PIBCarta1 < PIBCarta2) {
        printf("Carta 2 venceu, pois possui maior PIB\n");
        } else {
        printf("As cartas possuem o mesmo PIB\n");
        }
        if (pontosTuristicosCarta1 > pontosTuristicosCarta2) {
        printf("Carta 1 venceu, pois possui mais pontos turísticos\n");
        } else if (pontosTuristicosCarta1 < pontosTuristicosCarta2) {
        printf("Carta 2 venceu, pois possui mais pontos turísticos\n");
        } else {
        printf("As cartas possuem o mesmo número de pontos turísticos\n");
        }
        if (superPoderCarta1 > superPoderCarta2) {
        printf("Carta 1 venceu, pois possui maior super poder\n");
        } else if (superPoderCarta1 < superPoderCarta2) {    
        printf("Carta 2 venceu, pois possui maior super poder\n");
        } else {
        printf("As cartas possuem o mesmo super poder\n");
        }
        if (dencidadePopulacionalCarta1 > dencidadePopulacionalCarta2) {
        printf("Carta 1 venceu, pois possui maior dencidade populacional\n");
        } else if (dencidadePopulacionalCarta1 < dencidadePopulacionalCarta2) {
        printf("Carta 2 venceu, pois possui maior dencidade populacional\n");
        } else {
        printf("As cartas possuem a mesma dencidade populacional\n");
        }
        if (PIBpercaptaCarta1 > PIBpercaptaCarta2) {
        printf("Carta 1 venceu, pois possui maior PIB percapta\n");
        } else if (PIBpercaptaCarta1 < PIBpercaptaCarta2) {
        printf("Carta 2 venceu, pois possui maior PIB percapta\n");
        } else {
        printf("As cartas possuem o mesmo PIB percapta\n");
        }
        break;
        case 2:
        printf("Regras do Jogo:\n");
        printf("1 - A carta com maior população vence\n");
        printf("2 - A carta com maior área vence\n");
        printf("3 - A carta com maior PIB vence\n");
        printf("4 - A carta com mais pontos turísticos vence\n");
        printf("5 - A carta com maior super poder vence\n");
        printf("6 - A carta com maior dencidade populacional vence\n");
        printf("7 - A carta com maior PIB percapta vence\n");
        break;
        case 3:
        printf("Saindo do programa....\n");
        break;
        default:
        printf("Opção inválida tente novamente.....\n");
        
    }





    return 0;
}