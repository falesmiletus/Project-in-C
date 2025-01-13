#include <stdio.h>
#include <math.h>
int main() {
    double pi = 3.14159265358979323846;
    int ri,ro,shi;
    double s;
    printf ("Введите внутрений радиус - ");
    scanf("%d",&ri);
    printf ("Введите внешний радиус - ");
    scanf("%d",&ro);
    s = pi * (pow(ro,2) - pow(ri,2)) * 100;
    shi = ro - ri;
    printf("Длинна кольца равна - %d\nПлощядь кольца (в гектарах) равна - %.2lf\n",shi,s);
    return 0;
}