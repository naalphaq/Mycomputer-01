#include "stdio.h"
#include "math.h"
int main(){
int a = 5;
int b = 2;
float kq = (float)a/b;

printf("floor(a/b) = %f", floor(kq));
printf("\n ceil(a/b)=%f", ceil(kq));
printf("\n sqrt(9)=%f", sqrt(9));
printf("\n 5^2=%f", pow(5,2));
// Ham tri tuyet doi so nguyen int
printf("\n |5|=%d", abs(5)); 
// Ham tri tuyet doi so thuc float
printf("\n |5.2|=%f",fabs(5.2));
	}
