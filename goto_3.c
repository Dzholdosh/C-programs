#include <stdio.h>

int main(int argc, char const *argv[]) {
  int n;
  label:
  printf("Enter a number (Press 0 to exit): ");
  scanf("%d", &n);

  if (n != 0){
    printf("Square of %d is %d\n", n, n * n);
    goto label;
  } else {
    printf("End of the programme\n");
  }
  return 0;
}
