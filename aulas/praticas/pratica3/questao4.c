/*
4. Faça um programa que C que calcule os impostos incluídos no preço de um produto (preço final = (1 + ICMS + COFINS + PIS/PASEP) x preço inicial). Considere ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%
  */

#include <stdio.h>
int main() {

float preco_inicial = 0.0;
float preco_final = 0.0;
float ICMS = 0.17;
float COFINS = 0.076;
float PIS_PASEP = 0.0165;


printf("diga o valor do produto: ");
 scanf("%f", &preco_inicial );
  
  preco_final = (1 + ICMS + COFINS + PIS_PASEP) * preco_inicial;
  ICMS = preco_inicial * ICMS;
  COFINS = preco_inicial * COFINS;
  PIS_PASEP = preco_inicial  * PIS_PASEP;
  
printf(" o valor é: %f\n", preco_final);
printf(" os valores dos impostos são:\n");
printf("ICMS: %f\n", ICMS);
printf("COFINS: %f\n", COFINS);
printf("PIS_PASEP: %f\n", PIS_PASEP);



  
  return 0;
}