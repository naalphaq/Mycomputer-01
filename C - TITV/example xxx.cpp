#include "stdio.h"
#include "string.h"
int my_strcmp(char x1[], char x2[]){
	int ketQua = 0;
	size_t len1 = strlen(x1);
	size_t len2 = strlen(x2);
	size_t min = len1<len2?len1:len2;
	for(int i=0; i<min; i++){
		ketQua = x1[i]-x2[i];
		if(ketQua!=0)
			break;
	}
	if(ketQua>0)
		return 1;
	else if (ketQua<0)
		return -1;
	else
		return 0;
}
int main(){
	char s_1[50];
	char s_2[50];
	
	printf("\nNhap vao s_1 = ");
	fgets(s_1, sizeof(s_1), stdin);
	printf("\nNhap vao s_2 = ");
	fgets(s_2, sizeof(s_2), stdin);
	printf("\nKet qua so sanh: %d", strcmp(s_1, s_2));
	printf("\n-------");
	printf("\nKet qua so sanh*: %d", my_strcmp(s_1, s_2));
}
