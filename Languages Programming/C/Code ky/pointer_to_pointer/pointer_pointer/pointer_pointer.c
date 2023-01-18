#include <stdio.h>
#include <string.h>
#include <stdio.h>

int main()
{
    int *p, **pp;
    int a = 2020;

    p = &a;
    pp = &p;

    printf("1/ &a:   %x\n", &a);
    printf("2/ p:    %x\n", p);
    printf("3/ &p:   %x\n", &p);
    printf("4/ pp:   %x\n", pp);
    printf("6/ *pp:  %x\n", *pp);
    printf("7/ **pp: %d\n", **pp);

    return 0;
}