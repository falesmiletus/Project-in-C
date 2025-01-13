#include <stdio.h> 
int main(void){

  int age, height, weight;
  double bov_m, bov_f;
  char pol;
  printf("Введите свой пол (f\\m)\n");
  scanf("%c",&pol);
    
  printf("Введите свой возраст\n");
  scanf("%d", &age); // считываем целое значение в переменную age

  printf("Введите свой рост\n");
  scanf("%d", &height); // считываем  значение в переменную height

  printf("Введите свой вес\n");
  scanf("%d", &weight); // считываем значение в переменную weight

  bov_m = 10*weight + 6.25*height - 5*age + 5;
  bov_f = 10*weight + 6.25*height - 5*age - 161;
  switch (pol){
      case 'f' :  printf("|  BMR  |\n");   printf("|%.2f|\n", bov_f);break; 
      case 'm' :  printf("|  BMR  |\n");   printf("|%.2f|\n", bov_m);break;
      default : printf("ERROR!\n"); break;
  }

  return 0;
}