#include <stdio.h>
//var: variable: Bien
int main(){
	/*
	//Cach 01:
	int var; 
	printf("Nhap var = ");
	scanf("%d", &var);//nhap gia tri tu ban phim vao dia chi bien var thong qua
					//cu phat &var
	printf("\nGia tri cua var = %d", var);
	printf("\nDia chi cua bien var trong bo nho la: %p", &var);
	*/
	
	//Cach 02: pointer
	
	int *pc, c; // pc la bien pointer tro den dia chi c (gia tri va dia chi bien)
	
	//nho cu phat ben tren ta co the gan dia chi bien ra ngoai va goi no va thay doi 
	pc = &c; // tro den dia chi bien c va gan dia chi bien cua c voi ten bien la pc --> pc = &c
	
	// Gia su cho gia tri c=5 --> in ra gia tri cua c va dia chi bien cua c
	c=5;
	//Binh thuong: printf("\nGia tri cua c: %d", c);
	printf("\nGia tri cua c: %d", *pc);
	printf("\nDia chi bien c: %p", pc);// Ben tren nho con tro:  gan dia chi bien c cho pc = &c
	
	//TH1: gan GIA TRI khac cho c --> Thay doi
	c=1;
	printf("\nGia tri cua c: %d", *pc);
	printf("\nDia chi bien c: %p", pc);
	//TH2: gan GIA TRI bang *pc --> Thay doi gia tri c
	*pc=3;//gan 3 vao c
	printf("\nGia tri cua *pc: %d", *pc);
	printf("\nDia chi bien  c: %p", pc);
	printf("\nGia tri cua   c: %d", c);
}

