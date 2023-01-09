#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a;
    int b;

    printf("\nNhap tu so: ");
    scanf("%d", &a);
    do
    {
        printf("\nNhap mau so: ");
        scanf("%d", &b);
    } while (b == 0);

    a = abs(a);
    b = abs(b);

    int USCLN = 1;

    if (a == 0 || b == 0)
    {
        USCLN = (a + b);
    }
    else
    {
        while (a != b)
        {
            if (a > b)
            {
                a = a - b;
            }
            else
            {
                b = b - a;
            }
        }
        USCLN = a;
    }
    printf("\nUoc so chung lon nhat cua a va b la %d", USCLN);
}