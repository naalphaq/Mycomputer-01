#include <stdio.h>

int sumNoRecursion(int n){
    int sum = 0;
    for(int i  = 1; i<=n; i++){
        sum += i;
    }
    return sum;
}
int sumRecursion(int n){
    if(n == 0) {
        return 0;
    }
    return n + sumRecursion(n-1);
}
/*
    Giải thích hàm đệ quy
    Giả sử n = 4
    4 + SumRecursion(3)
    4 + 3 + SumRecursion(2)
    4 + 3 + 2 + SumRecursion(1)
    4 + 3 + 2 + 1 + SumRecursion(0)
    4 + 3 + 2 + 1 + 0
*/
int main(){
    int n;
    printf("\nNhap n: "); scanf("%d", &n);
    // int sum = sumNoRecursion(n);
    // printf("sumNoRecursion is %d", sum);

    int sum = sumRecursion(n);
    printf("sumRecursion is %d", sum);
    
}