#include "stdio.h"

int a[100], b[100], c[200];
int n1, n2, n3;

void NhapMang (int x[100], int &n){
	do {
		printf("Nhap vao so luong phan tu cua mang (0<n<=100): ");
		scanf("%d", &n);
	}
	while (n<1 || n>100);
	for (int i=0; i<n; i++){
		printf("\na[%d] = ", i);
		scanf("%d", &x[i]);
	}
}

void XuatMang (int x[100], int n){
	printf("\nGia tri cua mang la: ");
	for (int i=0; i<n; i++){
		printf("%d ", x[i]);
	}
}

void SapXepTangDan (int x[100], int n){
	for (int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if (x[i]>x[j]){
				int temp = x[i];
				x[i] = x[j];
				x[j] = temp;
			}
		}
	}
}

void TronMang (int x1[100],int nx1, int x2[100], int nx2, int x3[200], int &nx3){
	nx3 = nx1 + nx2;
	int i1 = 0;
	int i2 = 0;
	for (int i3=0; i3<nx1; i3++){
		x3[i3] = x1[i1];
		i1++;
	}
	for (int i3=nx1; i3<nx3; i3++){
		x3[i3] = x2[i2];
		i2++;
	}
}

int main(){
	printf("\n");
	NhapMang(a, n1);
	XuatMang(a, n1);
	printf("\n");
	NhapMang(b, n2);
	XuatMang(b, n2);
	printf("\n");
	TronMang(a, n1, b, n2, c, n3);
	XuatMang(c, n3);
	SapXepTangDan(c, n3);
	XuatMang(c, n3);
}