#include "stdio.h"
#include "math.h"
int main(){
//Giai phuong trinh bac 2 ax^2 + bx + c = 0
//Khai bao bien
float a, b, c, x1, x2, delta;
//Nhap du lieu
printf("Nhap gia tri a, b, c = ");
scanf("%f%f%f",&a,&b,&c);
//Xu ly du lieu
if(a==0){
	printf("\nThay doi gia tri a khac 0");
}else{
	delta = pow(b, 2)-4*a*c;
	if(delta>0){
		x1=(-b+sqrt(delta))/(2*a);
		x2=(-b-sqrt(delta))/(2*a);
		printf("Phuong trinh co nghiem x1 = %.2f",x1);
		printf("\nPhuong trinh co nghiem x2 = %.2f",x2);
	}else if(delta==0){//a = 1; b = 2; c = 1
	  	x1=-b/(2*a);
		printf("Phuong trinh co nghiem kep x1=x2= %f", x1);
	}else{
		printf("Phuong trinh vo nghiem");
	}
}
}
	
