#include <stdio.h>

int main(){
  char gen;
  printf("Are you is a Male (y/n)\n");
  scanf("%c", &gen);
  if (gen == 'y' || gen == 'Y'){
    printf("Gender : Male\n");
  } else {
    printf("Gender : Female\n" );
  }
  return 0;
}
