#include <stdio.h> // standard input output
int main(){
 
    // Xuất printf()
    printf("Hello World!");
 
    // Nhập 1 số nguyên
    int a;
    printf("\nNhap a = ");
    scanf("%d", &a); // đừng quên dấu &
 
    // xuất có định dạng (format)
    printf("Gia tri a = %d", a); // Ctrl + /
 
    float b;
    printf("\nNhap b = ");
    scanf("%f", &b); // đừng quên dấu &
 
    // xuất có định dạng (format)
    printf("Gia tri b = %.2f", b);
 
    char c;
    printf("\nNhap c = ");
    scanf("%d", &c); // đừng quên dấu &
 
    // xuất có định dạng (format)
    printf("Gia tri c = %c", c);
 
    // Nhập nhiều biến đồng thời
 
    int a1, a2;
 
    printf("\nHay nhap a1 va a2: ");
    scanf("%d%d", &a1, &a2);
    // Xuat format
    printf("\nGia tri \"a1\" = %d\nGia tri \"a2\" = %d", a1, a2);
 
    // In ra tiếng kêu bíp
    // printf("a\bd");
}