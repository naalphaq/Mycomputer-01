#include "stdio.h"
// Tinh giai thua 5 = 1.2.3.4.5
void giaithua(int n){
	if (n==0 || n==1)
	return 1;// 0!=1; 1!=1
	else
	return n*giaithua(n-1);	
	
}
int main(){
	int n, gt;
	do{
	printf("Gia tri nhap vao: ");
	scanf("%d", &n);
	}
	while(n<0);
	gt = giaithua(n);
	printf("%d ! = %d", n, gt);
}

