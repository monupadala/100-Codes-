#include<stdio.h>
void main() {
  float miles, kilometres;
  printf("Enter the distance in miles : ");
  scanf("%f", &miles);
  kilometers = miles*1.609;
  printf("Distance in kilometers = %7.2f\n", kilometers);
}
