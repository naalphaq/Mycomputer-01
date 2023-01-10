#include <stdio.h>
#include <string.h>
int main(){
    char str1[20] = "C programming";
    char str2[30];
    //copy string1 to string2
    strcpy(str2, str1);
    //
    printf("%s", str2);
}