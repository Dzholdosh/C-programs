#include <stdio.h>

int main(){
  int mark;
  printf("Enter your marks : ");
  scanf("%d", &mark);
  if (mark < 0 || mark > 100){
    printf("Wrong entry!\n");
  } else if (mark < 50){
    printf("grade F\n");
  } else if (mark >= 50 && mark < 60){
    printf("Grade D\n");
  } else if (mark >= 60 && mark < 70){
      printf("Grade C\n");
  } else if (mark >= 70 && mark < 80){
      printf("Grade B\n");
  } else if (mark >= 80 && mark < 90){
      printf("Grade A\n");
  }  else {
      printf("Grade A+\n");
  }
  return 0;
}
