#include "stdio.h"
int main(){
	// Tinh giai thua cua n (n>0)
	int n;
	do {
		printf("Nhap gia tri n dung voi de bai: ");
		scanf("%d",&n);
	}
	while (n==0); // Neu dk nhap ban dau sai de bai thi while tra gia tri sai do yeu cau nhap lai
	
	int giaithua=1;
	for (int i=1; i<=n; i++){
		giaithua=giaithua*i;
	}
	printf("Ket qua: %d", giaithua);
}
