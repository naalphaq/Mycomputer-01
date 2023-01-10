#include <stdio.h>
#include <math.h>
int main(){
    int n = 1234;
    int reNum = n % 10;
    n /= 10;//1234 chia 10 = 123.4 --> int thì 123
    printf("%d", reNum);//4
    printf("\n%d", n);//123
    return 0;
}