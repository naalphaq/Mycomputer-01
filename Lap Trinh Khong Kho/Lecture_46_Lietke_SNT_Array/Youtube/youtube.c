/*
    Bài tập: Đưa ra số lượng số nguyên tố có trong mảng 1 chiều.
    Nếu có thì liệt kê các số nguyên tố có trong mảng 1 chiều.
*/
#include <stdio.h>
#include <math.h>
#define MAX_SIZE 100 // sức chứa tối đa

void NhapMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Nhap a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void XuatMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\na[%d] = %d", i, a[i]);
    }
}

/*
    Kiểm tra số nguyên tố
*/
bool IsPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

/*
    Đếm số lượng số nguyên tố
*/
int PrimeCount(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (IsPrime(a[i]))
        {
            count++;
        }
    }
    return count;
}

/*
    Liệt kê các số nguyên tố
*/

void PrintPrime(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (IsPrime(a[i]))
        {
            printf("%d\t", a[i]);
        }
    }
}

int main()
{
    int arr[MAX_SIZE];

    int n; // số lượng phần tử của mảng
    // Kiểm tra số lượng phần tử là số dương + nhỏ hơn MAX_SIZE
    do
    {
        printf("Nhap n = ");
        scanf("%d", &n);
    } while (n <= 0 || n > MAX_SIZE);

    // Nhập mảng
    NhapMang(arr, n);

    // Xuất mảng
    XuatMang(arr, n);

    // Giải bài toán
    int primeCount = PrimeCount(arr, n);
    printf("\nSo luong so nguyen to la %d", primeCount);
    if(primeCount > 0){
        printf("\nDanh sach so nguyen to: ");
        PrintPrime(arr, n);
    }
}