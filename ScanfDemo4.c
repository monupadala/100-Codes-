#include<stdio.h>
void main() {
  float amount, rate, simple_intrest;
    int months;
  printf("provide amount and rate in format of $amount and rate%% : ");
  scanf("%f %f", &amount, &intrest);
  printf("Enter period in months : ");
  scanf("%d", &months);
  simple_intrest = (amount*rate*months) / 100;
  printf("simple intrest : %f\n", simple_intrest);
}

  
