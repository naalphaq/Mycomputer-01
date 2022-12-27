#include "stdio.h"
//Max, min mang 1 chieu

int gtMax(int x[], int n){
	// Goi max la gia tri dau tien cua mang roi sau do so sanh lan luot --> return max;
	int Max=x[0];
	for (int i=0; i<n; i++){
		if (Max<x[i]){
			Max=x[i];
		}
	}
	return Max;
}
int gtMin(int x[], int n){
	// Goi max la gia tri dau tien cua mang roi sau do so sanh lan luot --> return max;
	int Min=x[0];
	for (int i=0; i<n; i++){
		if (Min>x[i]){
			Min=x[i];
		}
	}
	return Min;
}
int main (){
	//Khai bao bien
	int n; 
	int a[100];
	//Nhap gia tri n va gia tri mang
	do{
		printf("Nhap gia tri n: ");
		scanf("%d", &n);
	}while (n<0);
	for (int i=0; i<n; i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);//Nhap tu ban phim vao
	}
	
	printf("\nGia tri Max cua mang: %d", gtMax(a, n));
	printf("\nGia tri Mix cua mang: %d", gtMin(a, n));
	
}
