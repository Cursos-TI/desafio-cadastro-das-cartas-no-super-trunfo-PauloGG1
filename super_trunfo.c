#include <stdio.h>

// Desafio Super Trunfo - Países
// Desafio Novato - Cadastro das Cartas 
// Teste PauloGG1

int main() {
   // Variáveis para armazenar os dados das carta
   char codigo[5]; // Ex: A01
   char nome[50];
   int populacao;
   float area;
   float pib;
   int pontosTuristicos;

   //cadastro da primeira carta
   printf("=== Cadastro da Primeira Carta ===\n");
   printf("Digite o código da cidade (ex: B01): ");
   scanf("%s", codigo);
   printf("Digite o nome da cidade: ");
   scanf(" %[^\n]", nome);  // Leitura com espaços
   printf("Digite a população: ");
   scanf("%d", &populacao);
   printf("Digite a área em km²: ");
   scanf("%f", &area);
   printf("Digite o PIB (em bilhões): ");
   scanf("%f", &pib);
   printf("Digite o número de pontos turísticos: ");
   scanf("%d", &pontosTuristicos);

       // Exibição dos dados da primeira carta
    printf("\n=== Dados da Primeira Carta ===\n");
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);

        // Exibição dos dados da primeira carta
    printf("\n=== Dados da Primeira Carta ===\n");
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);

      // Cadastro da segunda carta
    printf("\n=== Cadastro da Segunda Carta ===\n");
    printf("Digite o código da cidade (ex: A01): ");
    scanf("%s", codigo);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome);  // Leitura com espaços
    printf("Digite a população: ");
    scanf("%d", &populacao);
    printf("Digite a área em km²: ");
    scanf("%f", &area);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    















    return 0;
}