#include <stdio.h>
#include <stdlib.h>

int main() {
  int a;
  printf("Введите число \n");
  scanf("%d",&a);
  printf("Рандомное число число до %d \n",a);
  printf("%d\n",rand()%(a+1));
  // put your code here
  return 0;
}