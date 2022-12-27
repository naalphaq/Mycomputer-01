#include "stdio.h"
int value, x;
long nt array[2][3];


struct record
{
    char name[24];
    int id_number;
} students[100];

x = sizeof(int);  // this would set x = 4
                  // since an int is 4 bytes
x = sizeof(students); // x = 100 Elements * 24 char 
                  // + sizeof(int)
                  // x = 100 * (24 + 4) = 2800
