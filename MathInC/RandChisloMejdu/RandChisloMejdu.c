#include <stdio.h>
#include <stdlib.h>

int main() {
  printf("Программа для рандом числа между двух чисел\n");
  int a,b,res;
  printf("Введите первое число - ");
  scanf("%d",&a);
  printf("Введите второе число число - ");
  scanf("%d",&b);
  res = a + rand()%(b-a+1);
  printf("%d\n",res);
    
  return 0;
}