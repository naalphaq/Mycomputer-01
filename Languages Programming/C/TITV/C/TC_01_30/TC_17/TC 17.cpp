#include "stdio.h"

int main(){
	int n;
	printf("Nhap vao so tu nhien n tu 1 den 7  = ");
	scanf("%d",&n);// Sai cho nay la kieu du lieu tren int nen scanf("%d",&n)
	switch(n){
		case 1: 
	printf("Chu Nhat");
	break;
		case 2: 
	printf("Thu 2");
	break;
		case 3: 
	printf("Thu 3");
	break;
		case 4: 
	printf("Thu 4");
	break;
		case 5: 
	printf("Thu 5");
	break;
		case 6: 
	printf("Thu 6");
	break;
		case 7: 
	printf("Thu 7");
	break;
	default:
		printf("Nhap vao sai so n");
}	
	}
