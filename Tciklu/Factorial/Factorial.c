#include <stdio.h>

int main() {
    int a,k;
    printf("Введите число\n");
    scanf("%d",&a);
    for (int i = 0; i <= a; i++){
        if ( i == 0){
            k = 1;    
        }
        else{
            k *= i;    
        }
        
    }
    printf("Факториал числа %d = %d\n",a,k);
    return 0;
}