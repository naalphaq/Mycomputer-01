#include "stdio.h"
void swap(int &a, int &b){
	int change = a;
	a=b;
	b=change;
}
void tangdan(int x[], int n){	
	for (int i=0; i<n-1; i++){
		for (int j=i+1; j<n; j++){
			if(x[j]<x[j]){
				swap (x[i], x[j]);
			}
		}
	}	
}
void printMang(int x[], int n){		
	for (int i=0; i<n; i++){
	printf("%d ", x[i]);
	}	
}
int main(){
	int n; 
	int a[100];
	do{
		printf("Nhap gia tri n: ");
		scanf("%d", &n);
	}while (n<0);
	for (int i=0; i<n; i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	printf("Mang tang dan: ");
 	tangdan(a, n);
 	printMang(a, n);
 	return 0;
}
