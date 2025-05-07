#include <stdio.h>

// Desafio Super Trunfo -Desafio da logica - comparaçao de cartas
// Desafio Novato - comparaçao de cartas
// Teste PauloGG1

int main() {
   // Variáveis para armazenar os dados da carta um
   char estado1[] = "Amazonas";
   char codigo1[] = "A01";
   char nomeCidade1[] = "Manaus";
   int populacao1 = 1860289;  
   float area1 = 1570745.7;   
   float pib1 = 124.5;        
   int pontosTuristicos1 = 7;

   // Variáveis para armazenar os dados da carta dois
   char estado2[] = "Bahia";
   char codigo2[] = "B01";
   char nomeCidade2[] = "Salvador";
   int populacao2 = 2886698;
   float area2 = 1553.0;     
   float pib2 = 96.2;        
   int pontosTuristicos2 = 12;

   // Cálculo da Densidade Populacional e do PIB per capita
   float densidade1 = populacao1 / area1;
   float pibPerCapita1 = pib1 * 1000000000 / populacao1;

   float densidade2 = populacao2 / area2;
   float pibPerCapita2 = pib2 * 1000000000 / populacao2;

   // exibiçao da carta um 
   printf("=== Carta 1 ===\n");
   printf("Estado: %s\n", estado1);
   printf("Código: %s\n", codigo1);
   printf("Cidade: %s\n", nomeCidade1);
   printf("População: %d\n", populacao1);
   printf("Área: %.2f km²\n", area1);
   printf("PIB: %.2f bilhões\n", pib1);
   printf("Pontos Turísticos: %d\n", pontosTuristicos1);
   printf("Densidade Populacional: %.6f hab/km²\n", densidade1);
   printf("PIB per capita: R$ %.2f\n", pibPerCapita1);

   // exibiçao da carta dois
   printf("\n=== Carta 2 ===\n");
   printf("Estado: %s\n", estado2);
   printf("Código: %s\n", codigo2);
   printf("Cidade: %s\n", nomeCidade2);
   printf("População: %d\n", populacao2);
   printf("Área: %.2f km²\n", area2);
   printf("PIB: %.2f bilhões\n", pib2);
   printf("Pontos Turísticos: %d\n", pontosTuristicos2);
   printf("Densidade Populacional: %.6f hab/km²\n", densidade2);
   printf("PIB per capita: R$ %.2f\n", pibPerCapita2);

   // Comparaçao das cartas
   printf("\n=== Comparação de Cartas (Atributo: PIB) ===\n");

   if (pib1 > pib2) {
   printf("Carta 1 - %s (%s): %.2f bilhões\n", nomeCidade1, estado1, pib1);
   printf("Carta 2 - %s (%s): %.2f bilhões\n", nomeCidade2, estado2, pib2);
   printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
   } else if (pib2 > pib1) {
   printf("Carta 1 - %s (%s): %.2f bilhões\n", nomeCidade1, estado1, pib1);
   printf("Carta 2 - %s (%s): %.2f bilhões\n", nomeCidade2, estado2, pib2);
   printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
   } else {
   printf("Empate! Ambas as cartas possuem o mesmo PIB.\n");
   }

   return 0;
}

