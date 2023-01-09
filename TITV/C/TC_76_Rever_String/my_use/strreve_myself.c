//LAP TRINH DAO NGUOC CHUOI
//HIEU LAM DON GIAN --> PHUC TAP (Chua hieu ma lam phuc tap)
//CHUOI CO SAN


//In nguoc lai
//Hoan doi dia chi cua 2 so qua cho nhau


#include "stdio.h"
#include "string.h"
void my_strrev(char x[]){
	size_t len = strlen(x);
	for(int i=0; i<len/2; i++){
		char temp = x[i];
		x[i]=x[len-i-1];
		x[len-i-1] = temp;
	}
}
int main(){
	char s1[5]="ABCD";
	printf("Name: %s", s1);
	my_strrev(s1);
	printf("\nHoan doi: %s", s1);
}
