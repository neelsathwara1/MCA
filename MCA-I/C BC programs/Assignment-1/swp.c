#include<stdio.h>
void main()
{
  float a,b,c;
  printf("Enter two real numbers to be swapped :");
  scanf("%f %f",&a,&b);
  printf("\nbefore swapping a=%f b=%f",a,b);
  c=a;
  a=b;
  b=c;
  printf("\nafter swapping a=%f b=%f",a,b);
  
}