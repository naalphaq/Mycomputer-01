#include "stdio.h"
//Chuyen doi he thap phan sang he nhi phan
void heNhiphan(int x){
	if(x==0)
	return;
	else{
	int r=x%2;//0 //1 // //1 //1 //1
	heNhiphan(x/2);//15 // 7 //3 // 1 // 0
	printf("%d", r);	//0 //1 //1 //1 //1
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
