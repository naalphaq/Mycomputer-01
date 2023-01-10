/*
    Lệnh return
    Lệnh exit() // thoat luon chuong trinh main tra gia tri tren 
 */

#include <stdio.h>
#include <stdlib.h>
int function(){
    int a = 5;
    return a;
    printf("\na = %d", a);
}

void foo(){
    printf("\nThis is a sentence!");
    exit(0);//
    printf("\nThis is other sentence!");
}
void fii(){
    printf("\nThis is .....");
    return;
    printf("\nNo to printf if return; is front of");
}

int main(){
    foo();
    printf("\nExit program...");//exit (0) trong foo() bo luon in "Exit program..."
}