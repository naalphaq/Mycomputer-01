#include "stdio.h"

//Doi gia tri a va b nhap tu ban phim
void swap(int &a, int &b){
	int change = a; //5
	a = b;//6
	b = change;//5
}
int main(){
	int a, b; 
	printf("Nhap a va b: ");
	scanf("%d%d", &a, &b);
	swap(a, b);
	printf("\na = %d, b = %d", a, b);
}

