#include <stdio.h>
#include <math.h>
int countDigit(int n){//1234 --> 4
    int count = 0;
    while (n>0){
        n /= 10;//123//12//1//0
        ++count;//1//2//3//4
    }
    return count;
}
bool isArmstrong(int n){
    //1^ 4 + 2^4 + 3^4 + 4^ 4 = 1234
    int sum = 0;
    int tpm = n;
    int mu = countDigit(n);
    int last;
    while (tpm>0){
        last = tpm % 10;
        tpm /= 10;
        sum += pow(last, mu);
    }
    if(sum == n) {return true;}
    return false;
}
int main(){
    int n;
    printf("\nNhap so n: "); 
    scanf("%d",&n);
    //printf("\nCo 4 ki tu so nhap tu ban phim: %d", countDigit(n));
    if(isArmstrong(n) == true){
        printf("\n%d la so Armstrong ", n);
    }else{
        printf("\n%d KHONG la so Armstrong ", n);
    }
}