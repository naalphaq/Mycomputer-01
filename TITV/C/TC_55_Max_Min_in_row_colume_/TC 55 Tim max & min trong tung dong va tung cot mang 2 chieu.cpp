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
//Gia tri Max trong mang 2 chieu trong tung hang 
int timMax_dong(int x[100][100], int m, int n, int dong){
	int maxgiasu=x[dong][0];
		for(int i=1; i<n; i++){
			if(x[dong][i]>maxgiasu){
				maxgiasu=x[dong][i];
			}
		}
	return maxgiasu;
}
//Gia tri Min trong dong nhap tu ban phim 
int timMin_dong(int x[100][100], int m, int n, int dong){
	int mingiasu=x[dong][0];//a[0][0] gia tri hang 0 cot 0 la = gan vao maxgiasu
		for(int i=1; i<n; i++){
			if(x[dong][i]<mingiasu){
				mingiasu=x[dong][i];
			}
		}
	return mingiasu;
}
//Gia tri Max trong mang 2 chieu trong tung COT 
int timMax_cot(int x[100][100], int m, int n, int cot){
	int maxgiasu=x[0][cot];
		for(int i=1; i<m; i++){
			if(x[i][cot]>maxgiasu){
				maxgiasu=x[i][cot];
			}
		}
	return maxgiasu;
}
//Gia tri Min trong dong nhap tu ban phim 
int timMin_cot(int x[100][100], int m, int n, int cot){
	int mingiasu=x[0][cot];//a[0][0] gia tri hang 0 cot 0 la = gan vao maxgiasu
		for(int i=1; i<m; i++){
			if(x[i][cot]<mingiasu){
				mingiasu=x[i][cot];
			}
		}
	return mingiasu;
}
int main(){
	nhapMang2chieu(a, m, n);
	xuatMang2chieu(a, m, n);
	
	//printf("Gia tri max trong mang 2 chieu: %d", timMax_dong(a, m, n, 0));
	//printf("\n-------");
	//printf("\nGia tri min trong mang 2 chieu: %d", timMin_dong(a, m, n, 0));
	
	printf("Gia tri max trong mang 2 chieu: %d", timMax_cot(a, m, n, 0));
	printf("\n-------");
	printf("\nGia tri min trong mang 2 chieu: %d", timMin_cot(a, m, n, 0));
}
