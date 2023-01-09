/*
    Đảo ngược chuỗi nhập từ bàn phím sử dụng hàm đệ quy.
 */

#include <stdio.h>

/*
    Giả sử input là "abc":
    1. Nhập ký tự a
    2. Nhập ký tự b
    3. Nhập ký tự c
    4. Ấn enter => chính là '\n'
    5. In c
    6. In b
    7. In a

 */

void Reverse(){
    char c;
    scanf("%c", &c);
    if(c != '\n'){
        Reverse();
        printf("%c", c);
    }
}

int main(){
    printf("Enter you sentence: ");
    Reverse();
}