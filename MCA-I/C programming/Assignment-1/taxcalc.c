#include <stdio.h>

int main() {
    double income;
    double tax = 0.0;

    
    printf("Enter your annual income: Rs.");
    scanf("%lf", &income);

    
    if (income <= 250000) {
        tax = income * 1; 
    } else if (income <= 500000) {
        tax = income * 0.05; 
    } else if (income <= 1000000) {
        tax = 250000 * 0.0 + 500000 * 0.5 + (income - 750000) * 0.10; 
    } else {
        tax = 250000 * 0.0 + 500000 * 0.5 + 750000 * 0.10 + (income - 1500000) * 0.15; 
    }

    printf("Your income tax is: Rs.%lf\n", tax);

    return 0;
}
