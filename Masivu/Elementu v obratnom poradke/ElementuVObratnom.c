#include <stdio.h>

int main() {
  int a;
  printf("Введите количество элементов - ");
  scanf("%d",&a);
  int arr[a];
  printf("Считывание\n");
  for (int i = 0; i < a; i++){
      scanf("%d",&arr[i]);
  }
  printf("Элементы в обратном порядке\n");
  for (int i = a-1; i > -1; i--){
      printf("%d ",arr[i]);
  }  
  printf("\n");
  return 0;
}