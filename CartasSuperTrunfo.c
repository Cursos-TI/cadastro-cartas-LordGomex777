#include <stdio.h>

int main(){
    //variaveis carta 1:

    char estado[20];
    char codigo[4];
    char cidade[20];
    signed long int populacao;
    float area;
    float pib;
    float densidade;
    float pibpercapita;
    int pontosturisticos;
    float SuperPoder1;

    //Variaveis carta 2:

    char estado2[20];
    char codigo2[4];
    char cidade2[20];
    signed long int populacao2;
    float area2;
    float pib2;
    float densidade2;
    float pibpercapita2 ;
    int pontosturisticos2;
    float SuperPoder2;

    //Dados da carta 1:

    printf("cadastro carta: 1\n");

    printf("Digite o estado: \n");
    scanf("%s", estado);

    printf("Digite o codigo da carta: \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade);

    printf("Digite a populacao: \n");
    scanf("%ld", &populacao);

    printf("Informe a area(km2): \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf("%f", &pib);

    printf("Quantidade de pontos turisticos: \n");
    scanf("%d", &pontosturisticos);

    densidade = populacao/area;
    pibpercapita = pib/populacao;
    SuperPoder1 = populacao + area + pib + pontosturisticos + pibpercapita + densidade;

    //Dados da carta 2:

    printf("cadastro carta: 2\n");

    printf("Digite o estado: \n");
    scanf("%s", estado2);

    printf("Digite o codigo da carta: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("Digite a populacao: \n");
    scanf("%ld", &populacao2);

    printf("Informe a area(km2): \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Quantidade de pontos turisticos: \n");
    scanf("%d", &pontosturisticos2);

    densidade2 = populacao2/area2;
    pibpercapita2 = pib2/populacao2;
    SuperPoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + densidade2;

    //Exibicao dos dados da carta 1:
    
    printf("\nCarta 1:\n");

    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %ld\n", populacao);
    printf("Area: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Pontos turisticos: %d\n", pontosturisticos);
    printf("Densidade populacional: %f\n", densidade);
    printf("PIB per capita: %f\n", pibpercapita);
    printf("Super Poder: %.2f\n", SuperPoder1);

    //Exibicao dos dados da carta 2:

    printf("\nCarta 2:\n");

    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %ld\n", populacao2);
    printf("Area: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Pontos turisticos: %d\n", pontosturisticos2);
    printf("Densidade populacional: %f\n", densidade2);
    printf("PIB per capita: %f\n", pibpercapita2);
    printf("Super Poder: %.2f\n", SuperPoder2);

    //Comparando as cartas:

    signed long int resultadopopu, resultadoturis;
    float resultadoarea, resultadopib, resultadodensi, resultadopercap, resultadopoder;


    resultadopopu = populacao > populacao2;
    resultadoarea = area > area2;
    resultadopib = pib > pib2;
    resultadodensi = densidade < densidade2;
    resultadopercap = pibpercapita > pibpercapita2;
    resultadoturis = pontosturisticos > pontosturisticos2;
    resultadopoder = SuperPoder1 > SuperPoder2;

    printf("\nComparacao de cartas:\n");

    printf("Populacao: %ld\n", resultadopopu);
    printf("Area: %f\n", resultadoarea);
    printf("PIB: %f\n", resultadopib);
    printf("Densidade: %f\n", resultadodensi);
    printf("PIB Percapita: %f\n", resultadopercap);
    printf("Pontos turisticos: %ld\n", resultadoturis);
    printf("Super Poder: %f\n", resultadopoder);
    



return 0;

}
