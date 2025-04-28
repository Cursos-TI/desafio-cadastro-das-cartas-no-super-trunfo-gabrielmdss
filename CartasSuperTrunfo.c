#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int populacao;
    int area;
    int pib;
    int pontosTuristicos;
} Carta;

void cadastrarCarta(Carta *carta) {
    printf("Digite o nome do país: ");
    scanf(" %[^\n]", carta->nome);

    printf("Digite a população: ");
    scanf("%d", &carta->populacao);

    printf("Digite a área em km²: ");
    scanf("%d", &carta->area);

    printf("Digite o PIB em milhões: ");
    scanf("%d", &carta->pib);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &carta->pontosTuristicos);
}

void calcularPropriedades(Carta *carta) {
    float densidadePopulacional = (float)carta->populacao / carta->area;
    float pibPerCapita = (float)carta->pib / carta->populacao;

    printf("\nDensidade Populacional: %.2f\n", densidadePopulacional);
    printf("PIB per Capita: %.2f\n", pibPerCapita);
}

void exibirCarta(Carta carta) {
    printf("\nNome: %s\n", carta.nome);
    printf("População: %d\n", carta.populacao);
    printf("Área: %d km²\n", carta.area);
    printf("PIB: %d milhões\n", carta.pib);
    printf("Pontos Turísticos: %d\n", carta.pontosTuristicos);
}

void compararCartas(Carta cartaA, Carta cartaB) {
    int escolha1, escolha2;

    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n");
    scanf("%d", &escolha1);

    do {
        printf("\nEscolha o segundo atributo para comparar (diferente do primeiro):\n");
        printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n");
        scanf("%d", &escolha2);
    } while (escolha2 == escolha1);

    int valorA1, valorA2, valorB1, valorB2;

    switch (escolha1) {
        case 1: valorA1 = cartaA.populacao; valorB1 = cartaB.populacao; break;
        case 2: valorA1 = cartaA.area; valorB1 = cartaB.area; break;
        case 3: valorA1 = cartaA.pib; valorB1 = cartaB.pib; break;
        case 4: valorA1 = cartaA.pontosTuristicos; valorB1 = cartaB.pontosTuristicos; break;
    }

    switch (escolha2) {
        case 1: valorA2 = cartaA.populacao; valorB2 = cartaB.populacao; break;
        case 2: valorA2 = cartaA.area; valorB2 = cartaB.area; break;
        case 3: valorA2 = cartaA.pib; valorB2 = cartaB.pib; break;
        case 4: valorA2 = cartaA.pontosTuristicos; valorB2 = cartaB.pontosTuristicos; break;
    }

    int somaA = valorA1 + valorA2;
    int somaB = valorB1 + valorB2;

    printf("\nResultado da Comparação:\n");
    printf("%s: %d + %d = %d\n", cartaA.nome, valorA1, valorA2, somaA);
    printf("%s: %d + %d = %d\n", cartaB.nome, valorB1, valorB2, somaB);

    if (somaA > somaB) {
        printf("\nVencedor: %s!\n", cartaA.nome);
    } else if (somaB > somaA) {
        printf("\nVencedor: %s!\n", cartaB.nome);
    } else {
        printf("\nEmpate!\n");
    }
}

int main() {
    Carta cartaA, cartaB;

    printf("Cadastro da Carta A:\n");
    cadastrarCarta(&cartaA);
    calcularPropriedades(&cartaA);
    exibirCarta(cartaA);

    printf("\nCadastro da Carta B:\n");
    cadastrarCarta(&cartaB);
    calcularPropriedades(&cartaB);
    exibirCarta(cartaB);

    printf("\nBem-vindo ao Super Trunfo de Países!\n");
    compararCartas(cartaA, cartaB);

    return 0;
}
