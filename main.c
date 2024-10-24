#include <stdio.h>

int main(void) {
  float income = 0;
  int delay;
  float total_10;
  float tax;
  printf("Welcome to the Tax Calculator.\nPlease enter your taxable income.");
  scanf("%f", &income);
  printf("Thank you.\n Please enter '1' to initiate calculation...");
  scanf("%d", &delay);

  if ((income >= 0) && (income <= 9325)) {
    tax = .10*income;
  }
  else if ((income > 9325) && (income <= 37950)) {
    tax = 932.5 + .15*(income - 9325);
  }
  else if ((income > 37950) && (income <= 91900)) {
    tax = 5226.25 + .25*(income - 37950);
  }
  else if ((income > 91900) && (income <= 191650)) {
    tax = 18713.75 + .28*(income - 91900);
  }
  else if ((income > 191650) && (income <= 416700)){
    tax = 46643.75 + .33*(income - 191650);
  }
  else if ((income > 416700) && (income <= 418400)){
    tax = 120910.25 + .35*(income - 416700);
  }
  else {
    tax = 121505.25 + .396*(income - 418400);
  }
 printf("You owe $%.2f in taxes this year.", tax);
  float rate = tax*100/income;
  printf("\nYour effective rate is %.2f percent.", rate);
  return 0;
}