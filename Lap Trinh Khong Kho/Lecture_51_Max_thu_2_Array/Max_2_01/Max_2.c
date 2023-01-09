/*
    //So lon thu 2 trong mang
    c1.
    sap xep giam dan --> In ra vi tri thu 2 --< a[1]
    c2.
    tim so lon thu 1
    tim so lon thu 2

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
void swap(int &a, int &b){
    int temp = a; 
    a = b; 
    b = temp;
}
void giamDan(int a[], int n){
    for(int i = 0; i < n-1; i++){

        for (int j = i+1; j<n; j++){

            if(a[i]<a[j]){
                swap(a[i], a[j]);
            }
        }
    }
}
int Max_2(int a[], int n){
    giamDan(a, n);
    return a[1];
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
    //
    printf("\nMax thu 2 la %d", Max_2(arr, n) );
    
}