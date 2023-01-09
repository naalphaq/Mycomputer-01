#include "stdio.h"
void tangdan(int x[], int n){	
	for (int i=0; i<n-1; i++){
		for (int j=i+1; j<n; j++){
			if(x[j]<x[i]){
				int temp = x[i];
				x[i] = x[j];
				x[j] = temp;
			}
		}
	}	
}
void inArray(int x[], int n){
	for (int i=0; i<n; i++){
		printf("a[%d] = ", i);
		scanf("%d", &x[i]);
	}
}
void outArray(int x[], int n){		
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
	//
	inArray(a, n);
	outArray(a, n);
	//
	printf("\nMang tang dan: ");
 	tangdan(a, n);
 	outArray(a, n);
 	return 0;
}
