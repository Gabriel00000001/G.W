/*
7. Faça um programa em C que calcule a altura alcançada por um avião após ter percorrido uma certa distância (seno(ângulo) = altura/distância). Considere o ângulo de inclinação do avião menor ou igual a 45°.
*/
#include <stdio.h>
#include <math.h>
int main() {

float altura;
float distancia;
float angulo;
double seno;
const float PI = 3.1416;
  
  printf("diga a distancia: ");
  scanf("%f", &distancia);

  printf("diga o angulo: ");
  scanf("%f", &angulo);

seno = sin(angulo * (PI / 180));

  altura = seno * distancia;

  printf("a altura eh: %f\n", altura);






  return 0;
}