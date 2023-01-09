#include <stdio.h>
//224 268 
int main(){
    int number;
    printf("\nNhap number = ");
    scanf("%d", &number);

    bool allEven = true; // Giả sử ban đầu là đúng
    int last;
    while(number > 0){
        last = number % 10; // lấy c/số cuối của number

        if(last % 2 == 1){
            allEven = false;
            break; // thoát vòng lặp
        }
        number /= 10; // bỏ chữ số cuối của number
    }
    
    if(allEven){
        printf("\nToan chu so chan!");
    }else{
        printf("\nCo chu so le!");
    }

}