#include <stdio.h>

int main() {
  int a;
  printf("Введите число - ");
  scanf("%d",&a);
  printf("Ваше число наоборот - ");
  while(a > 0){
      printf("%d",a%10);
      a /= 10;
  }
  printf("\n");
  return 0;
}