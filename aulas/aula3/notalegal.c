#include <stdio.h>
int main() {
 
printf("\x1b[30m------------------------------\n");
printf("           NOTA LEGAL         \n");
printf("------------------------------\x1b[0m\n");
printf("ITEM            QTD VALOR     \n");
  printf("%-15s %03i %-11.2f\n", " Banana nanica", 2, 20.00);
  printf("%-15s %03i %-11.2f\n", " Uva globo", 1, 15.00);
  printf("%-15s %03i %-11.2f\n", " Laranja lima", 1,18.00);

// printf(" Banana nanica    2    20.00  \n");
// printf(" Uva globo        1    15.00  \n");
// printf(" Laranja Lima     1    18.00  \n");
  
printf("------------------------------\n");
printf("total:%6.2f\n",53.00);
  

  return 0;
}