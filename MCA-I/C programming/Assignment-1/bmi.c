#include <stdio.h>


int main() {
  float weight, height, bmi;

  printf("\nEnter your weight in kilograms: ");
  scanf("%f",&weight);

  printf("\nEnter your height in cm: ");
  scanf("%f",&height);

  height=height/100;
  bmi = weight / (height * height);

  if (bmi < 18.5) {
    printf("\nYou are underweight.");
  } else if (bmi >= 18.5 && bmi < 25) {
    printf("\nYou are normal weight.");
  } else if (bmi >= 25 && bmi < 30) {
    printf("\nYou are overweight.");
  } else {
    printf("\nYou are obese.");
  }

  return 0;
}