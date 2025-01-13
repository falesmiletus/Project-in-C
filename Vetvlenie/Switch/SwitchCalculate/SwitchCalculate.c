#include <stdio.h>

int main() {
    float a,b;
    int c;
  char p;
  printf("Введите числа и знак по образцу:\n");
  printf("45 23 +\n");
  scanf("%f %f %c",&a,&b,&p);
  c = (int) b;
  switch(p){
      case '+': printf("%.2f",a + b); break;
      case '-': printf("%.2f",a - b); break;
      case '*': printf("%.2f",a * b);break;
      case '/': switch(c){
          case 0:  printf("ERROR!"); break;     
          default : printf("%.2f",a / b);break;    
      } break;
      default : printf("ERROR!"); break;
  }
  printf("\n");
    return 0;
}