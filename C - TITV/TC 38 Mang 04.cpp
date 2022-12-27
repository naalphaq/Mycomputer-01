#include "stdio.h"
#include "math.h"
//So chan & chia het cho 3 --> xuat ra ket qua lien tuc so do  ra man hinh
// a[i] = x --> kiem tra x%2 va x%3 
int Sccba(int x){
	return (x%2==0 && x%3==0);
}
// Xuat ra so trong mang la so nguyen to (so lon hon 1, va chia het cho chinh no (khong co can bac 2))
int ktraSNT (int x){
	if (x<=1){
	return 0;//Sai
	} 
	for(int i=2; i<=sqrt(x); i++){ // So nao khong thoa man dieu kien la SNT 2 --> i= 2; i<=can 2 la sai --> 2 SNT
		if(x%i==0){
			return 0;//Sai chia het cho chinh no
		}
	}
	return 1;
}
int main(){
	int a[100];
	int n, kq;
	do{
		printf("Nhap vao so luong phan tu (0<n<100): ");
		scanf("%d", &n);
	}while(n<1 || n>100);
	
	for (int i=0; i<n; i++){
		printf("\na[%d] = ", i);
		scanf("%d", &a[i]);
		}
	//
	printf("So chia het cho 3 va so chan mang a[]: ");
	for (int i=0; i<n; i++){
	//Truyen du lieu tung gia tri cua mang a[] lien tuc gan vao x
	if (Sccba(a[i])){
		printf("%d ", a[i]);
	}
	}
	printf("\nSo nguyen to trong mang a[]: ");
	for (int i=0; i<n; i++){
		if (ktraSNT(a[i])){
		 printf("%d ", a[i]);
	}
}
}
