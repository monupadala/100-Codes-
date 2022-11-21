#include<stdio.h>
#if defined (MAX)
#define MIN 20
#elseif
#define MAX 100
#define MIN 200
#endif
void main() {
  printf("MAX value = %d, MIN value = %d", MAX, MIN);
}
