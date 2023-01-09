#include "stdio.h"
//Tach mang 1 ra thang 2 mang a va b voi a la so chan va b so le
int a[100], b[100], c[200];
int n, n1, n2;

void nhapMang(int x[100], int &n){
	do{
	printf("Nhap so n: ");
	scanf("%d", &n);
	}while(n<1);
	for(int i=0; i<n; i++){
	printf("\na[i] = ", i);
	scanf("%d", &x[i]);
	}
}
void xuatMang(int x[100], int n){
	printf("\nGia tri mang: ");
	for(int i=0; i<n; i++){
	printf("%d ", x[i]);
	}
}
//mang 1: chan mang 2: le --> n chua co (truyen vao), gia tri chua co (i1, i2)
// b[n1] = 1 3 5 .... i0 i1 i2 

void truyendulieu(int x[100], int n, int x1[100], int &n_1, int x2[100], int &n_2){
	int i1=0; n_1=0;
	int i2=0; n_2=0;
	for (int i=0; i<n; i++){
		if(x[i]%2==0){
			x1[i1]=x[i];//Bat dau bang i1=0 dien 1 so tiep tuc dien tiep theo o thu 2
			i1++;
			n_1++;
		}else {
			x2[i2]=x[i];// ngu ne
			i2++;
			n_2++;
		}
	}
}
void tachMang(int x[100], int n, int x1[100], int &n_1,  int x2[100], int &n_2){
	int i1=0;  n_1=0;
	int i2=0;  n_2=0;
	for(int i=0; i<n; i++){
		if(x[i]%2==0){
			x1[i1]=x[i];
			i1++;
			n_1++;
		}else{
			x2[i2]=x[i];s
			i2++;
			n_2++;
		}
	}
}
int main(){
	nhapMang(a, n);
	xuatMang(a, n);
	truyendulieu(a, n, b, n1, c, n2);
	xuatMang(b, n1);
	xuatMang(c, n2);
}
