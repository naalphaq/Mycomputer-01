#include "stdio.h"
int main(){
	// Gai he phuong trinh ax + b = 0
	int a, b; // loi day do ban dau cho a, b so nguyen nen duoi phai ep kieu du lieu
	float x; //float a, b, x;
	printf("Nhap gia tri a = ");
	scanf("%d",&a);
	printf("\nNhap gia tri b = ");
	scanf("%d",&b);
	if(a!=0){
		x= (float)-b/a;
		printf("Phuong trinh co 1 nghiem = %.2f",x);
	}else if(b==0){
		printf("Phuong trinh co vo so nghiem");
	}else{
		printf("Phuong trinh vo nghiem");
	}
	}
	
