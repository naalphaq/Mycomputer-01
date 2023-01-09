#include "stdio.h"
#include "math.h"
int main(){
	int n; 
	float kq,i;
	printf("Nhap n:");
	scanf("%d",&n);
	for (i=1; i<=n; i++){
		kq = sqrt(i);
		if(i%kq==0){
			printf("\nkq: %.2f", i);
		}
	}
}
