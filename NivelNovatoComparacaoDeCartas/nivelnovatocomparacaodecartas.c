#include <stdio.h>

int main() {
    
    char estado;
    char codigo[3]; 
    char cidade[50];
    float populacaoCarta1, populacaoCarta2;
    float areaCarta1, areaCarta2;
    float PIBCarta1, PIBCarta2;
    int pontosturisticosCarta1, pontosturisticosCarta2;
    float densidadepopulacionalCarta1, densidadepopulacionalCarta2;
    float PIBpercaptaCarta1, PIBpercaptaCarta2;
    float SuperPoderCarta1, SuperPoderCarta2;


    printf("\n *** PROGRAMA NIVEL NOVATO COMPARAÇÃO DE CARTAS ***\n");
   
    // Entrada de Dados Carta 1

    printf("Digite o estado da carta 1: Ex (A-H):\n");
    scanf(" %c", &estado); 
    printf("Digite o código da carta 1: Ex (A01):\n");
    scanf("%s", codigo);
    printf("Digite a cidade da carta 1:\n");
    scanf("%s", cidade);
    printf("Digite a população de carta 1:\n");
    scanf("%f", &populacaoCarta1);
    printf("Digite a área de carta 1 em Km²:\n");
    scanf("%f", &areaCarta1);
    printf("Digite o PIB de carta 1:\n");
    scanf("%f", &PIBCarta1);
    printf("Digite o número de pontos turísticos de carta 1:\n");
    scanf("%d", &pontosturisticosCarta1);
    
    // Entrada de Dados Carta 2

    printf("Digite o estado da carta 2: Ex (A-H):\n");
    scanf(" %c", &estado);  
    printf("Digite o código da carta 2: Ex (A01):\n");
    scanf("%s", codigo);
    printf("Digite a cidade da carta 2:\n");
    scanf("%s", cidade);
    printf("Digite a população de carta 2:\n");
    scanf("%f", &populacaoCarta2);
    printf("Digite a área de carta 2 em Km²:\n");
    scanf("%f", &areaCarta2);
    printf("Digite o PIB de carta 2:\n");
    scanf("%f", &PIBCarta2);
    printf("Digite o número de pontos turísticos de carta 2:\n");
    scanf("%d", &pontosturisticosCarta2);
    

    //Exibição de Dados Carta 1 
    
  
    densidadepopulacionalCarta1 = populacaoCarta1 / areaCarta1;
    PIBpercaptaCarta1 = PIBCarta1 / populacaoCarta1;
    SuperPoderCarta1 = populacaoCarta1 + areaCarta1 + PIBCarta1 + pontosturisticosCarta1 + densidadepopulacionalCarta1 + PIBpercaptaCarta1;


    printf("\n*** DADOS DA CARTA 1 ***\n");
    printf("Código: %s\n", codigo); 
    printf("Estado: %c\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %.2f\n", populacaoCarta1);
    printf("Área: %.2f\n", areaCarta1);
    printf("PIB: %.2f\n", PIBCarta1);
    printf("Pontos Turisticos: %d\n", pontosturisticosCarta1);
    printf("Densidade Populacional: %.2f\n", densidadepopulacionalCarta1);
    printf("PIB per Capta: %.2f\n", PIBpercaptaCarta1);
    
    
   //Exibição de Dados Carta 2

    densidadepopulacionalCarta2 = populacaoCarta2 / areaCarta2;
    PIBpercaptaCarta2 = PIBCarta2 / populacaoCarta2;
    SuperPoderCarta2 = populacaoCarta2 + areaCarta2 + PIBCarta2 + pontosturisticosCarta2 + densidadepopulacionalCarta2 + PIBpercaptaCarta2;


    printf("\n*** DADOS DA CARTA 2 ***\n");
    printf("Código: %s\n", codigo); 
    printf("Estado: %c\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %.2f\n", populacaoCarta2);
    printf("Área: %.2f\n", areaCarta2);
    printf("PIB: %.2f\n", PIBCarta2);
    printf("Pontos Turisticos: %d\n", pontosturisticosCarta2);
    printf("Densidade Populacional: %.2f\n", densidadepopulacionalCarta2);
    printf("PIB per Capta: %.2f\n", PIBpercaptaCarta2);


   //Exibição de Comparação

   if (populacaoCarta1 > populacaoCarta2){
    printf("A carta 1 tem uma população maior que a carta 2!\n");
   }else{
    printf("A carta 2 tem uma população maior que a carta 1!\n"); 
   }

   if (areaCarta1 > areaCarta2){
    printf("A área de carta 1 é maior que a área de carta 2!\n");
   }else{
    printf("A área da carta 2 é maior que a área de carta 1!\n"); 
   }

   if (PIBCarta1 > PIBCarta2){
    printf("O PIB da carta 1 é maior que o PIB da carta 2!\n");
   }else{
    printf("O PIB da carta 2 é maior que o PIB de carta 1!\n"); 
   }

   if (pontosturisticosCarta1 > pontosturisticosCarta2){
    printf("A carta 1 tem mais pontos turísticos que a carta 2!\n");
   }else{
    printf("A carta 2 tem mais pontos turísticos que a carta 1!\n"); 
   }

   if (densidadepopulacionalCarta1 > densidadepopulacionalCarta2){
    printf("A carta 1 tem uma densidade populacional maior que a carta 2!\n");
   }else{
    printf("A carta 2 tem uma densidade populacional maior que a carta 1!\n"); 
   }

   if (PIBpercaptaCarta1 > PIBpercaptaCarta2){
    printf("A carta 1 tem um PIB per capta maior que a carta 2!\n");
   }else{
    printf("A carta 2 tem um PIB per capta maior que a carta 1!\n"); 
   }
   
   if (SuperPoderCarta1 > SuperPoderCarta2){
    printf("A carta 1 tem um super poder maior que a carta 2!\n");
   }else{
    printf("A carta 2 tem um super poder maior que a carta 1!\n");
    }



    return 0;
}
