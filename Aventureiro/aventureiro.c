#include <stdio.h>

int main(){
      

    char estadoCarta1, estadoCarta2;
    char codigo[5]; 
    char cidade[50];
    float populacaoCarta1, populacaoCarta2;
    float areaCarta1, areaCarta2;
    float PIBCarta1, PIBCarta2;
    int pontosturisticosCarta1, pontosturisticosCarta2;
    float dencidadepopulacionalCarta1, dencidadepopulacionalCarta2;
    float PIBpercaptaCarta1, PIBpercaptaCarta2;

    printf("\n*** Programa Super Trunfo Nível Aventureiro ***\n");


    //código carta 1
    printf("Digite o estado da carta 1 (A-H):");
    scanf("%c", &estadoCarta1);
    printf("Digite o codigo da carta 1 (ex: A01):");
    scanf("%s", &codigo);
    printf("Digite o nome da cidade da carta 1:");
    scanf("%s", &cidade);
    printf("Digite a população da cidade da carta 1:");
    scanf("%f", &populacaoCarta1);
    printf("Digite a área da cidade da carta 1 (em km²):");
    scanf("%f", &areaCarta1);
    printf("Digite o PIB da cidade da carta 1:");
    scanf("%f", &PIBCarta1);
    printf("Digite o número de pontos turístios da carta 1:\n");
    scanf("%d", &pontosturisticosCarta1);

    //Código carta 2
    printf("Digite o estado da carta 2 (A-H):");
    scanf("%c", &estadoCarta2);
    printf("Digite o codigo da carta 2 (ex: A01):");
    scanf("%s", &codigo);
    printf("Digite o nome da cidade da carta 2:");
    scanf("%s", &cidade);
    printf("Digite a população da cidade da carta 2:");
    scanf("%f", &populacaoCarta2);
    printf("Digite a área da cidade da carta 2 (em km²):");
    scanf("%f", &areaCarta2);
    printf("Digite o PIB da cidade da carta 2:");
    scanf("%f", &PIBCarta2);
    printf("Digite o número de pontos turístios da carta 2:");
    scanf("%d", &pontosturisticosCarta2);

       //Exibição carta 1
      
       dencidadepopulacionalCarta1 = populacaoCarta1 / areaCarta1;
       PIBpercaptaCarta1 = PIBCarta1 / populacaoCarta1;

       printf("\nInformações da carta 1:\n\n");
       printf("Estado: %c\n", estadoCarta1);
       printf("Código: %s\n", codigo);
       printf("Cidade: %s\n", cidade);
       printf("População: %.2f Pessoas\n", populacaoCarta1);
       printf("Área: %.2f km²\n", areaCarta1);
       printf("PIB: R$:%.2f\n", PIBCarta1);
       printf ("Pontos Turísticos: %d\n", pontosturisticosCarta1);
       printf("Dencidade Populacional: %.2f Pessoas\n", dencidadepopulacionalCarta1);
       printf("PIB per Capta: R$:%.2f\n", PIBpercaptaCarta1);

     //Exibição carta 2
     
     dencidadepopulacionalCarta2 = populacaoCarta2 / areaCarta2;
     PIBpercaptaCarta1 = PIBCarta2 / populacaoCarta2;

     printf("\nInformações da carta 2:\n\n");
     printf("Estado: %c\n", estadoCarta2);
     printf("Código: %s\n", codigo);
     printf("Cidade: %s\n", cidade);
     printf("População: (%.2f Pessoas)\n", populacaoCarta2);
     printf("Área: %.2fkm²\n", areaCarta2);
     printf("PIB: R$:%.2f\n", PIBCarta2);
     printf ("Pontos Turísticos: %d\n", pontosturisticosCarta2);
     printf("Dencidade Populacional: %.2f Pessoas\n", dencidadepopulacionalCarta2);
     printf("PIB per Capta: R$:%.2f\n", PIBpercaptaCarta2);



    return 0;
}