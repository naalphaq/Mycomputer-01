#include <stdio.h>
//Tràn dữ liệu và dẫn đến trả kết quả sai ở terminal -128 -127 -126
int main(){
    char s = 128;
    printf("%d\n", (int) s);
    s = 129;
    printf("%d\n", (int) s);
    s = 130;
    printf("%d\n", (int) s);
}