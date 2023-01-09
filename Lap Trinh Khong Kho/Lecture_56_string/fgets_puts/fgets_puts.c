#include <stdio.h>
#include <string.h>
int main()
{
    char name[30];
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);  // read string
    // gets(name); // không nên dùng
    printf("Name: ");
    puts(name);    // display string
    printf("\nsizeof of %d", sizeof(name));
    printf("\ndo dai string %d", strlen(name));
    return 0;
}