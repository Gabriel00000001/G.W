/*
6. Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a).
*/
#include <stdio.h>
#include <math.h>
int main() {

float a;
float b;
float c;
double delta;
double bhaskara1;
double bhaskara2;
  
  
  printf("diga o valor de a: ");
  scanf("%f", &a);

  printf("diga o valor de b: ");
  scanf("%f", &b);

  printf("diga o valor de c: ");
  scanf ("%f", &c);

  delta = pow(b,2) - 4*a*c;
  
  bhaskara1 = ((-b + sqrt(delta))/2 );

  bhaskara2 =  ((-b) - sqrt(delta))/2 );


  printf("a raiz 1 eh: %f\n", bhaskara1);
  printf("a raiz 2 eh: %f\n", bhaskara2);


  return 0;
}