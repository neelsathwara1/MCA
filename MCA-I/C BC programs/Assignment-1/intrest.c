#include <math.h>
#include <stdio.h>
void main() {
  float p = 500000, r = 3.5;
  int n = 10;
  float si, ci, ci2, ci4, ci12, ci365;
  double pci, pci2, pci4, pci12, pci365;
  pci = pow(1 + r, n);
  pci2 = pow(1 + (r / 2), n * 2);
  pci4 = pow(1 + (r / 4), n * 4);
  pci12 = pow(1 + (r / 12), n * 12);
  pci365 = pow(1 + (r / 365), n * 365);

  si = (p * r * n) / 100;
  ci = p * pci;
  ci2 = p * pci2;
  ci4 = p * pci4;
  ci12 = p * pci12;
  ci365 = p * pci365;

  printf("Simple intrest of %f for %i years on %f  intrest rate is: %lf", p, n,
         r, si);
  printf("\nannual Compound intrest of %f for %i years on %f  intrest rate is: "
         "%lf",
         p, n, r, ci);
  printf("\nsemi-annual Compound intrest of %f for %i years on %f  intrest "
         "rate is: %lf",
         p, n, r, ci2);
  printf("\nquarterly Compound intrest of %f for %i years on %f  intrest rate "
         "is: %lf",
         p, n, r, ci4);
  printf("\nmonthly Compound intrest of %f for %i years on %f  intrest rate "
         "is: %lf",
         p, n, r, ci12);
  printf(
      "\ndaily Compound intrest of %f for %i years on %f  intrest rate is: %lf",
      p, n, r, ci365);
}