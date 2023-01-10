#include "stdio.h"
#include "math.h"
#include "stdlib.h"

void nhapMang(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\narr[%d] = ", i);
        scanf("%d", arr + i);
    }
}
// Function_Check
int Check_Sccba(int v)
{
    return (v % 2 == 0 && v % 3 == 0);
}
// Function_01
void Sccba(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (Check_Sccba(*(arr + i)))
        {
            printf("%d ", *(arr + i));
        }
    }
}

int ktraSNT(int x)
{
    if (x <= 1)
    {
        return 0; // Sai
    }
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            return 0; // Sai chia het cho chinh no
        }
    }
    return 1;
}
void SNT(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (ktraSNT(*(arr + i)))
            {
                printf("%d ", *(arr + i));
            }
    }
}
int main()
{
    int n, kq;
    do
    {
        printf("Nhap vao so luong phan tu (0<n<100): ");
        scanf("%d", &n);
    } while (n < 1 || n > 100);
    //
    int *arr = (int *)malloc(n * sizeof(int));
    //
    if (arr == NULL)
    {
        printf("No to meet the memory");
        exit(0);
    }
    // nhapMang
    nhapMang(arr, n);
    // Function 01
    printf("So chia het cho 3 va so chan mang trong mang arr[%d]: ", n);
    Sccba(arr, n);
    // Functon 02
    printf("\nSo nguyen to trong mang arr[%d]: ", n);
    SNT(arr, n);
    //
    free(arr);
}
