#include <stdio.h>
//#include<math.h>  somehow it does not work in my compiler but you can uncomment and try using pow function

int main() {
    int n;
    double sum=0,temp,s=1;

    printf("Enter a positive integer (less than 10): ");
    scanf("%d", &n);
    while(n <= 0 || n >= 10)
    {
        printf("Please enter a positive integer less than 10.\n"); 

        printf("Enter a positive integer (less than 10): ");
        scanf("%d", &n);
    }

    for (int i = 0; i <= n; i++) {
    s = s + i;
    if (s <= n) {
      //printf("Series: %lf\n", s);  //to print the series and check if the logic is correct or not
      //temp = pow(s, 4); //pow function is showing error in my compiler so i am manually doing the power function
        temp=s*s*s*s;
        sum += temp;
    } else {
      break;
    }
  }

    printf("The sum of the series is: %lf\n", sum);

    return 0;
}
