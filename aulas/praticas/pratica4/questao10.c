/*
10. Faça um programa em C que calcule a decomposição de um número inteiro qualquer em unidade, dezena, centena e milhar (ex.: 5637 é decomposto em 7 unidades, 3 dezenas, 6 centenas e 5 milhares).
*/
#include <stdio.h>
#include <math.h>
int main() {

int numero;
  int unidade;
  int dezena;
  int centena;
  int milhar;

  printf("infome o numero: ");
  scanf("%i", &numero);

milhar = numero / 1000;
  centena = (numero % 1000) / 100;
  dezena = ((numero % 1000) % 100) / 10;
  unidade = (((numero % 1000) % 100)) % 10;

  printf("milhar: %i\n",milhar);
  printf("centena: %i\n",centena);
  printf("dezena: %i\n",dezena);
  printf("unidade: %i\n",unidade);








  return 0;
}