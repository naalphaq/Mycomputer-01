#include "stdio.h"
//Sap xep gia tri tang dan cua cac so trong Mang --> Hoan doi dia chi bien
void swap(int &a, int &b){//Hoa doi gia tri thong qua hoan doi dia chi bien cua 2 gia tri
	int change=a;
	a=b;
	b=change;
}
int tangdan(int x[], int n){	
	for (int i=0; i<n-1; i++){//So sanh va dien du lieu lan luoc
		int vitrinhonhat = i;
		for (int j=i+1; j<n; j++){
			if(x[j]<x[vitrinhonhat]){
				vitrinhonhat =j;
			}
		}
	swap (x[i], x[vitrinhonhat]);// vong lap --> dia chi 1 doi xong; tang len; dia chi 2 doi xong; tang len; dia chi 3 doi xong
	}	
}
int giamdan(int x[], int n){	
	for (int i=0; i<n-1; i++){//So sanh va dien du lieu lan luoc
		int vitrilonnhat = i;
		for (int j=i+1; j<n; j++){
			if(x[j]>x[vitrilonnhat]){
				vitrilonnhat =j;
			}
		}
	swap (x[i], x[vitrilonnhat]);// vong lap --> dia chi 1 doi xong; tang len; dia chi 2 doi xong; tang len; dia chi 3 doi xong
	}	
}
int printMang(int x[], int n){		
	for (int i=0; i<n; i++){
	printf("%d ", x[i]);
	}	
}
int main (){
	//Khai bao bien
	int n; 
	int a[100];
	//Nhap gia tri n va gia tri mang
	do{
		printf("Nhap gia tri n: ");
		scanf("%d", &n);
	}while (n<0);
	for (int i=0; i<n; i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);//Nhap tu ban phim vao
	}
	printf("Mang tang dan: ");
 	tangdan(a, n);
 	printMang(a, n);
 	
 	printf("\nMang giam dan: ");
 	giamdan(a, n);
 	printMang(a, n);
 	
 	
}
