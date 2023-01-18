#include "stdio.h"
// Nhap chuoi va Xuat chuoi
int main(){
	int tuoi;
	char ten[500];//Lang phi tai nguyen
	printf("Nhap tuoi cua ban: ");
	scanf("%d", &tuoi);
	getchar();
	
	
	printf("Nhap ten: ");
	fgets(ten, sizeof(ten), stdin);
	printf("\nTen cua ban la: ");
	puts(ten);
}
