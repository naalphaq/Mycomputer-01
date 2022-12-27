//Nhap va xuat mang 2 chieu
#include "stdio.h"
int a[100][100];
int m, n; 

void nhapMang(int x[100][100], int &m, int &n){
	do{
		printf("\nNhap so hang m va so cot n: ");
		scanf("%d%d", &m, &n);
	}while (m<0 || n<0);
	for (int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &x[i][j]);
		}
	}
}
void xuatMang(int x[100][100], int m, int n){
	printf("Mang xuat: ");
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("%d\t", x[i][j[j]);
		}
	}

}
int main(){
	nhapMang(a)
	
}
