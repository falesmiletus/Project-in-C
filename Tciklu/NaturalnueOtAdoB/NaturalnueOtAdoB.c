#include <stdio.h>

#include <stdio.h>

int main() {
    printf("Введите два числа\n");
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    c = 0;
    for(int i = a;i <= b;i++){
        if (i > 0){
            printf("%d ",i);
            c++;
        }   
    }
    printf("\n%d",c);
    return 0;
}