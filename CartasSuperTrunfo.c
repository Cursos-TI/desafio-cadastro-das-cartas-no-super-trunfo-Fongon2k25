#include <stdio.h>

int main (){

    char estado;
    char codigo[50];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int turisticos;


    printf ("Digite o Estado: \n");
    scanf ("%s", &estado);

    printf("Digite o código da carta: \n");
    scanf ("%s", &codigo);

    printf("Digite nome da cidade: \n");
    scanf("%s", &cidade);

    printf("Digite o número da população: \n");
    scanf("%d", &populacao);

    printf ("Digite a Área em km²: \n");
    scanf ("%f", &area);

    printf("Digite o PIB: \n");
    scanf ("%f", &pib);

    printf ("Digite o Número de pontos turisticos: \n");
    scanf ("%d", &turisticos);

    printf("Carta 1\n");
    printf("O estado é: %s\n", &estado);
    printf("O codigo da carta é: %s\n", &codigo);
    printf("A cidade é: %s\n", &cidade);
    printf("Numero da população é: %d\n", populacao);
    printf("A área em km² é: %.2f km²\n", area);
    printf("O PIB é: %.2f bilhões de reais\n", pib);
    printf("Quantidade de pontos turísticos é: %d\n", turisticos);



    char estado02;
    char codigo02[50];
    char cidade02[50];
    int populacao02;
    float area02;
    float pib02;
    int turisticos02;


    printf ("Digite o Estado: \n");
    scanf ("%s", &estado02);

    printf("Digite o código da carta: \n");
    scanf ("%s", &codigo02);

    printf("Digite nome da cidade: \n");
    scanf("%s", &cidade02);

    printf("Digite o número da população: \n");
    scanf("%d", &populacao02);

    printf ("Digite a Área em km²: \n");
    scanf ("%f", &area02);

    printf("Digite o PIB: \n");
    scanf ("%f", &pib02);

    printf ("Digite o Número de pontos turísticos: \n");
    scanf ("%d", &turisticos02);

    printf("Carta 2\n");
    printf("O estado é: %s\n", &estado02);
    printf("O codigo da carta é: %s\n", &codigo02);
    printf("A cidade é: %s\n", &cidade02);
    printf("Numero da população é: %d\n", populacao02);
    printf("A área em km² é: %.2f km²\n", area02);
    printf("O PIB é: %.2f bilhões de reais\n", pib02);
    printf("Quantidade de pontos turísticos é: %d\n", turisticos02);


    return 0;














}