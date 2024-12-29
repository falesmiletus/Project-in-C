#include <stdio.h>
#include <math.h>

int main() {
  printf("Программа вычисления прощяди треугольника\n");
  double a,b,c,pi,res,ugl;
  pi = 3.141593;
  printf("Введите первую сторону треугольника\n");
  scanf("%lf",&a);
  printf("Введите вторую сторону треугольника\n");
  scanf("%lf",&b);
  printf("Введите угол треугольника ( в градусах)\n");
  scanf("%lf",&c);
  ugl = (c*pi) / 180.0;
  res = (1.0/2.0) * a * b * sin(ugl);
  printf("Площядь данного треугольника = %.2lf\n",res);
  return 0;
}