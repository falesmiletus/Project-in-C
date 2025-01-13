#include <stdio.h>

int main() {
  int a,b;
  b = 0;
  printf("Введите число - ");
  scanf("%d",&a);
  while ( a > 0){
      a = a / 10;
      b++;
  }
  printf("Колличество цифор в числе = %d\n",b);
  return 0;
}