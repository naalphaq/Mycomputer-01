//Dao nguoc CHUOI
//NHAP TU BAN PHIM
#include "stdio.h"
#include "string.h"
void xoaXuongDong(char x[]){
	size_t len = strlen(x);
	// TITV\n\0 => TITV\0\0
	if(x[len-1]=='\n'){
		x[len-1]='\0';
	}

void my_strrev(char x[]){
	size_t len = strlen(x);
	for(int i=0; i<len/2; i++){
		char temp = x[i];
		x[i]=x[len-i-1];
		x[len-i-1] = temp;
	}
}
int main(){
	char s[50]="";
	//combo nhap chuoi tu ban phim
	printf("Nhap s = ");
	fgets(s, sizeof(s), stdin);
	xoaXuongDong(s);
	//ket qua 01
	printf("\ns = %s", s);
	//strrev(s);
	my_strrev(s);
	printf("\ns = %s", s);
}


