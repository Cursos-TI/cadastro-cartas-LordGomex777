#include <stdio.h>

int main(){
    //variaveis carta 1:

    char estado[20];
    char codigo[4];
    char cidade[20];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;

    //Variaveis carta 2:

    char estado2[20];
    char codigo2[4];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    //Dados da carta 1:

    printf("cadastro carta: 1\n");
    printf("Digite o estado: \n");
    scanf("%s", estado);
    printf("Digite o codigo da carta: \n");
    scanf("%s", codigo);
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade);
    printf("Digite a populacao: \n");
    scanf("%d", &populacao);
    printf("Informe a area em Km2: \n");
    scanf("%f", &area);
    printf("PIB: \n");
    scanf("%f", &pib);
    printf("Quantidade de pontos turisticos: \n");
    scanf("%d", &pontosturisticos);

    //Dados da carta 2:

    printf("cadastro carta: 2\n");
    printf("Digite o estado: \n");
    scanf("%s", estado2);
    printf("Digite o codigo da carta: \n");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);
    printf("Digite a populacao: \n");
    scanf("%d", &populacao2);
    printf("Informe a area em Km2: \n");
    scanf("%f", &area2);
    printf("PIB: \n");
    scanf("%f", &pib2);
    printf("Quantidade de pontos turisticos: \n");
    scanf("%d", &pontosturisticos2);

    //Exibicao dos dados da carta 1:
    
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Pontos turisticos: %d\n", pontosturisticos);

    //Exibicao dos dados da carta 2:

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Pontos turisticos: %d\n", pontosturisticos2);

return 0;

}
