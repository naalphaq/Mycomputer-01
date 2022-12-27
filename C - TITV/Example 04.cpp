#include "stdio.h"
// FALSE

//So chan & chia het cho 3 --> xuat ra ket qua lien tuc so do  ra man hinh
// a[i] = x --> kiem tra x%2 va x%3 
int Sccba(int x){
	if (x%2==0 && x%3==0);
	{
		return 1;
	}
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
	if (Sccba(a[i])){
		int kq = Sccba(a[i]);
		if(kq==1){
		printf("%d ", a[i]);
		}
	}
}
}
