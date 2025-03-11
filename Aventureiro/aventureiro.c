#include <stdio.h>

int main(){
      

    char estado;
    char codigo[5]; // A.H., A01
    char cidade[50];
    float populacao;
    float area;
    float PIB;
    int pontosturisticos;
    float dencidadepopulacional = populacao / area;
    float PIBpercapta = PIB / populacao;

    
    //código carta 1
    printf("Digite o estado da carta 1 (A-H): ");
    scanf("%c", &estado);
    printf("Digite o codigo da carta 1 (ex: A01): ");
    scanf("%s", &codigo);
    printf("Digite o nome da cidade da carta 1: ");
    scanf("%s", &cidade);
    printf("Digite a população da cidade da carta 1:");
    scanf("%f", &populacao);
    printf("Digite a área da cidade da carta 1 (em km²): ");
    scanf("%f", &area);
    printf("Digite o PIB da cidade da carta 1: ");
    scanf("%f", &PIB);
    printf("Digite o número de pontos turístios da carta 1: ");
    scanf("%d", &pontosturisticos);

    //Código carta 2
    printf("Digite o estado da carta 2 (A-H):\n" );
    scanf("%c", &estado);
    printf("Digite o codigo da carta 2 (ex: A01): ");
    scanf("%s", &codigo);
    printf("Digite o nome da cidade da carta 2: ");
    scanf("%s", &cidade);
    printf("Digite a população da cidade da carta 2: ");
    scanf("%f", &populacao);
    printf("Digite a área da cidade da carta 2 (em km²): ");
    scanf("%f", &area);
    printf("Digite o PIB da cidade da carta 2: ");
    scanf("%f", &PIB);
    printf("Digite o número de pontos turístios da carta 2: ");
    scanf("%d", &pontosturisticos);

       //Exibição carta 1

       printf("\nInformações da carta 1:\n");
       printf("Estado: %c\n", estado);
       printf("Código: %s\n", codigo);
       printf("Cidade: %s\n", cidade);
       printf("População: %f\n", populacao);
       printf("Área: %fkm²\n", area);
       printf("PIB: %f\n", PIB);
       printf ("Pontos Turísticos: %d\n", pontosturisticos);
       printf("Dencidade Populacional: %.2f\n", dencidadepopulacional);
       printf("PIB per Capta: %.2ff\n", PIBpercapta);

     //Exibição carta 2

     printf("\nInformações da carta 2:\n");
     printf("Estado: %c\n", estado);
     printf("Código: %s\n", codigo);
     printf("Cidade: %s\n", cidade);
     printf("População: %f\n", populacao);
     printf("Área: %fkm²\n", area);
     printf("PIB: %f\n", PIB);
     printf ("Pontos Turísticos: %d\n", pontosturisticos);
     printf("Dencidade Populacional: %.2f\n", dencidadepopulacional);
     printf("PIB per Capta: %.2f\n", PIBpercapta);



    return 0;
}