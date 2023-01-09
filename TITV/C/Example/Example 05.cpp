#include "stdio.h"
int a[100];
int n;//Nhap gia tri tu ban phim gan vao dia chi bien cua n --> co gia tri n

void nhapMang(int x[100], int &n){
	printf("Nhap phan tu n: ");
	scanf("%d", &n);//Nhap du lieu tu ban phim %d --> gan vao dia chi bien &n --> moi co gtri
	
	for(int i=0; i<n; i++){
		printf("a[i] = ", i);
		scanf("%d", &x[i]);
	}	
}

void xuatMang(int x[100], int n){
	printf("Gia tri cua mang: ");
	for(int i=0; i<n; i++){
		printf("%d ",x[i]);
	}	
}
int main(){
	nhapMang(a, n);
	xuatMang(a, n);
}
