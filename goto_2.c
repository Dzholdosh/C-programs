#include <stdio.h>
int main() {
  int i = 0, n;
  printf("Enter a nuber to print its multiplication number: ");
  scanf("%d", &n);
  label:
  if (i <= 10){
    printf("%d\n", n * i);
    i++;
    goto label;
  }
  return 0;
}
