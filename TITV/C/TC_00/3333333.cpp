#include "stdio.h"

int main(){
	int day;
	enum {monday=3, tuesday, wednesday, thursday, friday, saturday, sunday};
	day = monday;
	printf("Result: ");
	printf("%d", day);
}
