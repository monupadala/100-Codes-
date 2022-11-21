#include<stdio.h>
void main() {
  int total = 0;
  while (total <= 100) {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    total += num;
  }
  printf("The total of given numbers is : %d\n");
}
