#include "stdio.h"
#include "stdlib.h"

int main(){
	//Mang --> phan tu va gia tri
	int n;//number
	int *pointer;
	printf("Nhap so luong phan tu:");
	scanf("%d", &n);
	//01
	pointer = (int*)malloc(n*sizeof(int));//5*4byte=20 byte du
	//02: warming
	if(pointer==NULL){//thieu dau = --> cap phat 1 lan
		printf("\nKhong cap phat duoc vung nho");
	}else{
		printf("\nCap phat duoc vung nho");
	}
	//input values in Array
	for(int i=0; i<n; i++){
		printf("\na[%d] = ", i);
		scanf("%d", pointer+i);
	}
	//03
	free(pointer);
}
