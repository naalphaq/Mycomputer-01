/*
    Chuyển cơ số 10 sang cơ số 8
        hệ cơ số 10: 1234 = 1 * 10^3 + 2 * 10^2 + 3 * 10^1 + 4 * 10^0
        hệ cơ số 8: 25 = 2 * 8 ^ 1 + 5 * 8 ^ 0 = 21
 */

/*
    Cách chuyển 10 sang 8
    Giả sử n = 100

    4, 12 vì 100 % 8 = 4, 100 / 8 = 12
    4, 1 vì 12 % 8 = 4, 12 / 8 = 1
    1, 0 vì 1 % 8 = 1, 1 / 8 = 0

    => 144 = 1 * 8^2 + 4 * 8 + 4

 */

#include <stdio.h>
#include <math.h>

int DecToOct(int number)
{
    int p = 0;
    int octNumber = 0;
    while (number > 0)
    {
        octNumber += (number % 8) * pow(10, p);
        p++;
        number /= 8;
    }
    return octNumber;
}
int main()
{
    int decimalNumber;
    printf("\nNhap so o co so 10: ");
    scanf("%d", &decimalNumber);

    printf("\nOct = %d", DecToOct(decimalNumber));
}