#include <stdio.h>

int main(){
  
    printf("\nDesafio Super Trunfo\n");
    
    char estadoCarta1, estadoCarta2;
    char codigo[5]; 
    char cidade[50];
    int populacaoCarta1, populacaoCarta2;
    float areaCarta1, areaCarta2;
    float PIBCarta1, PIBCarta2;
    int pontosturisticosCarta1, pontosturisticosCarta2;

    //código carta 1
    printf("Digite o estado da carta 1 (A-H): ");
    scanf("%c", &estadoCarta1);
    printf("Digite o codigo da carta 1 (ex: A01): ");
    scanf("%s", codigo);
    printf("Digite o nome da cidade da carta 1: ");
    scanf("%s", cidade);
    printf("Digite a população da cidade da carta 1:");
    scanf("%d", &populacaoCarta1);
    printf("Digite a área da cidade da carta 1 (em km²): ");
    scanf("%f", &areaCarta1);
    printf("Digite o PIB da cidade da carta 1: ");
    scanf("%f", &PIBCarta1);
    printf("Digite o número de pontos turístios da carta 1: ");
    scanf("%d", &pontosturisticosCarta1);

    //Código carta 2
    printf("Digite o estado da carta 2 (A-H): ");
    scanf("%s", &estadoCarta2);
    printf("Digite o codigo da carta 2 (ex: A01): ");
    scanf("%s", codigo);
    printf("Digite o nome da cidade da carta 2: ");
    scanf("%s", cidade);
    printf("Digite a população da cidade da carta 2 (em Mil): ");
    scanf("%d", &populacaoCarta2);
    printf("Digite a área da cidade da carta 2 (em km²): ");
    scanf("%f", &areaCarta2);
    printf("Digite o PIB da cidade da carta 2 (em Milões de reais): ");
    scanf("%f", &PIBCarta2);
    printf("Digite o número de pontos turístios da carta 2: ");
    scanf("%d", &pontosturisticosCarta2);

       //Exibição carta 1

       printf("\nInformações da carta 1:\n");
       printf("Estado: %c\n", estadoCarta1);
       printf("Código: %s\n", codigo);
       printf("Cidade: %s\n", cidade);
       printf("População: %d\n Pessoas", populacaoCarta1);
       printf("Área: %fkm²\n", areaCarta1);
       printf("PIB: R$:%f\n", PIBCarta1);
       printf ("Pontos Turísticos: %d\n", pontosturisticosCarta1);

     //Exibição carta 2

     printf("\nInformações da carta 2:\n");
     printf("Estado: %c\n", estadoCarta2);
     printf("Código: %s\n", codigo);
     printf("Cidade: %s\n", cidade);
     printf("População: %d Pessoas\n", populacaoCarta2);
     printf("Área: %fkm²\n", areaCarta2);
     printf("PIB: R$:%f\n", PIBCarta2);
     printf ("Pontos Turísticos: %d\n", pontosturisticosCarta2);



    return 0;

}
