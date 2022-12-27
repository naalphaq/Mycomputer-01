#include <stdio.h>
int main(){
/*	
	int var;
	printf("Gia tri var:");
	scanf("%d", &var);
	printf("\nGia tri dia chi bien var: %p", &var);	
	
*/	
	int *pc, c; 
	c=5;
	pc=&c;
	printf("\nGia tri c = %d", c);
	printf("\nGia tri c = %d", *pc);
	printf("\nGia tri dia chi bien c: %p", pc);
	
	*pc = 1; // c=1; // Gia tri da thay doi khi gan bien c
	printf("\nGia tri c = %d", *pc);
	printf("\nGia tri dia chi bien c: %p", pc);
}
