#include "stdio.h"
//Trung binh cong cac phan tu trong mang
float trungbinhCong(int x[], int n){
	int tong=0, tbc=0;
	for(int i=0; i<n; i++){
		tong+=x[i];
	}
	tbc=tong/n;
	return tbc;
}
//Trung binh cong cac phan tu so duong trong mang 
//Khong co so duong nao luon
float trungbinhCongsoduong(int y[], int n){
	float tong=0, tbc=0;
	int ptuduong=0;
	for(int i=0; i<n; i++){
		if(y[i]>0){
			tong+=y[i];
			ptuduong++;
		}	
	}
	tbc=tong/ptuduong;
	return ptuduong>0?tbc:-1;//ptuduong dem duoc 1 so duong thi tbc nguoc lai -1 (k co)
}
int main(){
	int a[100];
	int n;
	do{
		printf("Nhap phan tu n (0<n<100) = ");
		scanf("%d", &n);
	}while(n<0 || n>100);
	
	for(int i=0; i<n; i++){
		printf("\na[%d]=", i);
		scanf("%d", &a[i]);
	}
	printf("\nGia tri trung binh cong: %.2f",trungbinhCong(a, n));//Luu y: %.2f
	float tbcsd = trungbinhCongsoduong(a, n);
	
	if (tbcsd<0){
		printf("\nKhong co so duong nao");
	}else{
		printf("\nGia tri trung binh cong Duong: %.2f", tbcsd);//Luu y: %.2f
	}
}
