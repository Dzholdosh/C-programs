#include <stdio.h>

int main(){
  int n;
  printf("Enter number:\n");
  scanf("%d", &n);
  if (n <= 10){
    printf("Number is less then or equal to 10\n");
  } else {
    printf("Number is greater than 10\n");
  }
  return 0;
}
