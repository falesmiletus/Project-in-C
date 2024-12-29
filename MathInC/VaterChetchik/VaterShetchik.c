#include <stdio.h>

int main() {
    int a,b;
    double c,res;
    printf("Введите 3 числа\n");
    printf("Показания счётчика за начала месяца\n");
    scanf("%d",&a);
    printf("Показания счётчика за конец месяца\n");
    scanf("%d",&b);
    printf("Стоимость электричества\n");
    scanf("%lf",&c);
    res = (double)b - a;
    res = res * c;
    printf("Итог за месяц\n");
    printf("%.2lf\n",res);
    return 0;
}