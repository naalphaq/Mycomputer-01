#include <stdio.h> //* printf *
int main()
{
  int a, b;
  printf("nhap a:\n");
  scanf("%d", &a);
  printf("nhap b:\n");
  scanf("%d", &b);
  int s = 0;
  s = a + b;
  printf("S = %f", s);
  return 0;
}