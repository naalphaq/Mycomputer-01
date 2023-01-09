#include "stdio.h"
//Khai bao bien global
int a[100];
int n; 

void nhapMang(int x[100], int &n){	
	printf("Nhap vao so luong phan tu: ");
	scanf("%d", &n);
	for (int i=0; i<n; i++){
		printf("Nhap x[%d]: ", i);
		scanf("%d", &x[i]);
	}
}
void xuatMang(int x[100], int n){	
	printf("\nGia tri mang: ");
	
	for(int i=0; i<n; i++){
		printf("\n%d ", x[i]);
	}
}
// Ham con xu ly tac vu --> xuat lai mang moi sau khi xu ly
void xoaViTri(int x[100], int &n, int vitri){
	
	for (int i=vitri; i<n-1 ; i++){// i chay tai vi tri do luon xu ly nhanh gon
		x[i]=x[i+1];
	}
	n--;// loai bo 1 vi tri thi n giam 1 don vi --> Truyen nguoc lai n global
}
// Xoa gia tri trong mang va xuat lai mang moi (dk)
void XulyGiatridk(int x[100], int &n){//&n ket thua thay doi gia tri n
	int gt;
	printf("\nGia tri can xoa: ");
	scanf("%d", &gt);
	for(int i=0; i<n; i++){
		if(x[i]==gt){
			xoaViTri(x, n, i);
		}
	}
}
int main(){
	nhapMang(a, n);
	xuatMang(a, n);
	XulyGiatridk(a, n);
	xuatMang(a, n);
}
