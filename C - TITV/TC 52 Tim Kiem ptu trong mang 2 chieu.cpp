#include "stdio.h"
int a[100][100];
int m, n;

void nhapMang2chieu(int x[100][100], int &m, int &n){
	do{
		printf("Nhap so hang m va so cot n: ");
		scanf("%d%d", &m, &n);
	}while(m<0 || n<0);
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("\na[%d][%d] = ", i, j);
			scanf("%d", &x[i][j]);
		}
	}
}
void xuatMang2chieu(int x[100][100], int m, int n){
	printf("\nMang: \n");
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("%d\t", x[i][j]);
		}
		printf("\n");
	}
}
//Tim kiem ham con 1: nhap va xuat ket qua ham con 2: xu ly ktra
int timKiem(int x[100][100], int m, int n, int gtritK){
	int kq=0;//Vi ben duoi goi ham kq de tra ve lai nen int kq=0; hamcon = 1; 
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(x[i][j]==gtritK){
			return kq=1;
			}
		}
	}
	return kq;
}
void nhapvaxuatkqtK(int x[100][100], int m, int n){
//tim kiem du lieu nhieu lan --> nhap vao nhieu lan
	int luachon=0;
	do{
		//thuc hien lan 1
		int gtritK;
		printf("\nNhap du lieu tim kiem: ");
		scanf("%d", &gtritK);
		int kq=timKiem(a, m, n, gtritK);
		if(kq==1){
			printf("\nTim duoc so %d trong mang 2 chieu\n", gtritK);
		}else{
			printf("\nKHONG tim duoc so %d trong mang 2 chieu\n", gtritK);
		}
		//Nhan cu phap de thuc hien lan 2
		printf("\nNhap so bat ky de TIEP TUC tim kiem, nhap 0 de thoat: ");
		scanf("%d", &luachon);
	}while(luachon!=0);
	
	
}
int main(){
	nhapMang2chieu(a, m, n);
	xuatMang2chieu(a, m, n);
	nhapvaxuatkqtK(a, m, n);
	
}
