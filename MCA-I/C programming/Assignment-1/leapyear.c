#include <stdio.h>
int main() {
    int y;
    printf("Enter a year: ");
    scanf(" %d", &y);
    if (y%4==0)
    {
        if(y%100==0 && y%400==0)
        {
        
                printf("\n%d is leap year.", y);
        }    
        else
        {
                printf ("\n%d isn't a leap year.", y);
        }
    }
    else
    {
        printf ("\n%d isn't a leap year.", y);
    }
    
    return 0;
}