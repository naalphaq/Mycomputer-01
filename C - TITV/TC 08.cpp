#include "stdio.h"
int main(){
	int a;
	printf("Gia tri nhap tu man hinh vao: ");
	scanf("%d",&a);
	printf("\n %d la so %s", a, (a%2==0)?"CHAN":"LE");
	}
