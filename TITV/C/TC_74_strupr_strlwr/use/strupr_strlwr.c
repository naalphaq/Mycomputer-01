//Chuyen tat ca sang Ky tu HOA
//Chuyen tat ca sang Ky tu THUONG
#include "stdio.h"
#include "string.h"
int main(){
	char ten[500];
	printf("Input: ");
	fgets(ten, sizeof(ten), stdin);
	printf("\nName: ");
	puts(ten);
	//
	strupr(ten);
	printf("\nName to excuted of command strupr(): ");
	puts(ten);
	//
	strlwr(ten);
	printf("\nName to excuted of command strupr(): ");
	puts(ten);
	
}
