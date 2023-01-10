//In hoa cac ky tu dau tien cua 1 chuoi
//anH QuOc --> Anh Quoc
//xac dinh dia chi can in hoa --> thuc hien vien in hoa --, con lai chu thuong
//012345678 --> 0 va 4 --> for (int i=0; i<m; i++)

#include "stdio.h"
#include "string.h"
void InHoaKytuDau(char x[]){
	//aNh qUoc --> gia tri sau chu dau --> space --> value = 32
	for(int i=0; i<strlen(x); i++){
		//XAC DINH dia chi dau (a, q)--> i=00; x[i-1] 
		//nho du kien space --> xac dinh dia chi dau
		if(i==0 || i>0 && x[i-1]==32){
			//thay doi gia tri vi tri i --> NEN --> nho toi do + hoac -
			//x[0] = a = 97 >=97 --> in HOA
			if(x[i]>=97 && x[i]<=122){
				x[i]=x[i]-32;
			}	
		}else{
			//cac vi tri con lai khac 0 va khac vi tri dau --> in thuong
			if(x[i]>=65 && x[i]<=90){
				x[i]=x[i]+32;
			}
		}
	}
}
int main(){
	char s1[500];
	printf("Name: ");
	fgets(s1, sizeof(s1), stdin);
	InHoaKytuDau(s1);
	printf("Name new: ");
	puts(s1);
}

