#include "stdio.h"
//Khai bao bien global
int a[100];
int n; 
//n nam ngoai ham roi nen khong co dien vao
void nhapMang(int x[100], int &n){	
	printf("Nhap vao so luong phan tu: ");
	scanf("%d", &n);
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
//Them 1 phan tu vao cuoi mang --> n thay doi + 1; available them
void themVaocuoiMang(int x[100], int &n, int them){
//Dieu kien kich thuoc mang
	int size = sizeof(x)/sizeof(x[0]);
	if(n==size){
	printf("Khong the them vao mang!");
	}
	x[n]=them;
	n++;
// 1 2 3 4 5 ==> n = 5
// x[n] = x[5] = them = 3 ==> n = 6 // Dia chi bien = n thi them vao 1 don vi roi
}

//Don het gia tri lui ve phia sau
void themVaoTruocMang(int x[100], int &n, int them ){
	int size = sizeof(x)/sizeof(x[0]);
	if(n==size){
	printf("Khong the them vao mang!");
	}
	n++;	// old n = 5 --> new n = 6 (0 1 2 3 4 5)
	for(int i=n-1; i>0; i--){
		x[i]= x[i-1];// vi tri moi 5 = gia tri dia chi bien cua 4
	}
	x[0]=them;
// 1 2 3 4 5 --> n = 5
// _ 1 2 3 4 5 --> n = 6
}
void themvaoVitriK(int x[100], int &n, int them, int k){
	int size = sizeof(x)/sizeof(x[0]);
	if(n==size){
	printf("Khong the them vao mang!");
	}
	// n = 5  --> 1 2 3 4 5 --> them=4; k=10 --> 1 2 10(2) 3 4 5
	// n tang len 1 don vi
	// tat ca vi tri sau k se doi ve phia sau if i == k thi gan them vao va gia tri sau doi ve sau 1 don vi
	n++;
	//doi gia tri hien co trong mang
	// 1 2 3 4 5 n=5 --> 1 2 99 3 4 5 n = 6 --> 6 5 4 = i 3
	// 1 2  3  4  5  --> 
	for(int i=n-1; i>k; i--){ // 
		x[i]=x[i-1];
	}
	x[k] = them;
}
int main(){
	nhapMang(a, n);
	xuatMang(a, n);
	printf("\n");
	themVaocuoiMang(a, n, 11);
	xuatMang(a, n);
	printf("\n");
	themVaoTruocMang(a, n, 12);
	xuatMang(a, n);
	printf("\n");
	themvaoVitriK(a, n, 99, 3);
	xuatMang(a, n);
}
