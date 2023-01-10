//Tim Kiem chuoi con trong lap trinh C
//char *strstr(const char *str, const char *chuoi_con) --> tra ve con tro
//char *strchr(const char *str, char c)
#include "stdio.h"
#include "string.h"
void xoaXuongDong(char x1[]){//ABCD\n\0 --> nhap du lieu: fgets --> loai \n --> \0
	for(int i=0; i<strlen(x1); i++){
		if(x1[i]=='\n'){
			x1[i]='\0';
		}
	}
}
int main(){
	char chuoi_lon[500];
	char chuoi_con[300];
	//input values
	printf("Nhap Chuoi Lon: ");
	fgets(chuoi_lon, sizeof(chuoi_lon), stdin);
	xoaXuongDong(chuoi_lon);
	
	printf("Nhap Chuoi Con: ");
	fgets(chuoi_con, sizeof(chuoi_con), stdin);
	xoaXuongDong(chuoi_con);
	//resolve
	//int *pc; khai bao mot bien con tro pc --> pc = dia chi bien, *pc = values
	char *kq = strstr(chuoi_lon, chuoi_con);
	if(kq!=NULL){
		printf("\nTim Thay Chuoi Con");
		printf("\n");
		printf("%s", kq);
	}else{
		printf("\nKHONG tim thay Chuoi Con");
	}
}
