#include <stdio.h>
#include <math.h>
int main() {

  int numero1;
  int numero2;

  printf("diga o primeiro numero: ");
  int deu_certo = scanf("%i", &numero1);

  printf("diga o segundo numero: ");
  deu_certo = scanf("%i", &numero2);
  
int soma = numero1 + numero2;
  printf(" A soma dos numeros eh: %i\n", soma);

  int subtracao = numero1 - numero2;
  printf(" a subtracao eh: %i\n", subtracao);

  int multiplicacao = numero1 * numero2;
  printf( " a multiplicacao eh: %i\n", multiplicacao);

  float divisao = 1.0f * numero1 / numero2; // conversao implicita
  printf(" a divisao eh: %f\n", divisao);

int resto = numero1 % numero2;
   printf(" Resto da divisao eh: %i\n", resto);

  // numero1 = numero1 + 1;
  // incremento
  printf(" o incramento do primero numero eh: %i\n", numero1++);
  printf(" o incramento do primero numero eh: %i\n", ++numero1);

  //numero1 = numero1 - 1;
  // decremento
  printf(" o decremento do primero numero eh: %i\n", numero1--);
  printf(" o decremento do primero numero eh: %i\n", --numero1);

  double raiz_quadrada = sqrt(numero1);
  printf("a raiz quadrada eh: %f\n", raiz_quadrada);

  double potencia = pow(numero1, 4); // 
printf( "a quarta potencia do primero numero eh %f\n", potencia); 

double logaritmo2 = log2(numero1);
  printf("o logaritmo do primeiro numero na base 2 eh %f\n", logaritmo2);

  const double PI = 3.1416;
  double seno = sin(numero1 * (PI / 180)); //angulo em radianos * PI / 180
  printf("o seno do primeiro numero eh %f\n", seno);
  
    

  
  return 0;
}