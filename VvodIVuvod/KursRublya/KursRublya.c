#include <stdio.h>
int main(void){
  int rub;
  double kurs, dollars;
  scanf("%d",&rub);
  scanf("%lf",&kurs);  
  dollars = rub * kurs;
  printf("%lf\n", dollars);
  return 0;
}