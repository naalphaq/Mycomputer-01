#include "stdio.h"
#include "math.h"
// Xuat ra so nguyen to nho hon bang n nhap vao 

// FC01: Resolve SNT 
int Kiem_Tra_SNT (int x){
	if(x<=1) return 0;
	for(int y=2; y<sqrt(x); y++){
		if(x%y==0) return 0;
	}
	return 1;
}
int main(){
	int n;
	int kq;
	int x1=1;
	
	//Kiem tra input of n
	do {
		printf("Nhap so n: ");
		scanf("%d", &n);	
	}
	while(n<1)
	
	// Xu ly lap truyen ket qua input
	for(int i=2; i<=n; i++){
		kq =  Kiem_Tra_SNT(i);
		if(kq==1){
			if(i>x1){
				x1=i;
			}
		}
	}
	printf("\nSo nguyen to lon nhat la: %d", x1);
}
	
