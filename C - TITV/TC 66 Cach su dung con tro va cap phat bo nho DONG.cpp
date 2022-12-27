#include <stdio.h>
#include <stdlib.h>
int main(){	
	//Dung 1 mang truoc day ta thuong khai bao dai so luong phan tu cua 1 mang do --> int a[100] 
	//Nhung ta chi nhap 5 phan tu --> Du 
	//Thu 1: Cap phat bo nho --> malloc or calloc
	//Thu 2: Giai phong bo nho
	int n;
	printf("Nhap so luong phan tu: ");
	scanf("%d", &n);
	
	//int* ptr = (int*)malloc(n*sizeof(int));
	int* ptr = (int*)calloc(n, sizeof(int));
	if(ptr==NULL){
		printf("\nError: Khong cap phat duoc vung nho");
		return 0;//Huy Luon
	}
	//Nhap mang
	for(int i=0; i<n; i++){
		printf("a[%d]=",i);
		scanf("%d", ptr+i);
	}
	// Xuat mang
	printf("\nMang: ");
	for(int i=0; i<n; i++){
		printf("%d ", *(ptr+i));
	}	
	
	//Cap phat BO NHO DONG
	int x;
	printf("\nThay doi kich thuoc MANG: ");
	scanf("%d", &x);
	realloc(ptr, x);
	//Nhap mang
	for(int i=n; i<x; i++){
		printf("a[%d]=",i);
		scanf("%d", ptr+i);
	}
	// Xuat mang cap phat BO NHO DONG
	printf("\Mang: ");
	for(int i=0; i<x; i++){
		printf("%d ", *(ptr+i));
	}
	free(ptr);//Giai phong
}
