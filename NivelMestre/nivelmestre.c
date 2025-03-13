#include <stdio.h>

int main(){
      

    char estado;
    char codigo[5]; 
    char cidade[50];
    unsigned long int populacaoCarta1, populacaoCarta2;
    float areaCarta1, areaCarta2;
    float PIBCarta1, PIBCarta2;
    int pontosturisticosCarta1, pontosturisticosCartas2;
    float dencidadepopulacionalCarta1, dencidadepopulacionalCarta2;
    float PIBpercaptaCarta1, PIBpercaptaCarta2;
    float superPoderCarta1, superPoderCarta2;
    int resultado;
    

    
    //código carta 1
    printf("Digite o estado da carta 1 (A-H):");
    scanf("%c", &estado);
    printf("Digite o codigo da carta 1 (ex: A01):");
    scanf("%s", &codigo);
    printf("Digite o nome da cidade da carta 1:");
    scanf("%s", &cidade);
    printf("Digite a população da cidade da carta 1:");
    scanf("%ld", &populacaoCarta1);
    printf("Digite a área da cidade da carta 1 (em km²):");
    scanf("%f", &areaCarta1);
    printf("Digite o PIB da cidade da carta 1:");
    scanf("%f", &PIBCarta1);
    printf("Digite o número de pontos turístios da carta 1:");
    scanf("%d", &pontosturisticosCarta1);

    //Código carta 2
    printf("Digite o estado da carta 2 (A-H):\n");
    scanf("%c", &estado);
    printf("Digite o codigo da carta 2 (ex: A01):");
    scanf("%s", &codigo);
    printf("Digite o nome da cidade da carta 2:");
    scanf("%s", &cidade);
    printf("Digite a população da cidade da carta 2:");
    scanf("%ld", &populacaoCarta2);
    printf("Digite a área da cidade da carta 2 (em km²):");
    scanf("%f", &areaCarta2);
    printf("Digite o PIB da cidade da carta 2:");
    scanf("%f", &PIBCarta2);
    printf("Digite o número de pontos turístios da carta 2:");
    scanf("%d", &pontosturisticosCartas2);

       //Exibição carta 1
       
       dencidadepopulacionalCarta1 = populacaoCarta1 / areaCarta1;
       PIBpercaptaCarta1 = PIBCarta1 / populacaoCarta1;


       printf("\nInformações da carta 1:\n");
       printf("Estado: %c\n", estado);
       printf("Código: %s\n", codigo);
       printf("Cidade: %s\n.2ld", cidade);
       printf("Área: %.2f km²\n", areaCarta1);
       printf("PIB: R$:%.2f\n", PIBCarta1);
       printf ("Pontos Turísticos: %d\n", pontosturisticosCarta1);
       printf("Dencidade Populacional: %.2f\n", dencidadepopulacionalCarta1);
       printf("PIB per Capta: %.2ff\n", PIBpercaptaCarta1);

     //Exibição carta 2
    
     dencidadepopulacionalCarta2 = populacaoCarta2 / areaCarta2;
     PIBpercaptaCarta1 = PIBCarta2 / populacaoCarta2;

     printf("\nInformações da carta 2:\n");
     printf("Estado: %c\n", estado);
     printf("Código: %s\n", codigo);
     printf("Cidade: %s\n", cidade);
     printf("População: %.2ld Pessoas\n", populacaoCarta2);
     printf("Área: %fkm²\n", areaCarta2);
     printf("PIB: %.2f\n", PIBCarta2);
     printf ("Pontos Turísticos: %d\n", pontosturisticosCartas2);
     printf("Dencidade Populacional: %.2f \n", dencidadepopulacionalCarta2);
     printf("PIB per Capta: %.2f \n", PIBpercaptaCarta2);

    // Comparação de cartas
    
    resultado = populacaoCarta1 > populacaoCarta2;
    resultado = areaCarta1 > areaCarta2;
    resultado = PIBCarta1 > PIBCarta2;
    resultado = pontosturisticosCarta1 > pontosturisticosCartas2;
    resultado = dencidadepopulacionalCarta1 > dencidadepopulacionalCarta2;
    resultado = PIBpercaptaCarta1 > PIBpercaptaCarta2;
    resultado = superPoderCarta1 > superPoderCarta2;

    printf("População de carta 1 %ld e População de carta 2 %ld Qual é a maior População ?: %d\n", populacaoCarta1, populacaoCarta2, resultado);
    printf(" Area de carta 1 %f e Area de carta 2 %f Qual é a Maior Area ?: %d\n", areaCarta1, areaCarta2, resultado);
    printf(" PIB de carta 1 %f e PIB de carta2 %f Qual o maior PIB ?: %d\n", PIBCarta1, PIBCarta2, resultado);
    printf(" Pontos turisticos de carta 1 %d e Pontos turisticos de carta 2 %d Qual tem mais Pontos Turisticos ?: %d\n", pontosturisticosCarta1, pontosturisticosCartas2, resultado);
    printf(" Dencidade populacional de carta 1 %f e Dencidade populacional de carta 2 %f Qual é a maior Dencidade Populacional ?: %d\n", dencidadepopulacionalCarta1, dencidadepopulacionalCarta2, resultado);
    printf(" PIB per capta de carta 1 %f e PIB per capta de carta 2 %f Qual o maior PIB Per Capta ?: %d\n", PIBpercaptaCarta1, PIBpercaptaCarta2, resultado);
    printf(" Super poder de carta 1 %f e Super poder de carta 2 %f Qual o maior Super Poder ?: %d\n", superPoderCarta1, superPoderCarta2, resultado);

    return 0;
}