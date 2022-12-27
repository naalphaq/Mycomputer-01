#include "stdio.h"
int main(){
	// Nhap tung gia tri vao mang 
	//Khai bao du lieu mang
	int a[100];
	int n;
	//xu ly du lieu dau vao
	do {
		printf("Mang co n gia: ");
		scanf("%d", &n);
	}while(n<0||n>100);
	//Nhap du lieu cho mang
	for(int i=0; i<n; i++){
		printf("a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	//xuat du lieu cua mang
	for(int i=0; i<n; i++){
		printf("\na[%d]: %d", i, a[i]);
	}
	//Tong gia tri cua mang a[100]
	int tong = 0;
	for(int i=0; i<n; i++){
		tong+=a[i];
	}
	printf("\nTong gia tri mang a[100]: %d", tong);
	//Lay ra gia tri max trong mang
	int max=0;
	for(int i=0; i<n; i++){
		if(max<a[i]){
			max=a[i];
		}
	}
	printf("\nGia tri max: %d", max);
}
