#include "stdio.h"
#include "stdlib.h"
int a[100], b[100], c[100];
int n1, n2;
void nhapMang(int x[100], int &n){
	do {
	printf("\nNhap vao so luong phan tu: ");
	scanf("%d", &n);
	}while (n<1);
	for (int i=0; i<n; i++){
		printf("Nhap x[%d]: ", i);
		scanf("%d", &x[i]);
	}
}
void xuatMang(int x[100], int n){	
	printf("\nGia tri mang: ");
	for(int i=0; i<n; i++){
		printf("%d ", x[i]);
	}
}
//a[5] = 1 2 3 4 5
//b[3] = 2 3 4
//available: n2 be hon n1 --> mang con
//for(mang 1) check mang 2 --> 
int kiemTraMangcon(int x1[100], int n1, int x2[100], int n2){
	int kq=0;
	if(n2<=n1){
		for(int i=0; i<n1; i++){
		if(x1[i]==x2[0]){
			int j=0;
			for(;j<n2; j++){
				if(x1[i+j]!=x2[j]){
					break;
				}
			}
			if(j==n2)
				kq=1;
		}
		
		}
	}
	return kq;
}
int main(){
	//Mang Chinh
	nhapMang(a, n1);
	xuatMang(a, n1);
	printf("\n-----------");
	nhapMang(b, n2);
	xuatMang(b, n2);
	int kq = kiemTraMangcon(a, n1, b, n2);
	if(kq==1){
		printf("\nham b la ham con cua a");
	}else{
		printf("\nmang b KHONG phai ham con cua a");
	}
}
