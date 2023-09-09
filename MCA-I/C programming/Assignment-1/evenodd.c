#include<stdio.h>
void main()
{
  int n;
  printf("Enter the number to be checked :");
  scanf("%i",&n);
  if(n%2==0)
    printf("\n%i is a even number",n);
  else
    printf("\n%i is a odd number",n);
}
