#include <stdio.h> 
int main(void) {
  int a, b, res;

  printf("Введите первое число - ");
  scanf("%d", &a); // считываем целое значение в переменную a
  printf("\n");
  printf("Введите второе число - ");
  scanf("%d", &b); // считываем целое значение в переменную b
  printf("\n");

  res = a + b;  
  printf("%d + %d = %d\n", a, b, res);
  return 0;
}