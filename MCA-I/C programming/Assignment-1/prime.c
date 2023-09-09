#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    printf("Enter the number to check prime or not: ");
    scanf("%d",&i);
    for(j=2;j<=i/2;++j)
    {
        if(i%j==0){
            printf("%d is not a prime number.",i);
            break;
        }
    }
    if(j==i/2+1)
    {
        printf("%d is a prime number.",i);
    }
    return 0;
}