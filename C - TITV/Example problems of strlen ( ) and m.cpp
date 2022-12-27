#include "stdio.h"
#include "string.h"
int main(){
	//m: khai bao + 1 --> ABCD --> A[m=5]
	//strlen: m-1			--> strlen[A]=4
	//dia chi: m-1-1		--> 0 1 2 3 --> < strlen
	
	char ten[5]="ABCD";//0123 --> dia chi in ra du roi
	printf("Ban dau: %s", ten);
	printf("\nGia tri phan tu cua CHUOI: ten[m] --> m = 5");
	printf("\nDo dai kich thuoc cua CHUOI do ham strlen: "); 
	printf("%d", strlen(ten));
	printf("\nCHUOI in bang vong lap For voi dia chi bien: 0 1 2 3: ");
	for(int i=0; i<strlen(ten); i++){
		printf("%c", ten[i]);	
	}
}
