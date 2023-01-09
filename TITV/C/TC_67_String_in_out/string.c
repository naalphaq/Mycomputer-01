#include "stdio.h"
// Nhap chuoi va Xuat chuoi
int main(){
	char ten[500];
	//WAY O1
	printf("Nhap ten: ");
//	scanf("%s", ten); // Kieu char khong can &ten
	
//	printf("\nTen cua ban la: ");
//	printf("%s", ten);
	fgets(ten, sizeof(ten), stdin);
	printf("\nTen cua ban la: ");
	puts(ten);
}
