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
        int min=j;
        for(int k=j+1;k<n;k++)
        {
            if(a[min]>a[k])
                min=k;
        }
        temp=a[min];
        a[min]=a[j];
        a[j]=temp;
    }
    
    printf("\n The sorted list is:\n");
    for(int x=0;x<n;x++)
    {
        printf("%d\t",a[x]);
    }   
}