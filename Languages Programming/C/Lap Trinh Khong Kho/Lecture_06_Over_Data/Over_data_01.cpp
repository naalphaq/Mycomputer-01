/*
    char : -128 -> 127
    sizeof char: 1 byte = 8 bits

    1 bit: 0 1
    2 bit: 00, 01, 10, 11 => 0, 1, 2, 3
    8 bits: 2^8 giá trị = 256 giá trị
 */
#include <stdio.h>
#include <limits.h>
int main(){
    char c = CHAR_MAX;
    printf("c = %d\n", c);
    char d = CHAR_MAX+1;
    printf("d = %d\n", d);
    char e = CHAR_MAX+2;
    printf("e = %d\n", e);
    //result --> 127 -128 -127 --> tạo ra một vòng lặp giá trị trả về trong phạm vi
    //kiểu giá trị đó
}