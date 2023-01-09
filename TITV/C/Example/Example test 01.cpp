#include "stdio.h"
#include "string.h"
int main(){
char str_a[] = "Hello, World! I am newbie";
char *p = str_a;
p += strlen("Hello, World!\n");
printf("%s", p[-14] );
}
