/*
    Chuyển số nhị phân sang thập phân.
        Hệ thập phân: 1234 = 1 * 10^3 + 2 * 10^2 + 3 * 10^1 + 4 * 10^0
        Hệ nhị phân: 101 = 1 * 2^2 + 0 * 2^1 + 1 * 2^0

        1110: 0 + 2 + 4 + 8 = 14
 */

#include <stdio.h>
#include <math.h>

int BinToDec(long long binaryNumber)
{
    int p = 0;
    int decNumber = 0;
    while (binaryNumber > 0)
    {
        decNumber += (binaryNumber % 10) * pow(2, p);
        ++p;
        binaryNumber /= 10;
    }
    return decNumber;
}

int main()
{
    long long binaryNumber;
    printf("\nNhap so nhi phan: ");
    scanf("%d", &binaryNumber);
    printf("Dec = %d", BinToDec(binaryNumber));
}