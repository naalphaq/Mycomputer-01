//Cho danh sach ten va sap xep chieu tang dan cac ten theo ban chu cai
//so sanh 2 chuoi do xem 
#include "stdio.h"
#include "string.h"

void xoaXuongDong(char x[]){//A1BC\n
	size_t len = strlen(x);
	if(x[len-1]=='\n'){
		x[len-1]='\0';
	}
}
void nhap(char x1[], int &n){
	printf("\nNhap phan tu n: ");
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		fgets(x1, sizeof(x1), stdin);
		xoaXuongDong(x);
	}
}
void sapXepDanhSachSinhVienTheoTen(char ds[], int n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(strcmp(ds[i], ds[j].ten)<0){
				SV temp;
				temp = ds[i];
				ds[i] = ds[j];
				ds[j] = temp;	
			}
		}
	}
}
int main(){
	char Ten[100];
	int n;
	
	
	
}
