#include <stdio.h>
int main(){
    int a = 2020, b = 2021;
    int *const p = &a;
    printf("\nValue of a: %d", *p);
    //changes value of  a
    *p = 2030;
    printf("\nValue of a: %d", *p);
    //calculate
    int sum = 0;
    sum = *p + b;
    printf("\n Sum: %d", sum);

    //***
    //Not pointer another value ex value of b
    p = &b;
    printf("\n\nValue of b: %d", *p);


}