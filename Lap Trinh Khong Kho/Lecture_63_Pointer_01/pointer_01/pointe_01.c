#include <stdio.h>
/*
int main()
{
  int number = 5;
  printf("Gia tri cua number = %d", number);
  // truy xuất địa chỉ bằng cách thêm & trước tên biến
  printf("\nDia chi cua number = %x", &number);  
  return 0;
}
*/
/*
int main()
{
  void *p_int = NULL;
  printf("Gia tri cua con tro la %d", p_int);
}
*/
int main(){
    int x = 5, y = 6, sum =0;
    int *px;
    sum =  x + y;
    printf("\nsum = %d", sum);
    printf("\nDia chi cua bien x: %p", &x);
    //su dung con tro doi voi bien x --> thay doi gia tri value cua x
    px = &x;
    *px = 50;
    int subtract = 0;
    subtract = x - y;//50 - 6
    printf("\nsubtract = %d", subtract);
    printf("\nDia chi cua bien x: %p", px);
}

