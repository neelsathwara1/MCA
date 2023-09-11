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
    
    for(int j=1;j<n;j++) //no need to check from the 1st position
    {
        temp=a[j];
        int k=j-1;
        while(k>=0 && temp<a[k])
        {
            a[k+1]=a[k];
            k=k-1; //to end the while loop at the 0th index
        }
        a[k+1]=temp;
    }
    
    printf("\n The sorted list is:\n");
    for(int x=0;x<n;x++)
    {
        printf("%d\t",a[x]);
    }   
}