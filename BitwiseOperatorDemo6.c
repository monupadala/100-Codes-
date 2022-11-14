#include<stdio.h>
void main() {
  printf("RA2211042010047\n");
  int x, y, max, min;
  x = 99;
  y = 199;
  max = x ^ (( x ^ y) & -(x > y));
  min = y ^ (( x ^ y) & -(x > y));
  printf("maximum of given numbes = %d\nMinimum of given numbers = %d\n", max, min);
         }
