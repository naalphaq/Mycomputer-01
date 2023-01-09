#include <stdio.h>

// Truyen Tham Tri
void swap_1(int a, int b){
	int temp=a;
	a=b;
	b=temp;
}
// Truyen Tham Chieu Theo Dia Chi Bien
void swap_2(int &a, int &b){
	int temp=a;
	a=b;
	b=temp;
}
// Su dung Con Tro
void swap_3(int *a, int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	int a=5;
	int b=10;
	
	printf("\nTruoc khi Swap_1: a = %d va b = %d", a, b);
	swap_1(a, b);
	printf("\nSau khi Swap_1: a = %d va b = %d", a, b);
	
	printf("\nTruoc khi Swap_2: a = %d va b = %d", a, b);
	swap_2(a, b);
	printf("\nSau khi Swap_2: a = %d va b = %d", a, b);
	
	printf("\nTruoc khi Swap_3: a = %d va b = %d", a, b);
	swap_3(&a, &b);//Dua vao dia chi cua bien
	printf("\nSau khi Swap_3: a = %d va b = %d", a, b);
	
}
