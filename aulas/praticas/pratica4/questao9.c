/*
  9. Faça um programa em C que converta uma idade expressa em anos, meses e dias para um valor em dias. Considere um ano com 365 dias e um mês com 30 dias.
*/
#include <stdio.h>
#include <math.h>
int main() {

  int anos;
  int meses;
  int dias;
  int idade_em_dias;
  
printf("informe quantos anos vc tem: ");
  scanf("%i", &anos);

  printf("informe quantos meses vc tem: ");
   scanf("%i", &meses);

  printf("informe quantos dias vc tem: ");
   scanf("%i", &dias);

 idade_em_dias = (anos * 365) + (meses * 30) + dias;
  
  printf("sua idade em dias eh: %i\n", idade_em_dias);
  








  return 0;
}