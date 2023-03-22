#include <stdio.h>

int main() {
   float matriz[4][4];
   float soma = 0.0;
   
   for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
         printf("Digite o valor da posicao [%d][%d]: ", i, j);
         scanf("%f", &matriz[i][j]);
      }
   }
   
   for (int j = 1; j < 4; j += 2) {
      for (int i = 0; i < 4; i++) {
         soma += matriz[i][j];
      }
   }
   
   printf("A soma dos elementos das colunas impares eh: %f\n", soma);
   
   return 0;
}