#include <stdio.h>
// Desafio Super Trunfo - Países
int main()
{
    int populacaoA;
    int areaA;
    int pibA;
    int quantidadePontosTuristicosA;
    int densidadePopulacionalA;
    int pibPerCapitaA;
    int populacaoB;
    int areaB;
    int pibB;
    int quantidadePontosTuristicosB;
    int densidadePopulacionalB;
    int pibPerCapitaB;
    printf("Bem vindo ao Desafio Super Trunfo - Nível Novato\n");
    printf("Por favor, insira as informações da cidade\n");

    printf("Insira a População da cidade A:\n");
    scanf("%d", &populacaoA);
    printf("Insira a População da cidade B:\n");
    scanf("%d", &populacaoB);

    printf("Insira a Área da cidade A:\n");
    scanf("%d", &areaA);
    printf("Insira a Área da cidade B:\n");
    scanf("%d", &areaB);

    printf("Insira o PIB da cidadeA:\n");
    scanf("%d", &pibA);
    printf("Insira o PIB da cidadeB:\n");
    scanf("%d", &pibB);

    printf("Insira a quantidade de pontos turísticos da cidade A:\n");
    scanf("%d", &quantidadePontosTuristicosA);
    printf("Insira a quantidade de pontos turísticos da cidade B:\n");
    scanf("%d", &quantidadePontosTuristicosB);

    densidadePopulacionalA = populacaoA / areaA;
    pibPerCapitaA = pibA / populacaoA;
    densidadePopulacionalB = populacaoB / areaB;
    pibPerCapitaB = pibB / populacaoB;

    int superPoderA = densidadePopulacionalA + areaA + pibA + pibPerCapitaA + quantidadePontosTuristicosA;
    int superPoderB = densidadePopulacionalB + areaB + pibB + pibPerCapitaB + quantidadePontosTuristicosB;

    if (populacaoA > populacaoB)
    {
        printf("A Carta A vence a Carta B com sua população de $d", populacaoA);
    };
    if (populacaoA > populacaoB)
    {
        printf("A Carta B vence a Carta A com sua população de $d", populacaoB);
    };

    if (densidadePopulacionalA < densidadePopulacionalB)
    {
        printf("A Carta A vence a Carta B com sua densidade populacional de %d\n", densidadePopulacionalA);
    }
    else if (densidadePopulacionalB < densidadePopulacionalA)
    {
        printf("A Carta B vence a Carta A com sua densidade populacional de %d\n", densidadePopulacionalB);
    }
    else
    {
        printf("As cartas têm a mesma densidade populacional de %d\n", densidadePopulacionalA);
    }

    if (areaA > areaB)
    {
        printf("A Carta A vence a Carta B com sua área de %d Km²\n", areaA);
    }
    else if (areaB > areaA)
    {
        printf("A Carta B vence a Carta A com sua área de %d Km²\n", areaB);
    }
    else
    {
        printf("As cartas têm a mesma área de %d Km²\n", areaA);
    }

    if (pibA > pibB)
    {
        printf("A Carta A vence a Carta B com seu PIB de R$ %d\n", pibA);
    }
    else if (pibB > pibA)
    {
        printf("A Carta B vence a Carta A com seu PIB de R$ %d\n", pibB);
    }
    else
    {
        printf("As cartas têm o mesmo PIB de R$ %d\n", pibA);
    }

    if (pibPerCapitaA > pibPerCapitaB)
    {
        printf("A Carta A vence a Carta B com seu PIB per capita de R$ %d\n", pibPerCapitaA);
    }
    else if (pibPerCapitaB > pibPerCapitaA)
    {
        printf("A Carta B vence a Carta A com seu PIB per capita de R$ %d\n", pibPerCapitaB);
    }
    else
    {
        printf("As cartas têm o mesmo PIB per capita de R$ %d\n", pibPerCapitaA);
    }

    if (quantidadePontosTuristicosA > quantidadePontosTuristicosB)
    {
        printf("A Carta A vence a Carta B com %d pontos turísticos\n", quantidadePontosTuristicosA);
    }
    else if (quantidadePontosTuristicosB > quantidadePontosTuristicosA)
    {
        printf("A Carta B vence a Carta A com %d pontos turísticos\n", quantidadePontosTuristicosB);
    }
    else
    {
        printf("As cartas têm a mesma quantidade de pontos turísticos: %d\n", quantidadePontosTuristicosA);
    }

    if (superPoderA > superPoderB) {
        printf("A Carta A vence a Carta B pelo Super Poder!\n");
    } else if (superPoderB > superPoderA) {
        printf("A Carta B vence a Carta A pelo Super Poder!\n");
    } else {
        printf("As cartas têm o mesmo Super Poder! Empate!\n");
    }

    return 0;
}
