/*
    Chuyển cơ số 8 sang cơ số 10
 */

/*
    Cách chuyển 8 sang 10
    n = 144
    4 * 8 ^ 0
    4 * 8 ^ 1
    1 * 8 ^ 2
    = 100
 */

#include <stdio.h>
#include <math.h>

int Oct2Dec(int number){
    int p = 0;
    int decNumber = 0;
    while(number > 0){
        decNumber += (number % 10) * pow(8, p);//144 --> sum = 4 * 8^0 + 4 * 8^1 + 1 * 8^2
        p++;
        number /= 10;
    }
    return decNumber;
}

int main(){
    int octNumber;
    printf("\nNhap so o co so 8: ");
    scanf("%d", &octNumber);

    printf("\nDec = %d", Oct2Dec(octNumber));
}