#include <stdio.h>

int main() {
  int a,b,c;
  printf("Введите 3 числа для определения сколько из них положитиельные\n");
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  if ( a > 0 && b > 0 && c > 0){
      printf("3");
  }
  else if ( (a > 0 && b > 0 && c < 0) || (a > 0 && b < 0 && c > 0) || (a < 0 && b > 0 && c > 0)){
      printf("2");    
  }
  else if (a < 0 && b < 0 && c < 0){
      printf("0");    
  }
  else{
      printf("1");
  }
  printf("\n");
  return 0;
}