#include "stdio.h"
#define ABS(X)  (X < 0 ? -X , X) 

int main()
{
  int x = 5;
  int result = x++;//In ra ket qua x=5 roi moi cong len --> thuc hien 1 lenh gi do roi moi in ra x++
  printf("result = %d\n", result);
printf("x = %d\n", x);

}
