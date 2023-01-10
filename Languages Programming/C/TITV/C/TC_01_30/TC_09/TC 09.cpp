#include "stdio.h"
int main(){
	//Khai bao bien
	int a, b, min, max;
	//Nhap du lieu
	printf("Gia tri a: ");
	scanf("%d",&a);
	printf("\nGia tri b: ");
	scanf("%d", &b);
	//Xu ly du lieu
	min = (a<b)?a:b;
	max = (a>b)?a:b;
	printf("MIN = %d", min);
	printf("\nMAX =%d", max);
	}
