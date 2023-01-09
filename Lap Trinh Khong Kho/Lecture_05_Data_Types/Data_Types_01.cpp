#include <stdio.h>
#include <limits.h>
int main(){
    char c;
    short s;
    int i;
    unsigned int ui;
    float f;
    double d;
    long long ll;
    //sizeof
    printf("Size of char is %d\n", sizeof c);
    printf("Size of short is %d\n", sizeof s);
    printf("Size of int is %d\n", sizeof i);
    printf("Size of unsigned int is %d\n", sizeof ui);
    printf("Size of float is %d\n", sizeof f);
    printf("Size of double is %d\n", sizeof d);
    printf("Size of long long is %d\n", sizeof ll);
    //get val_MIN and val_MAX
    printf("char ranges from: %d to %d \n",CHAR_MIN, CHAR_MAX);
    printf("char ranges from: %d to %d \n",INT_MIN, INT_MAX);
    printf("char ranges from:       %u \n",UINT_MAX);//
}
