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
//Gia tri Max trong mang 2 chieu
int timMax(int x[100][100], int m, int n){
	int maxgiasu=x[0][0];//a[0][0] gia tri hang 0 cot 0 la = gan vao maxgiasu
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(x[i][j]>maxgiasu){
				maxgiasu=x[i][j];
			}
		}
	}
	return maxgiasu;
}
//Gia tri Min trong mang 2 chieu
int timMin(int x[100][100], int m, int n){
	int mingiasu=x[0][0];//a[0][0] gia tri hang 0 cot 0 la = gan vao maxgiasu
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(x[i][j]<mingiasu){
				mingiasu=x[i][j];
			}
		}
	}
	return mingiasu;
}
int main(){
	nhapMang2chieu(a, m, n);
	xuatMang2chieu(a, m, n);
	printf("Gia tri max trong mang 2 chieu: %d", timMax(a, m, n));
	printf("\n-------");
	printf("\nGia tri min trong mang 2 chieu: %d", timMin(a, m, n));
}
