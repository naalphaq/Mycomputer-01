//Chuyen tat ca sang Ky tu HOA
//Chuyen tat ca sang Ky tu THUONG
#include "stdio.h"
#include "string.h"
//neu du lieu ban dau la CHU THUONG thi -32 --> chu hoa 
//97: a --> 122: z  --> 97-32 = 65:  A  --> 122 - 32 = 90 Z con lai khong thuc hien phep tinh
void my_strupr(char x[]){
	size_t len1=strlen(x);
	for(int i=0; i<len1; i++){
		if(x[i]>=97 && x[i]<=122){//x[i] kiem tra chay tu >=97 && <=122 thi thuc hien
			x[i]=x[i]-32; //A --> Z
		}
	}
}
void my_strlwr(char x[]){
	size_t len1=strlen(x);
	for(int i=0; i<len1; i++){
		if(x[i]>=65 && x[i]<=90){//x[i] kiem tra chay tu >=65 && <=90 thi thuc hien
			x[i]=x[i]+32; //a --> z
		}
	}
}
int main(){
	char ten[500];
	printf("Input: ");
	fgets(ten, sizeof(ten), stdin);
	printf("\nName: ");
	puts(ten);
//	//
//	strupr(ten);
//	printf("\nName to excuted of command strupr(): ");
//	puts(ten);
//	//
//	strlwr(ten);
//	printf("\nName to excuted of command strupr(): ");
//	puts(ten);
	//THUONG SANG HOA
//	my_strupr(ten);
//	printf("\nName to excuted of command by my_strupr: ");
//	puts(ten);
	//HOA SANG THUONG
	my_strlwr(ten);
	printf("\nName to excuted of command by my_strlwr: ");
	puts(ten);
}
