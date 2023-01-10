#include <stdio.h>
int main(){
    
    for(int i = 2; i < 10 ; i++){
        for(int x = 1; x < 11; x++){
            printf("%d x %d = %d\n", i, x, i*x);
        }
    }
}