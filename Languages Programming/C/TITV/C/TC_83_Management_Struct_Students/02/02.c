#include "stdio.h"


struct Date{
	int day;
	int month;
	int year;
};
struct person{
	char name [100]; //100 ten
	//ngay thang nam --> sinh
	Date dateofBirth;
	float weight;
	char sex;
	char addressofbirth;
};
//person p1: p1.dateofBirth.month; --> vao person lay thangsinh cua ban voi dia chi p1
//nhap p1=1; --> 2
void inDate(struct Date ps){
	scanf ("\n\t%d\t%d\t%d", &ps.day, &ps.month, &ps.month);
}
void outDate(struct Date ps){
	printf("\n%d - %d - %d", ps.day, ps.month, ps.year);
}
int main(){
	struct Date ps;
	// person HB;
	inDate(ps);
	outDate(ps);
}

