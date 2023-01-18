#include <stdio.h>
int main(){
    const  int a = 2020;
    int b = 2022;
    //a  = 2021; wrong const a
    printf("Value of a: %d", a);
    const int *p = &a;//pointer to constant int
    //*p = 2023: Do not change value of const a
    printf("\nValue of a: %d", *p);
    int sum  = 0; 
    sum = *p + b;
    printf("\nSum : %d", sum);
    
    p = &b;
    printf("\nValue of b: %d", *p);
    //*p = 2030; no to changes value by pointer to constant
    b = 204444;//ok
    printf("\nValue change: %d", *p);
}