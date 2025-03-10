#include <stdio.h>

int main(){
  
    printf("\nDesafio Super Trunfo\n");
    
    char estado;
    char codigo[5]; // A.H., A01
    char cidade[50];
    int populacao;
    float area;
    float PIB;
    int pontosturisticos;

    //código carta 1
    printf("Digite o estado da carta 1 (A-H): ");
    scanf("%s", &estado);
    printf("Digite o codigo da carta 1 (ex: A01): ");
    scanf("%s", &codigo);
    printf("Digite o nome da cidade da carta 1: ");
    scanf("%s", &cidade);
    printf("Digite a população da cidade da carta 1:");
    scanf("%d", &populacao);
    printf("Digite a área da cidade da carta 1 (em km²): ");
    scanf("%f", &area);
    printf("Digite o PIB da cidade da carta 1: ");
    scanf("%f", &PIB);
    printf("Digite o número de pontos turístios da carta 1: ");
    scanf("%d", &pontosturisticos);

    //Código carta 2
    printf("Digite o estado da carta 2 (A-H): ");
    scanf("%s", &estado);
    printf("Digite o codigo da carta 2 (ex: A01): ");
    scanf("%s", &codigo);
    printf("Digite o nome da cidade da carta 2: ");
    scanf("%s", &cidade);
    printf("Digite a população da cidade da carta 2 (em Mil): ");
    scanf("%d", &populacao);
    printf("Digite a área da cidade da carta 2 (em km²): ");
    scanf("%f", &area);
    printf("Digite o PIB da cidade da carta 2 (em Milões de reais): ");
    scanf("%f", &PIB);
    printf("Digite o número de pontos turístios da carta 2: ");
    scanf("%d", &pontosturisticos);

       //Exibição carta 1

       printf("\nInformações da carta 1:\n");
       printf("Estado: %s\n", estado);
       printf("Código: %s\n", codigo);
       printf("Cidade: %s\n", cidade);
       printf("População: %d\n", populacao);
       printf("Área: %fkm²\n", area);
       printf("PIB: %f\n", PIB);
       printf ("Pontos Turísticos: %d\n", pontosturisticos);

     //Exibição carta 2

     printf("\nInformações da carta 2:\n");
     printf("Estado: %s\n", estado);
     printf("Código: %s\n", codigo);
     printf("Cidade: %s\n", cidade);
     printf("População: %d\n", populacao);
     printf("Área: %fkm²\n", area);
     printf("PIB: %f\n", PIB);
     printf ("Pontos Turísticos: %d\n", pontosturisticos);



    return 0;

}
