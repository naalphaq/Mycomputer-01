#include <stdio.h>
const int Max_size = 100;
void nhapMang(int a[], int n ){
    for (int i = 0; i < n; i++){
        printf("\na[%d] = ", i );
        scanf("%d", &a[i]);
    }
}
void xuatMang(int a[], int n){
    for(int i = 0; i < n; i++){
        printf("%d\t", a[i]);
    }
}
int sumOdd(int a[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){// sum = 1 3 5 7 = 16
        if(a[i] % 2 != 0){
            sum += a[i];
        }
    }
    return sum;
}
//tong tat ca so chan trong Mang
int sumEven(int a[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){// sum = 1 3 5 7 = 16
        if(a[i] % 2 != 0){
            continue;//Bo qua va tien den lenh tiep theo
        }
        sum += a[i];//Cong so chan
    }
    return sum;
}
int main(){
    int n;
    int arr[Max_size];
    do{
        printf("\nNhap n =  ");
        scanf("%d", &n);
    }while(n<=0 || n > Max_size);
    nhapMang(arr, n);
    xuatMang(arr, n);
    //sumOdd
    printf("\nSum of so le trong mang a[%d] = %d", n, sumOdd(arr, n));
    //sumEven
    printf("\nSum of so le trong mang a[%d] = %d", n, sumEven(arr, n));
    return 0;
}