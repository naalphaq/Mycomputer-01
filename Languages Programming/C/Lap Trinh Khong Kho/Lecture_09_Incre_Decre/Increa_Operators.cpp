#include <stdio.h>
 
int main(){
    int a;
    printf("\nNhap a = "); scanf("%d", &a);
    // Toán tử ++
    ++a;
    printf("\na++ = %d", a);
 
 
    // // Toán tử --
    --a;
    printf("\na-- = %d", a);
 
    a = 5;
    printf("\na = %d", a);
 
    // Tiền tố và hậu tố a++ và ++a
    printf("\n++a = %d", ++a);
    a = 5;
    printf("\n--a = %d", --a);
    a = 5;
    //Hậu tố a++ và a-- khi đặt trong printf() --> Cạnh tranh
    //Hậu tố --> in ra trước --> thực hiện cạnh tranh với printf --> kết quả là in ra --> 5 k phải là 6
    printf("\na++ = %d", a++);
   int x = 1;
   int m = 0 ;
    m = x + a;
    printf("\nResult = %d", m);
    a = 5;
    printf("\na-- = %d", a--);//error when i print in printf with a-- (4)
    int g = 1;
    int h = 0;
    h = g + a;//1 + 4 = 5
    printf("\nResult = %d", h); //= 5
}