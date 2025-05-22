#include <stdio.h>

int main() {
  //primeira carta 
  char estado1[5];
  char codigo1[15];
  char nome1[20];
  float populacao1;
  float area1;
  float PIB1;
  int numeropontoturisticos1; 

  printf("primeria carta\n");

  printf("insira o estado:\n");
  scanf("%s", &estado1);
  printf("estado:%s\n", estado1);

  printf("insira o codigo da carta:\n");
  scanf("%s",&codigo1);
  printf("código:%s\n", codigo1);

  printf("insira o nome da cidade:\n ");
  scanf("%s",&nome1);
  printf("nome:%s\n",nome1);

  printf("insira numero da poulação:\n");
  scanf("%f", &populacao1);
  printf("populaçao:%f habitante\n",populacao1);

  printf("insira a área total:\n");
  scanf("%f", &area1);
  printf("área total:% 2fKm²\n", area1);

  printf("insira o PIB da cidade:\n");
  scanf("%f", &PIB1);
  printf("PIB:%.2fbilhões de reais\n",PIB1);
 
  printf("numero de ponto turisticos:\n");
  scanf("%d",&numeropontoturisticos1);
  printf("são %d pontos turisticos:\n",numeropontoturisticos1);

  //segunda carta 

  char estado2[5];
  char codigo2[15];
  char nome2[20];
  float populacao2;
  float area2;
  float PIB2;
  int numerodepontoturistico2;

  printf("segunda carta\n");

  printf("insira o estado:\n");
  scanf("%s",&estado2);
  printf("estado:%s\n",estado2);

  printf("insira o código da cidade:\n");
  scanf("%s",&codigo2);
  printf("código:%s\n", codigo2);

  printf("insira o nome da cidade:\n");
  scanf("%s",&nome2);
  printf("nome:%s\n", nome2);

  printf("insira o numero da populão:\n");
  scanf("%f", &populacao2);
  printf("população:%f habitante\n", populacao2);

  printf("insira a área total:\n");
  scanf("%f", &area2);
  printf("área total %.2fKm²\n",area2);

  printf("insira o PIB da cidade:\n");
  scanf("%f", &PIB2);
  printf("PIB:%.2f bilhões de reais:\n", PIB2);

  printf("numero de ponto turisticos:\n");
  scanf("%d",&numerodepontoturistico2);
  printf("são %d ponto turisticos:\n", numerodepontoturistico2);

// Comparação - PIB per capita
    printf("\nCOMPARAÇÃO DE CARTAS (Atributo: PIB per capita)\n");
    printf("Carta 1 - %s (%s): R$ %.6f por habitante\n", nome1, estado1,PIB1);
    printf("Carta 2 - %s (%s): R$ %.6f por habitante\n", nome2, estado2, PIB2);

    if (PIB1 > PIB2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
    }

    return 0;
}