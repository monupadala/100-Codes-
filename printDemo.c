#include<stdio.h>
int main() {
  int num1;
  printf("number: ");
  scanf("%d", &num1);
  printf("%2d field width\n", num1);
  printf("%6d field width\n", num1);
  printf("%-6d with minus sign\n", num1);
}
