#include "stdio.h"
//Chuyen doi he thap phan sang he nhi phan
void heNhiphan(int x){
	if(x==0)
	return;
	else{
	int r=x%2;
	heNhiphan(x/2);
	printf("%d", r);	
	}
}
int main(){	
	int n; 
	do{
		printf("Nhap gia tri n: ");
		scanf("%d", &n);
	}	
	while(n<0);
	heNhiphan(n);
}
