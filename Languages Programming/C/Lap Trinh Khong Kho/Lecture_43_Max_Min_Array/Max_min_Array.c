#include <stdio.h>
const int Max_size = 100;
void nhapMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\na[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
void xuatMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}
int maxArray(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}
int minArray(int a[], int n){
    int min = a[0];
    for(int i = 1; i < n; i++){
        if(a[i] < min){
            min = a[i];
        }
    }
    return min;
}

int main()
{
    int n;
    int arr[Max_size];
    do{
        printf("\nNhap n = ");
        scanf("%d", &n);
    }while (n <=0 || n > Max_size);.
    nhapMang(arr, n);
    xuatMang(arr, n);
    printf("\nSo max trong mang arr[%d] la %d", n, maxArray(arr, n));
    printf("\nSo min trong mang arr[%d] la %d",n, minArray(arr, n));
}