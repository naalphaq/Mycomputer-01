// Xuat ra tat ca cac so chinh phuong nho hon n (n>1)
#include "stdio.h"
#include "math.h"

int KiemTraSoChinhPhuong(int x){
	//can 4 = 2 --> 4%2==0 ; 5 1.23 --> 5%1.23
	int kq;
	for(int j=1; j<=x; j++){
		kq = sqrt(x);
		if(x%kq!=0) return 0;
		else return 1;
	}
}
int main(){
	//khai bao bien 
	int n;
	//nhap&kiemtra n
	do{
	printf("Nhap n:");
	scanf("%d", &n);
	}
	while (n<1);
	//Resolve
	for(int i=1; i<=n; i++){
		int mn=KiemTraSoChinhPhuong(i);
		if (mn==1){
			printf("%d",i);
		}
	}	
}






