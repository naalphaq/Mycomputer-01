#include <stdio.h>
int main(){
    int x, y;
    printf("\nNhap so x: ");
    scanf("%d", &x);
    printf("\nNhap so y: ");
    scanf("%d", &y);
    float s = 0; 
    s = x + y;
    printf("sum %d + %d = %.2f", x, y, s);
    return 0;
}