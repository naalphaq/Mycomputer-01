#include "stdio.h"
void theory(){
	// Xuat ra bang chu cai trong ASCII Dec --> Ky tu char A 
	//Khai bao bien dau vao va dau ra hinh dung duoc ta dang lam gi va kieu du lieu di xu l
	
	//01
	char x = 'A';
	printf("\nValue of x declare by char type: %c", x);
	//02
	//Char  x=65; kieu du lieu x gan voi decimal (thap phan) 65 --> in ra ra chu --> A 
	char y = 65;
	printf("\nValue of x declare by char type: %c", y);
}
void example_01(){
   	char x1= 3 , x2 = 4;
   	printf("\nValue of x declare by char type: %c", x1);
   	printf("\nValue of x declare by char type: %c", x2);
}
void example_02(){
	int  x;  // a signed, 16-bit integer (-32768 to  +32767)
	char y;  // a signed, 8-bit character (-128 to +127)
	x = 64;  // x is an integer, but its value will fit into a characte
	y = (char)x + 1;  // x is converted to a character and then 3 is added, and the value is then placed into y 
	//if char y = 65; --> A
	printf("\nValue of Y when I converted x from integer to character: %c", y);
}
void print_Alphabat_A_Z(){
	for (char kytu=65; kytu<=90; kytu++){	
		printf("\n %c",kytu);
	}
}
void calculate_value_of_character_type(){
	//Lo ban dau ta co gia tri x1=3 va x2=4 nhung kieu char thuc hien tinh toan --> ep kieu: inter so nguyen
	//Nhan 2 so nguyen nen multiplicate so nguyen
	char x1= 3 , x2 = 4;
	
	printf("\nValues of x1&x2 in Char type: ");
   	printf("\nValues of x declare by char type: %c", x1);
   	printf("\nValues of x declare by char type: %c", x2);
   	printf("\n---------");
   	printf("\nValues of x&y when it's converted to integer: %d", (int)x1);
   	printf("\nValues of x&y when it's converted to integer: %d", (int)x2);
   	printf("\n----------");
   	int multiplicate= x1*x2;
   	printf("\nResult of multiplicate x1&x2: %d", multiplicate);
}
int main(){
//  theory();
//	example_01();
//	example_02();
//	calculate_value_of_character_type();	
	print_Alphabat_A_Z();
}
