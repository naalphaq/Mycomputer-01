#include "stdio.h"
#include "stdlib.h"
int main(){
	FILE *f;
	//1,2 Tao, mo file
	f=fopen("Bai_001.txt", "r");
	if(f==NULL){
		printf("\nLoi tao hoac mo file!");
		exit(1);
	}
	//3 Doc du li
	int n;
	//Doc du lieu tu file: Bai_001.txt
	fscanf(f, "%d", &n);
	//Xuat ra man hinh cho ta xem
	printf("\nGia tri cua n: %d", n);
	
	//4 Dong file
	fclose(f);
}
