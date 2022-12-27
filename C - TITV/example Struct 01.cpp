#include "stdio.h"
struct Date{
	int day;
	int month;
	int year;
};
void inputDate(struct Date &d){
	printf("Nhap vao ngay: ");
	scanf("%d", &d.day);//Du lieu truyen vao dia chi bien day trong struct Date{ }
	printf("\nNhap vao thang: ");
	scanf("%d", &d.month);
	printf("\nNhap vao nam: ");
	scanf("%d", &d.year);
}
void printDate(struct Date d){
	printf("%d/%d/%d", d.day, d.month, d.year);
}
//Cong day va thang
//Xu dung du lieu thuoc cau truc Struct de thuc hien
int cong_day_month(Date d){
	int ketqua;
	ketqua = d.day + d.month;
	return ketqua;	
}
int main(){
	struct Date myDate;
	inputDate(myDate);
	printf("\n---\n");
	printDate(myDate);
	printf("\n---");
	printf("Ket qua cua day + month: %d", cong_day_month(myDate));
}
