#include <stdio.h>

int  main(int argc, char const *argv[]) {
  int id;
  printf("Enter your Id to conrirm your department: ");
  scanf("%d", &id);
  switch (id) {
    case 7:
    case 19:
    case 41:
      printf("HR\n");
      break;
    case 11:
    case 28:
    case 66:
      printf("Developer\n");
      break;
    default:
      printf("Invalid Id\n");
      // break;
  }
  return 0;
}
