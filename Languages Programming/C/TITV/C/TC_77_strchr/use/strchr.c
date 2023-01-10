#include <stdio.h>
#include <string.h>
int main(){
    char s[100] ="ANH.QUOC";
    char *x2 = strchr(s, '.');
    printf("\nChuoi s la : %s", s);
    printf("\nCan timL:  %s", x2);
}