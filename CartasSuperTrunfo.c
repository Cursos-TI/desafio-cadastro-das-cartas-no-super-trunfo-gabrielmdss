#include <stdio.h>
// Desafio Super Trunfo - Países
int main() {
    int populacao;
    int area;
    int pib;
    int quantidadePontosTuristicos;
    int densidadePopulacional;
    int pibPerCapita;
    printf("Bem vindo ao Desafio Super Trunfo - Nível Novato\n");
    printf("Por favor, insira as informações da cidade\n");
    
    printf("Insira a População da cidade:\n");
    scanf("%d", &populacao);
    
    printf("Insira a Área da cidade:\n");
    scanf("%d", &area);

    printf("Insira o PIB da cidade:\n");
    scanf("%d", &pib);
    
    printf("Insira a quantidade de pontos turísticos da cidade:\n");
    scanf("%d", &quantidadePontosTuristicos);

    densidadePopulacional = populacao / area;
    pibPerCapita = pib / populacao;

    printf("A População da Cidade é de %d\n", populacao);
    printf("A Densidade Populacional de %d\n", densidadePopulacional);
    printf("A Área da Cidade é de %d Km²\n", area);
    printf("O PIB da Cidade é de R$ %d\n", pib);
    printf("O PIB per Capita é de R$ %d\n", pibPerCapita);
    printf("A quantidade de pontos turísticos da cidade é de %d\n", quantidadePontosTuristicos);

    return 0;
}
