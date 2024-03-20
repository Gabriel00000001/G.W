/*
5. Faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes)
*/
#include <stdio.h>
int main() {

long int gigabaytes = 0;
long int bytes = 0;

printf( "diga o valor: ");
  scanf("%li", &gigabaytes);
  
  bytes = gigabaytes * 1024 * 1024 * 1024;

printf("o valor eh: %li\n", bytes);


  return 0;
}
  