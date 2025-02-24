#include <stdio.h>

int main() {

// Declarção de variavel que representa a primeira carta do Super Trunfo

    char estado1 [25];
    char codigo1 [25];
    char nome_cidade1;
    int populacao1;
    float area1; 
    float PIB1;
    int pontos_turisticos1;
    
      // Função para ler os dados da primeira carta

      printf("Digite o estado (de A H): \n ");
      scanf("%c", &estado1);
      
      printf("Digite o código da carta(ex: A01, B02):\n");
      scanf("%s", codigo1);
      
      printf("Digite o nome da cidade: \n");
      scanf("%s", &nome_cidade1);

      printf("Digite a populacão: \n");
      scanf("%d", &populacao1);

      printf("Digite a area: \n");
      scanf("%f", &area1);

      printf("Digite o PIB1: \n");
      scanf("%f", &PIB1);

      printf("Digite os pontos turisticos: \n");
      scanf("%d", &pontos_turisticos1);
      
   
}