#include <stdio.h>

int main() {
    int a,b;
    printf("Введите число чтобы определить составное оно или простое\n");
    scanf("%d",&a);
    b = 1;
    for (int i = 2; i < a; i++){
        if( a % i == 0){
            b = 0;    
        }
    }
    if (b == 1){
        printf("Простое\n");
    }
    else{
        printf("Составное\n");
    }
    return 0;
}