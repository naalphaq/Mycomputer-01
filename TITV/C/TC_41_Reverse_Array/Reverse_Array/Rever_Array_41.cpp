#include "stdio.h"
//Khai bao bien global
int a[100];
int n; 
//n nam ngoai ham roi nen khong co dien vao
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
void inNguocgtrimang(int x[100], int n){
	printf("\nGia tri mang dao nguoc: "); 
	for(int i=n-1; i>=0; i--){
		printf("\n%d", x[i]);
	}	
}
//Buoc trung giang doi gia tri swap(int &a, int &b)
void daoNguocmang(int x[100], int n){//doi 2 gia tri lien tuc thong qua doi doi dia chi bien
	printf("\nGia tri mang dao nguoc: ");
	for (int i=0; i<n/2; i++){
		//i la dia chi bien 1 va dia chi bien thu 2
		int temp = x[i];
		x[i]=x[n-i-1];
		x[n-i-1]= temp;
	}
}
int main(){
	nhapMang(a, n);
	xuatMang(a, n);
	//inNguocgtrimang(a, n);
	daoNguocmang(a, n);
	xuatMang(a, n);
}
