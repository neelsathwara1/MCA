#include <stdio.h>

int main() {
    int num, originalNum, remainder, sum = 0;

    printf("Enter an integer number between 0 and 1000: ");
    scanf("%d", &num);
    
    originalNum = num;

    if (num < 0 || num > 1000) {
        printf("Please enter a valid number between 0 and 1000.\n");
        return 1;
    }

    while (num > 0) {
        remainder = num % 10;
        sum += remainder;
        num /= 10;
    }

    printf("The sum of digits in %d is: %d\n", originalNum, sum);

    return 0;
}
