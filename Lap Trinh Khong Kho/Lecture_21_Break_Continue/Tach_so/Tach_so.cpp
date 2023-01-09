#include <stdio.h>
// 12345
int main()
{
    int number;
    printf("\nNhap number = ");
    scanf("%d", &number);
    int c;
    while (number !=0 )
    {
        c = number % 10;//1234             --> 450 %10 = 0  --> 45%10 = 5 --> 4%10 = 4
        number /= 10;//number = number /10 --> 450 /10 = 45 --> 45/10 = 4 
        printf("%d\n", c);
    }
}