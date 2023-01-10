#include "stdio.h"
#include "string.h"

void my_strcat(char x1[], char x2[]){
	//yeu cau thuc hien viec noi chuoi s2 vao s1 thi s1 phai co kich thuoc lon 
	//Kiem tra kich thuoc bang cach check (if)
	size_t len1 = strlen (x1); //size_t luu tru do dai
	size_t len2 = strlen (x2);
	printf("Do dai len 1: %d", len1);//len1 = m = 9
	printf("\nDo dai len 2: %d", len2);//8
	//				Xin Chao 910111213
	//Dia chi bien "Xin Chao ": 012345678
	//Dia chi bien -->  tiep tuc 9 10 11 12 13 --> chay toi khi '\0'
	//Anh Quoc
	//9 10 11 12 13 14 15 16 17 18('\0')
	//Xin chao\0
	//Anh Quoc\0
	for(int i=len1; i<len1+len2; i++){
			x1[i] = x2[i-len1]; //9-9  = 0 10 - 9 = 1 11 - 9 = 2
			//i = 9	; len1= 9
			//i = 10; 
		}
	x1[len1+len2]='\0';//gan '\0' --> vao vi tri cuoi len1+len2=17 --> dia chi bien 0-17
}
void strcat_way01(char x1[], char x2[]){
	printf("Noi dung chuoi s1: %s", x1);
	printf("\n");
	printf("Noi dung chuoi s2: %s", x2);
	printf("\n");
	printf("Noi chuoi s2 vao s1 ta duoc ket qua: ");
	strcat(x1, x2);
	printf("\n%s", x1);
}
int main(){
	char s1[100] = "Xin Chao ";
	char s2[20] = "Anh Quoc";
	// strcat_way01(s1, s2);
	my_strcat(s1, s2);
	printf("\n%s", s1);
	
}
