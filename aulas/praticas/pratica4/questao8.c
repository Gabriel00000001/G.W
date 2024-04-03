/*
8. Faça um programa em C que converta um tempo expresso em segundos para um valor em horas, minutos e segundos (ex.: 1000 segundos corresponde a 0 horas 16 minutos e 40 segundos).
*/
#include <stdio.h>
#include <math.h>
int main() {

int segundos;
int minutos;
int horas;

  printf("diga quantos segundo: ");
  scanf(" %i", &segundos);

 horas = segundos / 3600;
  minutos = (segundos % 3600) / 60;
  segundos = (segundos % 3600) % 60;

printf("segundos: %i\n",segundos);
printf("minutos: %i\n", minutos);
printf("horas: %i\n", horas);






  return 0;
}