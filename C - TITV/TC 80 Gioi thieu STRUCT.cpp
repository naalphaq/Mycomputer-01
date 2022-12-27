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
int checkDate(struct Date d){
	if (d.day<0 || d.month<0 || d.year <0)
		return 0;
	if(d.month>12)
		return 0;
		
	if (d.month==2){
		if(d.day>28)
			return 0;
	}	
	if (d.month==1|| d.month==3 || d.month==5|| d.month==7|| d.month==8|| d.month==10|| d.month==12){
		if(d.day>31) //=31 thang tren co 31 ngay
			return 0;
	}
	if(d.day>30)//=30 ngay thi 2 4 6 9 
		return 0;
	return 1;
}
int main(){
	struct Date myDate;
	inputDate(myDate);
	printf("\n---\n");
	printDate(myDate);
	printf("\nKiem tra ngay hop le: %s", checkDate(myDate)==1?"HOP LE":"KHONG HOP LE");
}
