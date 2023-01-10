#include <stdio.h>
int add(int a, int b){
    int sum = a + b; 
    return sum;   
}
float subtract (float a, float b ){
    return a - b;
}
int main(){
    printf("sum of 3 and 4 is %d", add(3, 4));

    float first = 7.5, second = 8.5;//Input is float 
    int sum = add(first, second);// return int()
    printf("\nsum of %.2f and %.2f is %d ", first, second, sum);

    float f1 = 4.5, f2 = 5.4;
    printf("\n Subtract of %.2f and %.2f is %.2f", f1, f2, subtract(f1, f2));


}