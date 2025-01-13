#include <stdio.h>
#include <stdlib.h> 

int main() {
  int a;
  scanf("%d",&a);
  a = (int)abs(a-1);
  printf("%d\n",a);
  return 0;
}