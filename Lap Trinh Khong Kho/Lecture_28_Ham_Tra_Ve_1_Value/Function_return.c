#include <stdio.h>
#include <limits.h>
int minTwoNumber(int a, int b){
    return (a<b?a:b);
}
int maxTwoNumber(int a, int b){
    return (a>b?a:b);
}
int minThreeNumber(int a, int b, int c){
    return c<minTwoNumber(a, b)?c:minTwoNumber(a, b);
}
int maxThreeNumber(int a, int b, int c){
    int m = maxTwoNumber(a, b);
    int ans = maxTwoNumber(m, c);
    return ans;
}
int main(){
    int firstNumber,secondNumber, threeNumber;
    printf("\nNhap so thu nhat: "); scanf("%d", &firstNumber);
    printf("\nNhap so thu hai: "); scanf("%d", &secondNumber);
    printf("\nNhap so thu ba: "); scanf("%d", &threeNumber);
    // 3 4 9
    //check
    // printf("\nSo nho nhat trong 2 so: %d", minTwoNumber(firstNumber, secondNumber));
    // printf("\nSo lon nhat trong 2 so: %d", maxTwoNumber(firstNumber, secondNumber));
    
     printf("\nSo nho nhat trong 3 so: %d", minThreeNumber(firstNumber, secondNumber, threeNumber));
     printf("\nSo nho nhat trong 3 so: %d", maxThreeNumber(firstNumber, secondNumber, threeNumber));

}