#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i = 0;
  label:
  printf("\nPress 1 to End Program: ");
  scanf("%d", &i);
  if (i != 1){
    printf("\nYou entered %d. Goto Execution\n", i);
    goto label;
  }
  printf("\nEnd of the Programm!!!\n");
  return 0;
}
