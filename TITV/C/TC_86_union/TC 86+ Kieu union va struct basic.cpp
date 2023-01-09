#include "stdio.h"

union Date_1{
	int day;
	int month;
	int year;
} uNgay;
struct Date_2{
	int day;
	int month;
	int year;
}sNgay;
int main(){
//	printf("Kich co kieu Union = %d bytes ", sizeof(uNgay));
//	printf("\nKich co kieu Struct = %d bytes ", sizeof(sNgay));
//	return 0;//Ngung luon chuong trinh
	Date_1 n1;
	printf("Xuat du lieu kieu Union: ");
	n1.day = 1;
	printf("%d/", n1.day);
	n1.month = 1;
	printf("%d/", n1.month);
	n1.year = 2020;
	printf("%d", n1.year);
	
	Date_2 n2;
	n2.day = 1;
	n2.month = 1;
	n2.year = 2020;
	printf("\nXuat du lieu kieu Struct: ");
	printf("%d/%d/%d", n2.day, n2.month, n2.year);
}
