#include <stdio.h>
#include <math.h>
int main() {
    double a,b,c,res,p;
    printf("Введите первую сторону\n");
    scanf("%lf",&a);
    printf("Введите вторую сторону\n");
    scanf("%lf",&b);
    printf("Введите третью сторону\n");
    scanf("%lf",&c);
    p = (a + b + c) / 2;
    res = sqrt(p * (p-a)*(p-b)*(p-c));
    printf("Площядь такого треугольника равна - %.2lf\n",res);
    return 0;
}