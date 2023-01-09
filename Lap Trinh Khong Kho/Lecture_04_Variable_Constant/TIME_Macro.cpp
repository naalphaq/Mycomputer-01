#include <stdio.h>
int main(){
    printf("Current Date: %s",__DATE__);
    printf("\nCurrent Time: %s",__TIME__);
    printf("\nCurrent Line: %d",__LINE__);
    printf("\nCurrent File: %d",__FILE__);
}