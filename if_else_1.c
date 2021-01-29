#include <stdio.h>

int main(){
  int i;
  printf("Press 0:\n");
  scanf("%d", &i);
  if (i == 0)
    printf("Zero is pressed 0\n");
  else
    printf("Zero isn't pressed 0\n");
  return 0;
}
