#include<stdio.h>

int isPalindrome(int number) {  
    int originalNumber = number;
    int reversedNumber = 0, remainder;

    while (number > 0) {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }

    return originalNumber == reversedNumber;
}

int main() {
    int num;

    // Input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is a palindrome
    if (isPalindrome(num)) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }

    return 0;
}