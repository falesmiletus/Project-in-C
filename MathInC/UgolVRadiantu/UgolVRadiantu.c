#include <stdio.h>

int main() {
    double x,y,pi = 3.1415926;
    printf("Введите угол в градусах - ");
    scanf("%lf",&x);
    y = pi * x / (double)180.0;
    printf("Угол в радиантах равен - %.2lf\n",y);
    return 0;
}