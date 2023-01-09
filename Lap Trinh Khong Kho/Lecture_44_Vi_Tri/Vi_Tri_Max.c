

#include <stdio.h>
const int Max_size = 100;

void nhapMang(int a[], int n){
    for(int i = 0; i < n; i++){
        printf("\na[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
void xuatMang(int a[], int n){
    for(int i = 0; i < n; i++){
        printf("%d\t", a[i]);
    }
}
int viTriMax(int a[], int n){
    int max = a[0];
    int vitri = 0;
    for(int i = 1; i < n; i++){
        if(a[i] > max){
            vitri = i;
        }
    }`
    return vitri+1;
}
int main(){
    int n;
    int arr[Max_size];
    do { 
    printf("\nNhap n = ");
    scanf("%d", &n);
    }while(n< 0 || n > Max_size);
    //
    nhapMang(arr, n);
    //
    xuatMang(arr, n);
    //Vi tri so lon nhat trong Mang 
    printf("\nVi tri gia tri so lon nhat trong mang arr[%d] la o so %d", n, viTriMax(arr, n));
}