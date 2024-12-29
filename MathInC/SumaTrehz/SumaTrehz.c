#include <stdio.h>

int main() {
  int inP,a,b,c,res;
  printf("Введите трёхзначное число - ");
  scanf("%d",&inP);
  a = inP / 100;
  b = inP /10 % 10;
  c = inP % 10;
  res = a + b + c;
  printf("Результат сложения цифр в числе = %d\n",res);
  return 0;
}