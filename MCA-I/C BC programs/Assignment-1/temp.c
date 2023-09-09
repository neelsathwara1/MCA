#include<stdio.h>

void main()
{
  float c,f;
  printf("Enter the celcius value to be converted : ");
  scanf("%f",&c);
  f=(c*9)/5+32;
  printf("The ferenhiet value of %f is:%f",c,f);
  
}