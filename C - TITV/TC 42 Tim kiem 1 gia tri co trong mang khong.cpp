// TIM KIEM GIA TRI NAO DO NHAP VAO CO TRONG MANG KHONG?
#include "stdio.h"
//Khai bao bien globle
int a[100];
int n, tk; 
//Nhap gia tri cho bien globle
void nhapMang(int x[100], int &n){
	printf("Nhap n: ");
	scanf("%d", &n);
	for(int i=0; i<n; i++){
	printf("\nx[%d] = ", x[i]);
	scanf("%d", &x[i]);
	}
}
void xuatMang(int x[100], int n){
	printf("Gia tri mang: ");
	for(int i=0; i<n; i++){
	printf("%d ", x[i]);
	}
}
//myself
/*
void timkiem(int x[100], int n, int &tk){//Co hay khong so do trong mang
	printf("\nSo tim kiem: ");
	scanf("%d", &tk);
	for (int i=0; i<n; i++){
		if(x[i]==tk){
			printf("\nCo so");
		}
	}
}
*/
//TITV

int timKiem(int x[100], int n, int tk){
	for (int i=0; i<n; i++){
		if(x[i]==tk){
			return 1;
		}
	}
	return 0;
}
void thuchienTimkiem(int x[100], int n){
	printf("\nNhap gia tri tim kiem: ");
	scanf("%d", &tk);
	
	int kq=timKiem(a, n, tk);
	if(kq==1){
		printf("\nTim thay!");
	}else{
		printf("\nKhong tim thay!");
	}
}


int main(){
	nhapMang(a, n);
	xuatMang(a, n);
	thuchienTimkiem(a, n);
}
