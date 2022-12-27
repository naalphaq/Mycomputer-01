#include "stdio.h"

//Nhap n, xuat ra gia tri fibonacci F(n) // Theo Lap trinh ham de quy

int fibonacci (int x){
	if(x==0){
		return 0;
	}else if(x==1){
		return 1;
	}else{
		return fibonacci(x-1)+fibonacci(x-2);
	}
}
int main(){
	int n, gt;
	do{
		printf("Nhap gia tri n: ");
		scanf("%d", &n);
	}
	while(n<0);
	gt = fibonacci(n);
	printf("Gia tri fibonacci %d: ", gt);
		
}
