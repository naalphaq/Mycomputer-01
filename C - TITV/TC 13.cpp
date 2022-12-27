#include "stdio.h"
int main(){
	//Khai bao bien xem in ra man hinh a la so chan hay so le
	int a;
	
	printf("Nhap gia tri a: ");
	scanf("%d",&a);
	
	if(a%2==0){
		printf("a la so chan");
	}else{
		printf("a la so le");
	}
	
	}
