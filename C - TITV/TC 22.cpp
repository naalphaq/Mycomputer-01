#include "stdio.h"
int main(){
	//Tinh tong cong don tu 1 den 9
	/*
	int tong = 0;
	for(int i=0; i<=10;i++){
		tong = tong+i;
	}
	printf("Tong gia tri cong don = %d", tong);
	}
	*/
	
	/*
	
	//Khong dung cach nay cho viec biet 2 diem dau va cuoi gia tri
	int tong =0, i = 0;
	while(i<=10){
		tong = tong +i;
		i++;
	}
	printf("\nTong gia tri cong don theo phep tinh while = %d", tong);
	*/
	
	
	// Tinh tong gia tri cong don tu tang dan tu khoang gia tri a va b bat ky cho den khi a<=b
	float a, b;
	float tong = 0;
	
	printf("Gia tri a = ");
	scanf("%f",&a);
	printf("\nGia tri b = ");
	scanf("%f",&b);
	
	if(a<=b){
	printf("Nhap dung gia tri a va b ");
	while(a<=b){
		tong = tong + a;
		a++;
	}
	printf("\nTong = %.2f", tong);
	}else {
		printf("Nhap sai gia tri a va b");
	}
}
	
