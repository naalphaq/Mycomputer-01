#include "stdio.h"
// #include "consio.h"
#include "stdlib.h"
int a[100], b[100], c[100];
int n, n1, n2;
void nhapMang(int x[100], int &n){
	do {
	printf("Nhap vao so luong phan tu: ");
	scanf("%d", &n);
	}while (n<1);
	for (int i=0; i<n; i++){
		printf("Nhap x[%d]: ", i);
		scanf("%d", &x[i]);
	}
}
void xuatMang(int x[100], int n){	
	printf("\nGia tri mang: ");
	for(int i=0; i<n; i++){
		printf("%d ", x[i]);
	}
}
//mang b va mang c mang trong co bien la: &n_1, &n_2
void tachMang(int x[100], int n, int x1[100], int &n_1, int x2[100], int &n_2){
	
	int i1=0; n_1=0; //dien lan luoc gia tri vao mang 1, mang 2 --> tang dan dan vi tri bien neu dung, tang 
	int i2=0; n_2=0; //Ban dau gia tri dien vao la 0 va n=0 chua dem
	//mang 1: gia tri Chan mang 2: gia tri Le
	for(int i=0; i<n; i++){
		if(x[i]%2==0){//dien gia tri o dau tieng mang 1 la x[i]
		x1[i1]=x[i];
		i1++;//Dien xong roi tang len dien o thu 2 (lap)
		n_1++;//Dem gia tri n_1 thong qua so gia tri dien vao
	}else{//So le dien vao mang 2
		x2[i2]=x[i];
		i2++;
		n_2++;
	}
	}	
}
int main(){
	//Mang Chinh
	nhapMang(a, n1);
	xuatMang(a, n1);
	tachMang(a, n, b, n1, c, n2);
	xuatMang(b, n1);
	xuatMang(c, n2);
}