#include <stdio.h>

int main(){
    int a = 0;
    double final = 0.0;
    const double radianse = 57.29;
    int res = scanf("%d", &a);
    if (res == 1){
        final = a * radianse;
        printf("%.lf",final); 
        // if ((final - (int)final/1) > 0.49){
        //     printf("%d",(int)final +1); 
        // } 
        // else{
        //     printf("%d",(int)final); 
        // }
    }
    return 0;
}