#include <stdio.h>

int main() {
    int a,k,d,c;
    printf("Введите число\n");
    scanf("%d",&a);
    for (int i = 1; i <= a;i++){
        if (i == 1 || i == 2){
            k = 1;  
            d = k;
        }
        else{
            c = k;
            k = k + d;
            d = c;
        }
    }
    printf("%d\n",k);
    return 0;
}