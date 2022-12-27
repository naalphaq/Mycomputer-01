#include "stdio.h"
int main(){
	// Yeu cau nhap dung n>0 va xuat ra man hinh so le tu 1 den n
	int n;
	Nhap:
		printf("Nhap du lieu dung n: ");
		scanf("%d", &n);
	if(n<=0) goto Nhap;
	
	
	printf("\nDay so le:");
	for(int i=1; i<=n; i++){
		if(i%2==0)	continue;//Ket qua dung bo qua tang i++ tiep  tuc
		printf("\n %d", i); 
		}
	}
	
