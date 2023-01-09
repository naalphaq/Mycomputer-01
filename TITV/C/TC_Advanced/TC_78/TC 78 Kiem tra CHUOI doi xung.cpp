//Check string is symmetry or not symmetry
#include "stdio.h"
#include "string.h"
//ABBC --> chuoi doi xung
//312213 --> vi tri dau = vi tri cuoi tiep tuc
//i(0) = strlen-i-1
//so sanh 3 lan oks
int sosanhDOIXUNG(char x1[]){
	size_t len= strlen(x1);
	for(int i=0; i<len/2; i++){
		if(x1[i]!=x1[len-i-1]){
			return 0;
		}
	}	
	return 1;
}
void xoaXuongDong(char x1[]){//ABCD\n\0 --> nhap du lieu: fgets --> loai \n --> \0
	for(int i=0; i<strlen(x1); i++){
		if(x1[i]=='\n'){
			x1[i]='\0';
		}
	}
}
int main(){
	char s1[500];
	//input values
	printf("Nhap Chuoi: ");
	fgets(s1, sizeof(s1), stdin);
	xoaXuongDong(s1);
	//resolve
	if(sosanhDOIXUNG(s1)){//if(1) //Right
		printf("Chuoi Doi Xung");
	}else{
		printf("Chuoi KHONG Doi Xung");
	}
}
