#include <stdio.h>

int main() {
    printf("Desafio Cartas Super Trunfo!\n");

    char codigo[20];
    int população;
    double area;
    double PIB;
    int pontos;
    char cidade[50];

    printf("Escreva o código da cidade: \n");
    scanf("%s", codigo);  
    printf("O código da cidade é: %s\n", codigo);  // Removido o '&'

    printf("Digite sua população: \n");
    scanf("%d", &população);  
    printf("A população é: %d\n", população);  

    printf("Digite o tamanho da área: \n");
    scanf("%lf", &area);  
    printf("A área da cidade é: %lf\n", area);  

    printf("Digite o PIB: \n");
    scanf("%lf", &PIB);  
    printf("O PIB da cidade é: %lf\n", PIB);  

    printf("Digite os pontos da cidade: \n");
    scanf("%d", &pontos);  
    printf("Os pontos são: %d\n", pontos); 

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade);  
    printf("O nome da cidade é: %s\n", cidade); 

    return 0;
}