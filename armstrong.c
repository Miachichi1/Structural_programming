#include <stdio.h>
#include <math.h>

// Function to count the number of digits in a given number
int countDigits(int number) {
    int count = 0;
    while (number != 0) {
        number /= 10;
        count++;
    }
    return count;
}

// Function to check if a number is an Armstrong number
int isArmstrong(int number) {
    int originalNumber = number;
    int numDigits = countDigits(number);
    int sum = 0;

    while (number > 0) {
        int digit = number % 10;
        sum += pow(digit, numDigits);
        number /= 10;
    }

    return originalNumber == sum;
}

int main() {
    int num;

    // Input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is an Armstrong number
    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
