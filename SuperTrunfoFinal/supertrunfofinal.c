#include <stdio.h>

int main() {




    int opcao;
    int atributo01, atributo02;
    int resultado01, resultado02;

    char pais01[10], pais02[10];
    unsigned long populacao01, populacao02;
    double PIB01, PIB02;
    double densidadepopulacional01, densidadepopulacional02;
    double area01, area02;
    int pontosTuristicos01, pontosTuristicos02;

    printf("\nCOMPARAÇÃO ENTRE AS CARTAS\n");

    // Escolher o primeiro atributo
    printf("Escolha o primeiro atributo para comparar:\n");
    printf("1. População\n");
    printf("2. area\n");
    printf("3. PIB\n");
    printf("4. Numero de pontos turisticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. Sair\n");
    printf("Atributo: ");
    scanf("%d", &atributo01);

    switch (atributo01) {
        case 1:
            printf(" %s vs %s\n", pais01, pais02);
            printf("\nAtributo: População\n");
            printf("Primeira Carta: %lu Habitantes\n", populacao01);
            printf("Segunda Carta: %lu Habitantes\n", populacao02);
            resultado01 = (populacao01 > populacao02) ? 1 : 0;
            break;
        case 2:
            printf("%s vs %s\n", pais01, pais02);
            printf("\nAtributo: PIB\n");
            printf("Primeira Carta: %.2f Bilhões de reais\n", PIB01);
            printf("Segunda Carta: %.2f Bilhões de reais\n", PIB02);
            resultado01 = (PIB01 > PIB02) ? 1 : 0;
            break;
        case 3:
            printf("%s vs %s\n", pais01, pais02);
            printf("\nAtributo: Densidade Populacional\n");
            printf("Primeira Carta: %.2f hab./km²\n", densidadepopulacional01);
            printf("Segunda Carta: %.2f hab./km²\n", densidadepopulacional02);
            resultado01 = (densidadepopulacional01 < densidadepopulacional02) ? 1 : 0;
            break;
        case 4:
            printf("%s vs %s\n", pais01, pais02);
            printf("\nAtributo: Área Total\n");
            printf("Primeira Carta: %.2f Km²\n", area01);
            printf("Segunda Carta: %.2f Km²\n", area02);
            resultado01 = (area01 > area02) ? 1 : 0;
            break;
        case 5:
            printf("%s vs %s\n", pais01, pais02);
            printf("\nAtributo: Número de Pontos Turísticos\n");
            printf("Primeira Carta: %d Pontos\n", pontosTuristicos01);
            printf("Segunda Carta: %d Pontos\n", pontosTuristicos02);
            resultado01 = (pontosTuristicos01 > pontosTuristicos02) ? 1 : 0;
            break;
        case 6:
            printf("Saindo...\n");
            return 0;
        default:
            printf("Opção inválida! Tente novamente.\n");
            return 0;
    }

    // Escolher o segundo atributo
    printf("Escolha o segundo atributo para comparar:\n");
    printf("1. População\n");
    printf("2. area\n");
    printf("3. PIB\n");
    printf("4. Numero de pontos turisticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. Sair\n");
    printf("Atributo: ");
    scanf("%d", &atributo02);

    // Garantir que o segundo atributo seja diferente do primeiro
    if (atributo02 == atributo01) {
        printf("Escolha um atributo diferente do anterior.\n");
        return 0;
    }

    switch (atributo02) {
        case 1:
            printf("%s vs %s\n", pais01, pais02);
            printf("\nAtributo: População\n");
            printf("Primeira Carta: %lu Habitantes\n", populacao01);
            printf("Segunda Carta: %lu Habitantes\n", populacao02);
            resultado02 = (populacao01 > populacao02) ? 1 : 0;
            break;
        case 2:
            printf("%s vs %s\n", pais01, pais02);
            printf("\nAtributo: PIB\n");
            printf("Primeira Carta: %.2f Bilhões de reais\n", PIB01);
            printf("Segunda Carta: %.2f Bilhões de reais\n", PIB02);
            resultado02 = (PIB01 > PIB02) ? 1 : 0;
            break;
        case 3:
            printf("%s vs %s\n", pais01, pais02);
            printf("\nAtributo: Densidade Populacional\n");
            printf("Primeira Carta: %.2f hab./km²\n", densidadepopulacional01);
            printf("Segunda Carta: %.2f hab./km²\n", densidadepopulacional02);
            resultado02 = (densidadepopulacional01 < densidadepopulacional02) ? 1 : 0;
            break;
        case 4:
            printf("%s vs %s\n", pais01, pais02);
            printf("\nAtributo: Área Total\n");
            printf("Primeira Carta: %.2f Km²\n", area01);
            printf("Segunda Carta: %.2f Km²\n", area02);
            resultado02 = (area01 > area02) ? 1 : 0;
            break;
        case 5:
            printf("%s vs %s\n", pais01, pais02);
            printf("\nAtributo: Número de Pontos Turísticos\n");
            printf("Primeira Carta: %d Pontos\n", pontosTuristicos01);
            printf("Segunda Carta: %d Pontos\n", pontosTuristicos02);
            resultado02 = (pontosTuristicos01 > pontosTuristicos02) ? 1 : 0;
            break;
        case 6:
            printf("Saindo...\n");
            return 0;
        default:
            printf("Opção inválida! Tente novamente.\n");
            return 0;
    }

    // Comparar os resultados e determinar o vencedor
    if (resultado01 && resultado02) {
        printf("Vencedor: %s\n", pais01);
    } else if (resultado01 && !resultado02) {
        printf("Vencedor: %s\n", pais02);
    } else if (!resultado01 && resultado02) {
        printf("Vencedor: %s\n", pais01);
    } else {
        printf("Empate!\n");
    }
    return 0;
}