#include <stdio.h>

// Desafio Super Trunfo - Países
// Desafio Novato - Cadastro das Cartas 
// Teste PauloGG1

int main() {
   // Variáveis para armazenar os dados da carta um
   char codigo1[5]; // Ex: A01
   char nome1[50];
   int populacao1;
   float area1;
   float pib1;
   int pontosTuristicos1;

   // Variáveis para armazenar os dados da carta dois
   char codigo2[5];
   char nome2[50];
   int populacao2;
   float area2;
   float pib2;
   int pontosTuristicos2;

   // Cadastro da primeira carta
   printf("=== Cadastro da Primeira Carta ===\n");
   printf("Digite o código da cidade (ex: B01): ");
   scanf("%s", codigo1);
   printf("Digite o nome da cidade: ");
   scanf(" %[^\n]", nome1);  // Leitura com espaços
   printf("Digite a população: ");
   scanf("%d", &populacao1);
   printf("Digite a área em km²: ");
   scanf("%f", &area1);
   printf("Digite o PIB (em bilhões): ");
   scanf("%f", &pib1);
   printf("Digite o número de pontos turísticos: ");
   scanf("%d", &pontosTuristicos1);

   // Exibição dos dados da primeira carta
   printf("\n=== Dados da Primeira Carta ===\n");
   printf("Código: %s\n", codigo1);
   printf("Cidade: %s\n", nome1);
   printf("População: %d\n", populacao1);
   printf("Área: %.2f km²\n", area1);
   printf("PIB: %.2f bilhões\n", pib1);
   printf("Pontos Turísticos: %d\n", pontosTuristicos1);

   // Cadastro da segunda carta
   printf("\n=== Cadastro da Segunda Carta ===\n");
   printf("Digite o código da cidade (ex: A01): ");
   scanf("%s", codigo2);
   printf("Digite o nome da cidade: ");
   scanf(" %[^\n]", nome2);  // Leitura com espaços
   printf("Digite a população: ");
   scanf("%d", &populacao2);
   printf("Digite a área em km²: ");
   scanf("%f", &area2);
   printf("Digite o PIB (em bilhões): ");
   scanf("%f", &pib2);
   printf("Digite o número de pontos turísticos: ");
   scanf("%d", &pontosTuristicos2);

   // Exibição dos dados da segunda carta
   printf("\n=== Dados da Segunda Carta ===\n");
   printf("Código: %s\n", codigo2);
   printf("Cidade: %s\n", nome2);
   printf("População: %d\n", populacao2);
   printf("Área: %.2f km²\n", area2);
   printf("PIB: %.2f bilhões\n", pib2);
   printf("Pontos Turísticos: %d\n", pontosTuristicos2);

   return 0;
}