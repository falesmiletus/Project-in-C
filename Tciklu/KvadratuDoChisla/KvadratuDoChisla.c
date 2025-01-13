#include <stdio.h>
#include <math.h>

int main() {
  int a,b;
  printf("Введите число, до которого показать квадраты\n");
  scanf("%d",&a);
  b = 0;
  for ( int i = 1; a > b ; i++){
      b = pow(i,2);
      if (b > a){
          break;    
      }
      printf("%d ",b);
  }
  printf("\n");
  return 0;
}