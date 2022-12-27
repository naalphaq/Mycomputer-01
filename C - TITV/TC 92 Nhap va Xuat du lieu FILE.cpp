//Nhap va xuat du mang tu FILE
#include "stdio.h"
void nhapMang(char x1[],int &n){
	do{
	printf("\nNhap phan tu mang n: ");
	scanf("%d", &n);
	}while(n<0);
	for(int i=0; i<n; i++){
		printf("a[%d] = ", i);
		scanf("%d", x1[i]);
	}
}
void xuatMang(char x1[], int n){
	for(int i=0; i<n; i++){
		printf("a[%d] = %d", x1[i]);
	}
}
int main(){
	char s1[100];
	int n;	
	nhapMang(s1, n);
	xuatMang(s1, n);
}
