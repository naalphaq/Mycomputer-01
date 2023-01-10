#include "stdio.h"
#include "stdlib.h"


void nhapMang(int *arr, int n){
	for (int i=0; i<n; i++){
		printf("Nhap arr[%d]: ", i);
		scanf("%d", arr+i);
	}
}
void xuatMang(int *arr, int n){	
	printf("\nGia tri mang: ");
	
	for(int i=0; i<n; i++){
		printf("\n%d ", *(arr+i));
	}
}
// Ham con xu ly tac vu --> xuat lai mang moi sau khi xu ly
void xoaViTri(int *arr, int &n, int vitri){
	
	for (int i=vitri; i<n-1 ; i++){// i chay tai vi tri do luon xu ly nhanh gon
		*(arr+i)=*(arr+i+1);
	}
	n--;// loai bo 1 vi tri thi n giam 1 don vi --> Truyen nguoc lai n global
}
// Xoa gia tri trong mang va xuat lai mang moi (dk)
void XulyGiatridk(int *arr, int &n){//&n ket thua thay doi gia tri n
	int gt;
	printf("\nGia tri can xoa: ");
	scanf("%d", &gt);
    //
	for(int i=0; i<n; i++){
		if(*(arr+i)==gt){
			xoaViTri(arr, n, i);
		}
	}
}
int main(){
	int n;
	do{
		printf("Nhap vao so luong phan tu: ");
		scanf("%d", &n);
	}while(n<0);
	//
	int* arr = (int*)malloc(n*sizeof(int));
	//
	if(arr == NULL){
		printf("No the memory");
		exit(0);
	}
	nhapMang(arr, n);
	xuatMang(arr, n);
	XulyGiatridk(arr, n);
	xuatMang(arr, n);
	//
	free(arr);
	
}
