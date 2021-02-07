#include <stdio.h>

int main() {
  int n;
  label1:
  printf("Enter a number (1 to 10) Press 0 to exit : ");
  scanf("%d", &n);
  if (n > 0 && n <= 10){
    printf("Square of the number is : %d\n", n * n);
    goto label1;
  } else if (n > 10){
    printf("Invalid nNumber Try Again:\n");
    goto label1;
  } else {
    printf("End of the Program\n");
  }
  return 0;
}
