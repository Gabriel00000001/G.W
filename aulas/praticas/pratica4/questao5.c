/*
  5. Faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes).
  */

#include <stdio.h>
#include <math.h>
int main() {

 int gigabytes = 0;
 long int bytes = 0;

  printf(" diga o valor em gigabytes ");
  scanf("%i", &gigabytes);

  bytes = gigabytes * pow(1024, 3);

  printf("o valor em bytes eh %i\n", bytes);









  return 0;
}