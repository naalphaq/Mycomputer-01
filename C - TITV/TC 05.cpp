#include "stdio.h"
int main (){
float a, b;
printf("Nhap vao gia tri a, b: ");
scanf("%f%f",&a, &b);
float tong = a+b;
printf("\n %.2f + %.2f = %.2f", a, b, tong);
float thuong = a -b;
printf("\n %.2f - %.2f = %.2f", a, b, thuong);
float tich = a*b;\
printf("\n %.2f * %.2f = %.2f", a, b, tich);
float chia = a/b;
printf("\n %.2f / %.2f = %.2f", a, b, chia);
// Chia lay du 
int r = (int (a))%(int (b));
printf("\n %f chia lay du %f = %d", a, b, r);
// tang gia tri a++ va giam gia tri b--
a++;
printf("\n Gia tri a tang len a++: %.2f",a);
b--;
printf("\n Gia tri b giam xuong b--: %.2f",b);
	}
	
