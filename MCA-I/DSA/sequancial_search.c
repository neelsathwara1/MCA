#include<stdio.h>

void main()
{
    int a[10];
    int n;

    for(int i=0;i<10;i++)
    {
        printf("\nEnter the value of element %i : ", (i+1));
        scanf("%i", &a[i]);
    }

    printf("\nEnter the number to be searched :");
    scanf("%i",&n);
    
    for(int i=0;i<10;i++)
    {
        if(n==a[i])
            printf("\nThe element %i is found at index %i",n,i);
        else
            i++;        
    }
}