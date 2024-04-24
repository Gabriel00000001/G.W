#include <stdio.h>
int main() {

 float nota1;
 float nota2;

printf("diga a nota1: ");
  scanf("%f", &nota1);
  
int nota1_eh_valida = nota1 >= 0.0f && nota1 <= 10.0f;

  if(nota1_eh_valida) {
    printf("diga a nota2: ");
    scanf("%f", &nota2);

    int nota2_eh_valida = nota2 >= 0 && nota2 <= 10;
    if(nota2_eh_valida) {
      float media = nota1 * 0.4 + nota2 * 0.6;
      printf("media iesb eh: %f\n", media);
    } else {
       printf("nota2 eh invalida! Diga outra entre 0 e 10\n");
    }
    
  } else {
    printf("nota1 eh invalida! Diga outra entre 0 e 10\n");
  }

  return 0;
}