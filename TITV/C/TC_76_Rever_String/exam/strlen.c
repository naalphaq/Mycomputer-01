#include <stdio.h>
#include <string.h>

int main(){
    char s[100] = "";
    printf("\nNhap vao chuoi s: ");
    fgets(s, sizeof(s), stdin);
    puts(s);

}