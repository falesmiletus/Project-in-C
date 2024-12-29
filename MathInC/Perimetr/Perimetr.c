#include <stdio.h>

int main() {
  int a,b;
  int res;
  printf("Введите длинну : ");
  scanf("%d",&a);
  printf("Введите ширину : ");
  scanf("%d",&b);
  res = (a + b) * 2;
  printf("Периметр равен = %d\n",res);
  return 0;
}