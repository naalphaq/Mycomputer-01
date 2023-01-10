#include <stdio.h>
#include <string.h>
void xoaktxdong(char x[]){
    size_t len = strlen(x);
    if(x[len-1] == '\n'){
        x[len-1] = '\0';
    }
}
int main(){
    char s[50] = "";
    printf("\nName s1: ");
    fgets(s, sizeof(s), stdin);
    printf("\ns1 = %s ", s);//in ra co ky tu xuong dung \n
    xoaktxdong(s);
    strrev(s);
    printf("\nHoan doi s1: %s", s); 
}