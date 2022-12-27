#include"stdio.h"
int main(){
int a, b;
printf("Nhap vao so a = ");
scanf("%d",&a);
printf("\nNhap vao so b = ");
scanf("%d",&b);

float ketqua = (float)a/b;
int ketqua1 = (int)ketqua;
printf("%d/%d = %.2f", a, b, ketqua);
printf("\n%d/%d = %d", a, b, ketqua1);
	}
