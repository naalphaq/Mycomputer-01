
#include "stdio.h"
#define ABS(X)  (X < 0 ? -X , X) 

int main()
{
  int x = 5;
  int result = ++x;
  printf("result = %d\n", result);
  printf("x = %d\n", x);
}
