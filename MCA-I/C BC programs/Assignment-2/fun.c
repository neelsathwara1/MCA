#include<stdio.h>
int main()
{
    int a,b,c;
    a=2.45; //c automatically typecast this value to an integer
    b=a+2;
    printf("Enter an integer :");
    scanf("%d",&c);
    printf("%d  %d  %d\n",a,b,c);
    return 0;
}