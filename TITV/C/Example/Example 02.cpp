#include "stdio.h"
/*
int main(){
	int n; 
	int gthua=1;
	do{
		printf("Nhap gia tri n: ");
		scanf("%d", &n);
	}while (n<0);
	for(int i=1; i<=n; i++){
		gthua=gthua*i;
	}
	printf("Gia tri %d! = %d", n, gthua);	
	
}
*/
//Ham De quy --> Goi lai chinh no cho den khi Gia tri cuoi, xu ly 
//1.2.3.4.5 = 5! --> Thuc hien phep tinh -1 goi lai ham con x=5 va luu tru gia tri  1 2 3 4 5
void giaiThua(int x){
	//Gia tri cuoi
	if(x==1){
		return 1;//Gia tri luu 1
	}else{
		return x*giatri(x-1);
	}	
}
int main(){
	int n; 
	do {
		printf("Nhap gia tri n: ");
		scanf("%d", &n);
	}while(n<0);
	giaiThua();
}

