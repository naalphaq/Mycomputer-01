#include <stdio.h>
#include <stdlib.h>
void nhapMang(int *arr, int n)
{   printf("\nNhap mang:");
    for (int i = 0; i < n; i++)
    {
        printf("\narr[%d] = ", i);
        scanf("%d", (arr + i));
    }
}
void xuatMang(int *arr, int n)
{   printf("\nMang vua nhap:");
    for (int i = 0; i < n; i++)
    {
        printf("\narr[%d] = %d", i,  *(arr + i));
    }
}
int main()
{
    int n;
    do
    {
        printf("\nNhap vao n phan tu:");
        scanf("%d", &n);
    } while (n < 0);
    //
    int *arr = (int *)malloc(n * sizeof(int));
    //
    if (arr == NULL)
    {
        printf("Khong the cap phat bo nho");
        exit(0);
    }
    // functions
    nhapMang(arr, n);
    xuatMang(arr, n);
    //
    free(arr);
}