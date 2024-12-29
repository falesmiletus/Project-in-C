#include <stdio.h>

int main() {
  int a;
  printf("Введите число для определения положительности\n");
  scanf("%d", &a);
  printf("Если чисто четное, ответ будет 0, если нечетное - 1\n");
  printf("%d\n", a % 2);
  return 0;
}