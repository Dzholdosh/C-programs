#include <stdio.h>

int main(){
  int unit;
  int amount;
  printf("Enter Electricity Unit:");
  scanf("%d", &unit);
  if (unit <= 100){
    amount = unit * 3;
  } else {
    amount = unit * 5;
  }
  printf("Bill Amount is %d", amount);
  return 0;
}
