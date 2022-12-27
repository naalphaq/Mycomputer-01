#include "stdio.h"
void heNhiphan(int x){
	if(x==0){
		return;
	}else{
		int r=x%2;
		heNhiphan(x/2);
		printf("%d", r);
	}
}
int main(){
	int n; 
	do{
		printf("Gia tri n:");
		scanf("%d", &n);
	}while(n<0);
	heNhiphan(n);
}
