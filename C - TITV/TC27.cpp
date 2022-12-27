#include "stdio.h"
#include "math.h"
// So nguyen to la so lon hon 1 va chia 1 va chinh no
// Ham con 01: Xu ly du lieu 01
int Kiem_tra_SNT(int x){
	if (x<=1){
		return 0;// Neu dk dung ngung luon k thuc hien tiep dong lenh tiep theo
	}
	for (int i=2; i<=x-1; i++){
		if(x%i==0){
			return 0;// Neu dung dk nay ngung luon
		}
	}
	return 1;
	}	
int main(){
	int n;
	printf("Nhap gia tri n: ");
	scanf("%d", &n);
	int kt= Kiem_tra_SNT(n);
	if(kt==1){
		printf("\nSo nguyen to");
	}else{
		printf("\nKhong phai so nguyen to");
	}
}


