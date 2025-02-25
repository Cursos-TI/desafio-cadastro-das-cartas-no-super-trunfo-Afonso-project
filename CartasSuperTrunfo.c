#include <stdio.h>

int main() {
    printf("Desafio Cartas Super Trunfo!\n");


    char estado[30];
    char estado2[30];
    char codigo[20];
    char codigo2[20];
    int populacao;
    int populacao2;
    float area;
    float area2;
    float PIB;
    float PIB2;
    int pontos;
    int pontos2;
    char cidade[50];
    char cidade2[50];

    printf("[Carta 1] Digite o código da cidade: \n");
    scanf("%s",codigo);  
    printf("O código da cidade é: %s\n",codigo); 

    printf("[Carta 1] Digite sua população: \n");
    scanf("%d", &populacao);  
    printf("A população é: %d\n",populacao);  

    printf("[Carta 1] Digite para saber o tamanho da área: \n");
    scanf("%f", &area);  
    printf("A área da cidade é: %f\n", area);  

    printf("[Carta 1] Digite o PIB: \n");
    scanf("%f",&PIB);  
    printf("O PIB da cidade é: %f\n", PIB);  

    printf("[Carta 1] Digite os pontos da cidade: \n");
    scanf("%d", &pontos);  
    printf("Os pontos são: %d\n",pontos); 

    printf("[Carta 1] Digite o nome da cidade: \n");
    scanf("%s", cidade);  
    printf("O nome da cidade é: %s\n",cidade); 

    printf("[Carta 2] Digite o código da cidade: \n");
    scanf("%s",codigo2);  
    printf("O código da cidade é: %s\n",codigo2);

    printf("[Carta 2] Digite sua população: \n");
    scanf("%d", &populacao2);  
    printf("A população é: %d\n",populacao2);

    printf("[Carta 2] Digite para saber o tamanho da área: \n");
    scanf("%f", &area2);  
    printf("A área da cidade é: %f\n", area2);

    printf("[Carta 2] Digite o PIB: \n");
    scanf("%f",&PIB2);  
    printf("O PIB da cidade é: %f\n", PIB2);  

    printf("[Carta 2] Digite os pontos da cidade: \n");
    scanf("%d", &pontos2);  
    printf("Os pontos são: %d\n",pontos2); 

    printf("[Carta 2] Digite o nome da cidade: \n");
    scanf("%s", cidade2);  
    printf("O nome da cidade é: %s\n",cidade2); 


    return 0;
}
