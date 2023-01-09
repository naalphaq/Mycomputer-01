#include "stdio.h"
int main(){
	// Tim uoc chung --> Bao nhieu uoc chung --> Tim uoc chung lon nhat
int a, b;

a = abs(a);//tri tuyet doi
b = abs(b);

float ss;
printf("Nhap gia tri a va b : ");
scanf("%d%d", &a, &b);
if(a==0||b==0) // a= 0 va b = 10 --> a chia het cho 0 va a chia het cho 10
{
	if(a>b){//0>10 --> Sai uoc chung lon nhat b = 10
		printf("Uoc chung lon nhat %d", a);
	}else{
		printf("Uoc chung lon nhat %d", b);	
	}
}else{
// TH 01 a va b khac 0
// xu ly du lieu
ss=a-b; // a = 4 b = 2 --> ss = 4 - 2 = 2 > 0 gia tri a lon hon b
if (ss>0){
	printf("Gia tri lon hon la a");
// Tim cac uoc chung
	int i=1;
	int result=0;
	int sl=0;
		while(i<=b){
			if(a%i==0&&b%i==0){
				result=i;
				printf("\nUoc chung la: %d", result);
				sl=sl+1;
			}
			i++;
		}
			printf("\na va b co %d uoc chung", sl);
			printf("\nUoc chung lon nhat : %d", result);
	}
else{
	printf("Gia tri lon hon la b");
	int i=1;
	int result=0;
	int sl=0;
		while (i<=a){
			if(a%i==0&&b%i==0){
				result=i;
				printf("\nUoc chung la: %d", result);
				sl=sl+1;
			}
			i++;
		}
			printf("\n a va b co %d uoc chung", sl);
			printf("\nUoc chung lon nhat: %d", result);
	}	
}
}

