#include "stdio.h"
#include "math.h"
int main(){
//Khai bao bien
float xa, xb, xc, ya, yb, yc;
float AB, BC, CA;
float chuvi, dientich, p;

//Nhap du lieu
printf("Toa do A: ");
scanf("%f%f",&xa, &ya);
printf("\nToa do B: ");
scanf("%f%f",&xb, &yb);
printf("\nToa do C: ");
scanf("%f%f",&xc, &yc);

//Xu ly du lieu 
AB=sqrt(pow(xa-xb, 2)+ pow(ya-yb, 2));
BC=sqrt(pow(xb-xc, 2)+ pow(yb-yc, 2));
CA=sqrt(pow(xc-xa, 2)+ pow(yc-ya, 2));
if (AB+BC>CA&&AB+CA>BC&&BC+CA>AB){
	printf("Tao thanh tam giac");
	if(AB==BC||AB==CA||BC==CA){
		printf("\nTam giac can");
	}else{
		printf("\nKhong phai tam giac can");
	}
	//Tinh chu vi
	chuvi=AB+BC+CA;
	printf("\nChu vi =%f",chuvi);
	//Tinh dien tich
	p=chuvi/2;
	dientich=sqrt(p*(p-AB)*(p-BC)*(p-CA));
	printf("\nDien tich = %f",dientich);
}else{
	printf("Khong phai tam giac");
}
	}
