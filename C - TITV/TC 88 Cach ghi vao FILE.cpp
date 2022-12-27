#include "stdio.h"
#include "stdlib.h"
int main(){
	FILE *f;//Cho con tro neu thuc hien lenh khong duoc = NULL	
	// 1 - Tao file
	// 2 - Mo file
	f = fopen("Bai_001.txt", "w");
	//Check con tro thuc hien
	if(f == NULL){
		printf("\n Loi tao hoac mo file");
		exit(1);
	}
	// 3 - Doc hoac ghi
	int n;
	//Nhap du lieu tu ban phim
	printf("\nNhap vao so n: "); 
	scanf("%d", &n);//dua values vao dia chi n
	//Ghi du lieu vao file: Bai_001.txt
	fprintf(f, "%d", n);
	
	// 4 - Dong file
	fclose(f);
	
	return 0;
}
