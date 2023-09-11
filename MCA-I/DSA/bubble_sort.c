#include<stdio.h>
int main() {
    int n,temp;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("\n Enter element %d: ",i+1 );
        scanf("%d",&a[i]);
    }
    
    for(int j=0;j<n-1;j++)
    {
        for(int i=0;i<n-1-j;i++)
        {
            if (a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
    printf("\n The sorted list is:\n");
    for(int x=0;x<n;x++)
    {
        printf("%d\t",a[x]);
    }   
}