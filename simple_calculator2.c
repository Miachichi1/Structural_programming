// name: Limo Victoria  regno: ENE212-0082/2020
#include <stdio.h>
int addition(int);
int subtraction(int);
int multiplication(int);
int division(int);
  

  int sum;
  int difference;
  int product;
  float quotient;
int main(){
   int first_number;
   int second_number;
   printf("enter first number/n");
     scanf("%d", &first_number);

   printf("enter second number/n");
     scanf("%d", &second_number);
  
  int addition();
  {
    sum=first_number + second_number;
    printf("The sum of your numbers is %d/n",sum);
       }
  int subtraction();
  {
    difference=first_number-second_number;
    printf("The difference of your number is %d/n", difference);
  }
   int multiplication ();
   {
    product=first_number*second_number;
    printf("The product of your numbers is %d/n",product);
  
   }
    int division();
   {
   quotient=first_number/second_number;
   printf("The quotient of your numbers is %f/n",quotient);
   }

  return 0;
}