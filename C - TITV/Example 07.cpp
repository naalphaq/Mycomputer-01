//In ra phan tu nho thu 2 trong Mang
//Hieu don gian tim nho nhat xong bo no di tiep tuc tim nho thu 2
//Sap xep cai mang do tang dan lay so nho thu 2

#include "stdio.h"
int a[100];
int n;
void nhapMang(int x[100], int &n){
		printf("Nhap gia tri phan tu n: ");
		scanf("%d", &n);
		for(int i=0; i<n; i++){
			printf("\na[%d] = ", i);
			scanf("%d", &x[i]);
		}
}
void xuatMang(int x[100], int n){
	printf("Gia tri cua Mang: ");
	for(int i=0; i<n; i++){
	printf("%d ", x[i]);
	}
}
//Hoan doi dia chi bien --> thay doi gia tri
void swap(int &a, int &b){
	int change = a; 
	a = b; 
	b = change;
}
void tangDan(int x[100], int n){
	int vitrinhonhat;
	for(int i=0; i<n; i){
		for(int j=i+1; j<n; j++){
			if(x[i]>x[j]){
				vitrinhonhat=j;
			}
		}
		swap(x[i], x[vitrinhonhat]);
	}
}
int main(){
	nhapMang(a, n);
	xuatMang(a, n);
	tangDan(a, n);
	printf("\nGia tri mang sap xep tang dan: ");
	xuatMang(a, n);
	
}
