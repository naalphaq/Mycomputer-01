#include <stdio.h>
int main(){
	int arr[] = {1, 2, 3, 4, 5};
	/*
	//Cach 01: In gia tri va dia chi bien
	printf("Mang arr: ");
	for(int i=0; i<5; i++){
		printf("\narr[%d] = %d", i, arr[i]);
	}
	printf("\nDia chi bien cua tung gia tri trong Mang arr: ");
	for(int i=0; i<5; i++){
		printf("\narr[%d] = %d", i, &arr[i]);
	}
	*/
	//Cach 02 pc = &c --> arr = &arr[0] --> arr+3 = &arr[3]
	//arr chinh la con tro cua dia chi bien x[0]
	printf("\nVI DU HINH THUC CON TRO x trong MANG");
	printf("\nDia chi bien x[3]: ");
	printf("%d", &x[3]);//= printf("%d", x+3
	printf("\nGia tri x[3]: %d", x[3]);
	
	//int *pc
	//int c = 5;
	//dia chi: pc = &c --> int* pc = &c;
	//value: *pc = c

	//mang int x[] = {a, b, c, d};
	// int * x = &a
	// int * x = 
	printf("\nDia chi bien x[0] con tro: ");
	printf("%d", x);
	printf("\nGia tri x[3] con tro: %d", *(x+3));//*pc = c
	// In ra lien tuc gia tri va dia chi bien cua mang x[5] theo phuong thuc CON TRO
	printf("\n--------");
	printf("\nx[5] = {1, 2, 3, 4, 5}");
	printf("\nGia tri Mang x in lien tuc theo con tro *(x+i) = x[i]");
	for(int i=0; i<5; i++){
		printf("\nx[%d] = %d", i, *(x+i));
	}
	printf("\nDia chi BIEN in lien tuc theo con tro (x+i) = &x[i]");
	for(int i=0; i<5; i++){
		printf("\nx[%d] = %d", i, x+i);
	}
}
