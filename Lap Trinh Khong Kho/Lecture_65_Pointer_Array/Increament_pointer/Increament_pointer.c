#include <stdio.h>

void addOne(int *ptr)
{
    // Tăng giá trị của biến nơi con trỏ đang trỏ đến lên 1 đơn vị.
    (*ptr)++;
}

int main()
{
    int *p, i = 10;
    p = &i;
    addOne(p);
    printf("%d", *p); // 11
    return 0;
}