#include "stdio.h"
int x=5;
int main(){
	int x=6;
	printf("X trong main: %d\n", x);
	printf("X ngoai main: %d", ::x);//Class 
}
