#include <stdio.h>

int main(int argc, char const *argv[]) {
  printf("Even Number Between 1 to 25:\n");
  for (int i = 0; i <= 25; i++){
    if (i % 2 == 0){
      printf("%d\n", i);
    }
  }
  return 0;
}
