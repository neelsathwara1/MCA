#include<stdio.h>
#include<math.h>

int main()
{
    int n,val;
    
    printf("\nEnter the number of elements in array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("\nEnter the %d element of array :",i+1);
        scanf("%d",&arr[i]);
    }

    printf("\nEnter the number to be searched in array : ");
    scanf("%d",&val);

    int b=0, e=n-1;
    int count=0;
    while (b <=e)
    {
        count++;
        int mid = (b+e)/2;
        if(arr[mid] == val)
        {
            printf("Element found at index =%d\n%d\n\n\n\n\n\n", mid,count);
            return 1;
            
        }
        else if(val < arr[mid])
        {
            e=mid-1;
        }
        else
        {
            b=mid+1;
        }
    }
}
