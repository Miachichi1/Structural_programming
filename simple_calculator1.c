// Name: Limo victoria chebichii regno: ENE212-0082/2020//
#include <stdio.h>
int main(){
  int first_number;
  int second_number;
  int sum;
  int difference;

  printf("enter first number");
  scanf("%d", &first_number);

  printf("enter second number");
  scanf("%d", &second_number);

  sum = first_number + second_number;
  difference = first_number - second_number;

  printf("The sum of your number is %d ", sum);
  printf("The difference of your numbers is %d", difference);
  printf("The sum and difference of your numbers are %d and %d respectively ", sum, difference);

  return 0;
}
