#include <stdio.h>

int main(){

    /*Definido as variáveis e tipos de dados*/
    char estado1[50], codigo1[50], cidade1[50], estado2[50], codigo2[50], cidade2[50];
    int habitantes1, pontos1, habitantes2, pontos2;
    float area1, PIB1, area2, PIB2;


/*Carta 1:*/
    printf("Digite os dados da Carta 1.\n");
/*Estado: uma letra de A a H, tipo char*/
    printf("Digite a letra para Estado (Escolha uma letra de A a H): \n");
    scanf("%s", &estado1);
/*Código da Carta, a letra do estdo seguinda de um número, um array ou string, char[]*/
    printf("Digite o codigo da cidade (Escolha um numero de 01 a 04): \n");
    scanf("%s", &codigo1);
/*Nome da cidade, tipo char[]*/
    printf("Digite o nomne da cidade: \n");
    scanf("%s", &cidade1);
/*População, número de habitantes, tipo int*/
    printf("Digite o numero de habitantes da cidade: \n");
    scanf("%d", &habitantes1);
/*Área( em km2), tipo float*/
    printf("Digite a area da cidade: \n");
    scanf("%f", &area1);
/*PIB, tipo float*/
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB1);
/*Número de pontos turísticos, tipo int*/
    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos1);

    
    
/*Apresentação na tela das informações sobre a Carta 1*/
    printf("Carta 01 \n");
    printf("Estado: %s \n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s \n", cidade1);
    printf("Populacao: %d \n", habitantes1);
    printf("Area: %0.2f\n", area1);
    printf("PIB: %0.2f \n", PIB1);
    printf("Numero de pontos turisticos: %d \n", pontos1);
    printf("A densidade populacional eh: %0.2f \n", habitantes1 / area1);
    printf("O PIB per capita eh: %0.2f \n", PIB1 / habitantes1);

    /*Carta 2:*/
    printf("Digite os dados da Carta 2.\n");
/*Estado: uma letra de A a H, tipo char*/
    printf("Digite a letra para Estado (Escolha uma letra de A a H): \n");
    scanf("%s", &estado2);
/*Código da Carta, a letra do estdo seguinda de um número, um array ou string, char[]*/
    printf("Digite o codigo da cidade (Escolha um numero de 01 a 04): \n");
    scanf("%s", &codigo2);
/*Nome da cidade, tipo char[]*/
    printf("Digite o nomne da cidade: \n");
    scanf("%s", &cidade2);
/*População, número de habitantes, tipo int*/
    printf("Digite o numero de habitantes da cidade: \n");
    scanf("%d", &habitantes2);
/*Área( em km2), tipo float*/
    printf("Digite a area da cidade: \n");
    scanf("%f", &area2);
/*PIB, tipo float*/
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB2);
/*Número de pontos turísticos, tipo int*/
    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos2);
 /*Cálculo da densidade populacinal e PIB per capita*/
  
/*Apresentação na tela das informações sobre a Carta 2*/
    printf("Carta 02 \n");
    printf("Estado: %s \n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("Populacao: %d \n", habitantes2);
    printf("Area: %0.2f\n", area2);
    printf("PIB: %0.2f \n", PIB2);
    printf("Numero de pontos turisticos: %d \n", pontos2); 
    printf("A densidade populacional eh: %0.2f \n", habitantes2 / area2);
    printf("O PIB per capita eh: %0.2f \n", PIB2 / habitantes2);

/*Comparaçãpo das cartas*/
    if ( PIB1 > PIB2){
        printf("Carta1 (%s) venceu.\n", cidade1); /*Exibe o resultado se for a vencedora*/
        printf("PIB da carta vencedora: %0.0f\n", PIB1);
    }
    else{
        printf("Carta2 (%s) venceu.\n", cidade2); /*Exibe o resultado se for a vencedora*/
        printf("PIB da carta vencedora: %0.0f\n", PIB2);
    }
    
    return 0;

}
