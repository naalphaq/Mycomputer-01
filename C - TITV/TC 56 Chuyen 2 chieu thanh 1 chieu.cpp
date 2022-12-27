#include "stdio.h"
int a[100][100];
int b[1000];
int m, n, k;

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
void chuyeMatranTHANHmangMotchieu(int x[100][100], int m, int n, int y[1000], int &k){
	//Lay du lieu LAN LUOC(+1) mang 2 chieu truyen LAN LUOC (+1) BIEN (THAY DOI) --> z vao mang 1 chieu 
	int z=0;
	k=m*n;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			y[z]= x[i][j];
			z++;
		}
	}
}
void xuatMangmotchieu(int y[1000], int k){
	for(int i=0; i<k; i++){
		printf("%d ", y[i]);
	}
}
int main(){
	nhapMang2chieu(a, m, n);
	xuatMang2chieu(a, m, n);
	chuyeMatranTHANHmangMotchieu(a, m, n, b, k);
	xuatMangmotchieu(b, k);
	
}
