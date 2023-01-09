#include "stdio.h"
int main(){
	//and, or, ! : thoa man 2 dk hoac 1 trong 2; phu dinh
int a, b;

printf("Nhap gia tri a =");
scanf("%d",&a);
printf("\nNhap gia tri b =");
scanf("%d",&b);
// AND Ca 2 deu dung
printf("%d&&%d=%d", a, b, a&&b); 
printf("\n%d&&%d=%d", a, b, a&&b);
// OR 1 trong 2 thoa man la dung
printf("\n%d||%d=%d", a, b, a||b);
printf("\n%d||%d=%d", a, b, a||b);
// ! Toan tu phu dinh nguoc ket qua
printf("\na=%d",!a);
printf("\nb=%d",!b);
	}
