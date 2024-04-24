/*
  1. Faça um programa em C que determine se um número inteiro lido é par ou ímpar.
*/
#include <stdio.h>
int main() {

int numero;
  printf(" diga um numero: ");
  int leu_certo = scanf("%i", &numero);

if (leu_certo) {
  int eh_par = numero % 2 == 0;
  if (eh_par) {
    printf("eh par!\n");
  } else {
    printf("eh impar!\n");
  }
  
  
  

  return 0;
}