#include <stdio.h>
int main(){
	int x[] = {1, 2, 3, 4, 5};
	/*
	//Cach 01: In gia tri va dia chi bien
	printf("Mang x: ");
	for(int i=0; i<5; i++){
		printf("\nx[%d] = %d", i, x[i]);
	}
	printf("\nDia chi bien cua tung gia tri trong Mang x: ");
	for(int i=0; i<5; i++){
		printf("\nx[%d] = %d", i, &x[i]);
	}
	*/
	//Cach 02 pc = &c --> x = &x[0] --> x+3 = &x[3]
	//x chinh la con tro cua dia chi bien x[0]
	printf("\nVI DU HINH THUC CON TRO x trong MANG");
	printf("\nGia tri dia chi bien x[3]: ");
	printf("%d", &x[3]);//= printf("%d", x+3
	printf("\nGia tri x[3]: %d", x[3]);
	
	printf("\nGia tri dia chi bien x[0] con tro: ");
	printf("%d", x+3);
	printf("\nGia tri x[3] con tro: %d", *(x+3));//*pc = c
	// In ra lien tuc gia tri va dia chi bien cua mang x[5] theo phuong thuc CON TRO
	printf("\n--------");
	printf("\nx[5] = {1, 2, 3, 4, 5}");
	printf("\nGia tri Mang x in lien tuc theo con tro *(x+i) = x[i]");
	for(int i=0; i<5; i++){
		printf("\nx[%d] = %d", i, *(x+i));
	}
	printf("\nGia tri dia chi in lien tuc theo con tro (x+i) = &x[i]");
	for(int i=0; i<5; i++){
		printf("\nx[%d] = %d", i, x+i);
	}
}
