#include "stdio.h"
#include "string.h"
int my_strlen(char x[500]){ 
	//Dem gia tri ben trong ham ten
	int count=0;
	while(x[count]!='\0'){// Bao gio den ki tu \0 (null) thi ngung
		count++;// 0 1 2 3 4 --> ki tu \0 ngung
	}
	return count;
}
void Nhapten_way01_KhaibaoMANG(){
		char ten[500] = "NA NA";// NA NA\0 --> bieu dien ham string
		printf("Ten la: ");
		printf("%s", ten);
		//WAY 01
		printf("\nDo dai cua ten strlen: %d", strlen(ten));
		//WAY 02
		printf("\nDo dai cua ten my_strlen: %d", my_strlen(ten));
}

void xoaXuongDong(char x[]){
	size_t len = strlen(x);//size_t //
	//TITV\0\n --> TITV\0
	if(x[len-1]=='\n'){
		x[len-1]='\0';
	}
}
void Nhapten_way02_BanPhim(){//TITV\0\n --> \n chinh la enter
		char ten[500];//Khac nhau: Khai bao ban phim
		printf("\nNhap Ten Tu Ban Phim: ");// NA NA
		fgets (ten, sizeof(ten), stdin);//***Ket thuc fgets la mot dau cach --> Do dai chuoi la 6
		xoaXuongDong(ten);
		printf("\nTen la: ");
		puts(ten);
		//WAY 01
		printf("\nDo dai cua ten strlen: %d", strlen(ten));
		//WAY 02
		printf("\nDo dai cua ten my_strlen: %d", my_strlen(ten));
}
int main(){
//	Nhapten_way01_KhaibaoMANG();
	Nhapten_way02_BanPhim();
}
