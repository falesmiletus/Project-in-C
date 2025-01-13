#include <stdio.h>

int main() {
    int a,b,c,res,vod;
    printf("Введите трехзначное число\n");
    scanf("%d",&vod);
    a = vod / 100;
    b = vod / 10 % 10;
    c = vod % 10;
    res = c * 100 + b * 10 + a;
    printf("Ваше число наоборот = %d\n",res);
    return 0;
}