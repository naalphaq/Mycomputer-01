// 1 3 5 8 7 n = 5
// 1 so sanh lan luot 3 5 8 7
// doi gia tri 1 voi ...xong
// hoan doi vi tri tiep theo 
// 8 3 5 1 7 
// 8 7 5 1 3
// 8 7 5 1 3
// 8 7 5 3 1
#include "stdio.h"
int a[100];
int n;
void nhapMangMotchieu(int x[100], int &n){
	// n>0 neu nhap sai yeu cau nhap lai
	do{
		printf("Nhap n:");
		scanf("%d", &n);
	}while(n<0);
	for(int i=0; i<n; i++){
		printf("a[%d] = ", i);
		scanf("%d", &x[i]);
	}
}
void xuatMangMotchieu(int x[100], int n){
	printf("\nMang 1 chieu: ");
	for(int i=0; i<n; i++){
		printf("%d ", x[i]);
	}
}
void sapXepgiamdanMang(int x[100], int n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){// thuc hien cho den khi nao j khong con be hon n NHAY RA NGOAI TANG i len 1 don vi 
		// thuc hien lien tiep cho den khi i khong con be hon n-1
			if(x[j]>x[i]){
			int temp=x[i];
			x[i]=x[j];
			x[j]=temp;
			}
		}
	}
}
int main(){
	nhapMangMotchieu(a, n);
	xuatMangMotchieu(a, n);
	printf("\n------");
	sapXepgiamdanMang(a, n);
	xuatMangMotchieu(a, n);
}


