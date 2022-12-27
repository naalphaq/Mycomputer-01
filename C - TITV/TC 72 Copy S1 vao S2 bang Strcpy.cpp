//Copy chuoi source s1 vao s2
#include "stdio.h"
#include "string.h"
void Strcpy_copychuoi(char x1[], char x2[]){
	printf("Chuoi s1: %s", x1);
	printf("\nChuoi s2 ban dau: %s", x2);
	strcpy(x2, x1);
	printf("\nsChuoi s2 update: %s", x2);
}
void My_Copy(char x1[], char x2[]){
	size_t len1=strlen(x1);//m=50	
	for(int i=0; i<len1; i++){
		x2[i] = x1[i];	
	}
	x2[len1]='\0';
	//Xin Chao --> dung ra thieu '\0\  nen vi vay cho x2 lay du luon \0
}
int main(){
	char s1 [50] = "Xin Chao!";
	char s2 [50] = "";
//	Strcpy_copychuoi(s1, s2);
	My_Copy(s1, s2);
	printf("Chuoi s2 update: %s", s2);
}
