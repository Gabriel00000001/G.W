#include <stdio.h>
int main() {

int numero1;
int numero2;

  printf("diga o primeiro numero: ");
  int deu_certo = scanf("%i", &numero1);
  
  printf("diga o segundo numero: ");
  int deu_certo1 = scanf("%i", &numero2);

int sao_iguais = numero1 == numero2;
  printf("sao iguais? %i\n", sao_iguais);

int sao_diferentes = numero1 != numero2;
  printf("sao diferentes? %i\n", sao_diferentes);

  int eh_maior = numero1 > numero2;
  printf("eh maior? %i\n", eh_maior);

  int eh_menor = numero1 < numero2;
  printf("eh menor? %i\n", eh_menor);

  int eh_maior_igual = numero1 >= numero2;
  printf("eh maior ou igual? %i\n", eh_maior_igual);
  
  int eh_menor_igual = numero1 <= numero2;
  printf("eh menor ou igual? %i\n", eh_menor_igual);




  




  return 0;
}