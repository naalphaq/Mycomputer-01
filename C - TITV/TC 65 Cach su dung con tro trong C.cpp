#include <stdio.h>

//truyen tham tri
void swap_1(int a, int b){//LAY LUON GIA TRI THUC HIEN LENH 
	int temp = a; 
	a=b; 
	b = temp;
}
void swap_2(int &a, int &b){//LAY DIA CHI BIEN CUA A VA B THUC HIEN LENH
	int temp = a; 
	a = b; 
	b = temp;
}
void swap_3(int *a, int *b){
	int temp = *a; 
	*a = *b; 
	*b = temp;
}
int main(){
	int a = 5; 
	int b = 10;
	printf("Gia tri ban dau cua a va b");
	printf("\na = %d va b = %d", a, b);
	printf("\n------------------");
	printf("\nTruyen THAM TRI doi gia tri");
	printf("\nGia tri a = %d va b = %d", a, b);
	swap_1(a, b);
	printf("\n------------------");
	printf("\nTruyen THAM CHIEU doi gia tri");
	swap_2(a, b);
	printf("\nGia tri a = %d va b = %d", a, b);
	//Cach doi gia tri theo THAM CHIEU
	printf("\n------------------");
	printf("\nTruyen THAM CHIEU doi gia tri");
	swap_2(a, b);
	printf("\nGia tri a = %d va b = %d", a, b);
	//Cach doi gia tri theo CON TRO
	printf("\n------------------");
	printf("\nDoi gia tri BEN TREN THEO CON TRO");
	swap_3(&a, &b);
	printf("\nGia tri a = %d va b = %d", a, b);
}



