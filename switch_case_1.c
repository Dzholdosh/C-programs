#include <stdio.h>

int main(int argc, char const *argv[]) {
  int num;
  printf("Enter any number (1 to 5): ");
  scanf("%d", &num);
  switch (num) {
    case 1:
      printf("you enter one\n");
      break;
    case 2:
      printf("you enter two\n");
      break;
    case 3:
      printf("you enter three\n");
      break;
    case 4:
      printf("you enter four\n");
      break;
    case 5:
      printf("you enter five\n");
      break;
    default:
      printf("Out of range \n");
      break;
  }
  return 0;
}
