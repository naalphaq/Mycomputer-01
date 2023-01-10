#include "stdio.h"
int main(){
	// Suy nghi --> in ket qua
	int a; 
	printf("Gia tri a nhap vao:");
	scanf("%d",&a);
	printf("\nGia tri a tang len 1 don vi: %d", ++a);
	// Minh bach: Dong lenh --> in ket qua
	int b;
	printf("\nGia tri b nhap vao:");
	scanf("%d",&b);
	b++;
	printf("\nGia tri b tang len 1 don vi:%d", b);
	}
