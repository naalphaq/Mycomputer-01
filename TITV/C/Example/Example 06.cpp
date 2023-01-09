#include "stdio.h"
int n1, n2;

void nhapDL(int &n1, int &n2){
	printf("Gia tri nhap n1: ");
	scanf("%d", &n1);
	printf("\nGia tri nhap n2: ");
	scanf("%d", &n2);
}
void xuatDL(int n1, int n2){
	printf("\nGia tri xuat n1: %d", n1);
	printf("\nGia tri xuat n2: %d", n2);
}
void changeDL(int &n1, int &n2){
	int change = n1;
	n1=n2;
	n2=change;
	printf("\nGia tri n1 moi: %d", n1);
	printf("\nGia tri n2 moi: %d", n2);
}
int main(){
	nhapDL(n1, n2);
	xuatDL(n1, n2);
	changeDL(n1, n2);
}






