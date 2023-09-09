#include<stdio.h>

void main()
{
    int n,sum=0;
    printf("\nEnter the size nxn of 2d array : ");
    scanf("%d",&n);

    int a[n][n];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            a[i][j]=i-j;
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            sum+=a[i][j];
        }
    }
    printf("\nSum of the array is : %d \n\n\n\n\n",sum);
}