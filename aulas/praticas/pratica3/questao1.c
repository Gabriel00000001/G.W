/*
1. Faça um programa em C que calcule a média final a partir da fórmula (0,4 x A1) + (0,6 x A2). Considere A1 e A2 números reais entre 0 a 10.
*/
#include <stdio.h>
int main() {

float A1 = 0.0;
float A2 = 0.0;
float media = 0.0;
  
  printf( "diga o valor de A1: ");
scanf("%f", &A1);

  printf( "diga o valor de A2: ");
scanf("%f", &A2);

media = (0.4 * A1) + (0.6 * A2);

  printf( "a media final é: %f\n", media);
  
  return 0;
}