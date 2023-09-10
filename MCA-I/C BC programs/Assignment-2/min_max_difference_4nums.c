#include <stdio.h>

int main() {
    double n1, n2, n3, n4;
    
    printf("Enter four real numbers: ");
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

    double min = n1;
    double max = n1;

    if (n2 < min) {
        min = n2;
    }
    if (n2 > max) {
        max = n2;
    }

    if (n3 < min) {
        min = n3;
    }
    if (n3 > max) {
        max = n3;
    }

    if (n4 < min) {
        min = n4;
    }
    if (n4 > max) {
        max = n4;
    }

    double difference = max - min;

    printf("The difference between the minimum and maximum numbers is: %.2lf\n", difference);

    return 0;
}
