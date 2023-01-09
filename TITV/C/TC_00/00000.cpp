#include "stdio.h"
void increase(int x)//KHONG RETURN 
{
    x++;
    printf("%d", x);
}
int increase_return(int x){// RETURN
	x++;
	return x;
}
int main()
{
    int index = 0;
    printf("Gia tri index dau: %d", index);
    
    printf("\n---------");
    printf("\nGia tri index tang len: ");
	increase(index);
	
	printf("\n---------");
    printf("\nGia tri index tang len: %d", increase_return(index));
	
}
