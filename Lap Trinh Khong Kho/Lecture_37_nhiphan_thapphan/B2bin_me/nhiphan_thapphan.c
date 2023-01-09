#include <stdio.h>
#include <math.h>
//1110 --> 1*2^3 + 1*2^2 + 1* 2^1 + 0*2^0

int nhiPhan(long long int binaryNumber){
    int p = 0;
    int sum = 0;
    int last;
    while(binaryNumber >0){
        last = binaryNumber % 10;
        binaryNumber /= 10;
        sum += last * pow(2, p);
        // ++p;
    }
    return sum;
}

int main(){
    long long int binaryNumber;
    printf("\nNhap so binaryNumber: ");
    scanf("%lli", &binaryNumber);
    printf("So thap phan: %d", nhiPhan(binaryNumber));
}