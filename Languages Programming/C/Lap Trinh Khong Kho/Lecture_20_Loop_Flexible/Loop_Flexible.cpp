#include <stdio.h>

int main(){
    int number;
    printf("\nNhap number = ");
    scanf("%d", &number);
    int last = number;
    // Vòng lặp for
    for(;last > 9;){ // --> 450 >9 --> 450/10 = 45 --> 45 >9 --> 45/10 = 4 (4.5) --> 4>9 --> sai --> kết thúc for
        last /= 10; // last = last / 10 --> 
    }
    printf("Chu so dau tien cua %d la %d", number, last);//Giá trị cuối của last --> sau khi kết thúc for --> last = 4
}