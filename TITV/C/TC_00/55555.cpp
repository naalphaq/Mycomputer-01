#include <stdio.h>
int main(){
	int a[100];
	int n;
	printf("Nhap so luong phan tu: ");
	scanf("%d", &n);
	//Nhap mang
	for(int i=0; i<n; i++){
		printf("a[%d]=",i);
		scanf("%d", &a[i]);
	}
	// Xuat mang
	for(int i=0; i<n; i++){
		printf("%d ", a[i]);
	}	
}
