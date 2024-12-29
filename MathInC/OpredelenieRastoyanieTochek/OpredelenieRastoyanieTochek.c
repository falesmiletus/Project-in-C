#include <stdio.h>
#include <math.h>

int main() {
    float a,b,c,d;
    float res;
    printf("Введите 4 точки\n");
    printf("x1 - ");
    scanf("%f",&a);
    printf("y1 - ");
    scanf("%f",&b);
    printf("x2 - ");
    scanf("%f",&c);
    printf("y2 - ");
    scanf("%f",&d);
    res = sqrt(pow(c - a,2) + pow(d - b,2));
    printf("Расстояние между точками - %.2f\n",res);
    return 0;
}