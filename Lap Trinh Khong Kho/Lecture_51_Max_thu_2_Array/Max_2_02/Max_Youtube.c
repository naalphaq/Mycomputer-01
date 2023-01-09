#include <stdio.h>
/*
    Tìm số lớn thứ 2 ở trong mảng
*/
#define MAX_SIZE 100 // sức chứa tối đa

void NhapMang(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("Nhap arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

void XuatMang(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("\narr[%d] = %d", i, arr[i]);
    }
}

/*
    C1. Sắp xếp mảng giảm dần => Số lớn thứ 2 là arr[1]
    C2. Tìm đồng thời số lớn nhất và số lớn thứ 2
*/
/*-------------------------*/
/*
    C1. 
*/
void swap(int &a, int &b){
    int tg = a;
    a = b;
    b = tg;
}

void SapXep(int a[], int n){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] < a[j]){
                swap(a[i], a[j]);
            }
        }        
    }
}

int FindBySort(int a[], int n){
    SapXep(a, n);
    return a[1];
}

/*-------------------------*/
/*
    C2. 
    - Nếu có 1 số >= firstMax:
        secondMax = firstMax;
        firstMax = số lớn nhất mới tìm được
    - Nếu có 1 số chỉ > secondMax:
        secondMax = số lớn hơn mới tìm được
*/
int FindByLoop(int a[], int n){
    int firstMax, secondMax;
    if (a[0] > a[1]){
        firstMax = a[0];
        secondMax = a[1];
    }else{
        firstMax = a[1];
        secondMax = a[0];
    }
    for(int i = 2; i < n; i++){
        if(a[i] >= firstMax){
            secondMax = firstMax;
            firstMax = a[i];
        }else if (a[i] > secondMax){
            secondMax = a[i];
        }
    }
    return secondMax;
}


int main(){
    int arr[MAX_SIZE];

    int n; // số lượng phần tử của mảng
    // Kiểm tra số lượng phần tử là số dương + nhỏ hơn MAX_SIZE
    do{
        printf("Nhap n = ");
        scanf("%d", &n);
    }while(n <= 1 || n > MAX_SIZE);

    // Nhập mảng
    NhapMang(arr, n);

    // Xuất mảng
    XuatMang(arr, n);

    printf("\nSo lon thu 2 theo cach tang dan la: %d", FindBySort(arr, n));
    //
    printf("\nSo lon thu 2 theo cach max 1 va max 2 la %d", FindByLoop(arr, n));
}