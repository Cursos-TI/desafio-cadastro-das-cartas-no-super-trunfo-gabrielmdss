#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    int populacao;
    int area;
    int pib;
    int quantidadePontosTuristicos;

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

    printf("A População da Cidade é de %d\n", populacao);
    printf("A Área da Cidade é de %d\n", area);
    printf("O PIB da Cidade é de %d\n", pib);
    printf("A quantidade de pontos turísticos da cidade é de %d\n", quantidadePontosTuristicos);
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
