#include <stdio.h>
//#include<math.h>  somehow it does not work in my compiler but you can uncomment and try using pow function

int main() {
    int n;
    double sum=0,temp;

    printf("Enter a positive integer (less than 50): ");
    scanf("%d", &n);

    if (n <= 0 || n >= 50) {
        printf("Please enter a positive integer less than 50.\n");
        return 1; 
    }

    for (int i = 1; i <= n; i++) {
        //temp=pow(i,4);
        temp=i*i*i*i;
        sum+=temp;
    }

    printf("The sum of the series is: %lf\n", sum);

    return 0;
}
