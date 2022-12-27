//Con tro cua .... --> tro 	LAM VIEC dia chi bien cua gia tri CU THE --> xuat ra gia tri hoAC....

#include "stdio.h"
#include "string.h"

int contro_find(int x){
	int *pointer;//Khai bao con tro pointer --> tro yeu cau
	pointer = &x;
	scanf("\n%d", &*pointer);
	return *pointer;
}
//ly thuyet
//char *strchr(const char *str, c) --> const char *str: ten chuoi, c --> ki hieu tim kiem
void myself_strchr(char x1[], char tk){
	size_t len = strlen(x1);
	for(int i=0; i<len; i++){
		if(x1[i]==tk){
			for(int j=i; j<len; j++){
				printf("%c", x1[j]);
			}
		}
	}
}
char *youtube_strchr(char x1[], char tk){
	for(int i=0; i<strlen(x1); i++){
		if(x1[i]==tk){
			return &x1[i];
		}
	}
}
int main(){	
	char ten[100]= "ANH.QUOC";
//	pintf("\nway01");
//	char *x2;
//	x2 = strchr(ten, '.');//dia chi tro vao la
//	printf("%s", x2);
//	printf("\nway02");
//	char tk;
//	printf("\nNhap ky tu tim kiem:");
//	scanf("%c", &tk);
//	myself_strchr(ten, tk);
	printf("\nway03");
	char *x2;
	x2 = youtube_strchr(ten,'.');//lay dia chi bien cua tk neu gia tri dung;//x2 = &... --> &... = strchr(ten, '.')
	printf("\n%s", x2);	
	/*
	int c; // value=5; address_c =..... --> thay doi value --> thay doi dia chi bien
	//thay doi dia chi bien --> tro den dia chi bien do
	scanf("%d", &c);
	printf("\nC ban dau: %d", c);
	printf("\nC thay doi: %d", contro_find(c));
	*/
}

