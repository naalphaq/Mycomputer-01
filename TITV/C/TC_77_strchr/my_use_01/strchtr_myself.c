// Con tro cua .... --> tro 	LAM VIEC dia chi bien cua gia tri CU TH --> xuat ra gia tri hoAC....
#include "stdio.h"
#include "string.h"
char* my_strchr(char x1[], int tk)//ham con tro my_strchr() --> return --> dia chi 
{
    for (int i = 0; i < strlen(x1); i++)
    {
        if (x1[i] == tk)
        {
            return &x1[i];//tra ve dia chi cua gia tri x1[i] --> char * my_strchr ham con tro
        }
    }
}
int main()
{
    char ten[100] = "ANH.QUOC";
    int fd;
    printf("\nNhap ky tu tim kiem: ");
    scanf("%c", &fd);
    char *x2 = my_strchr(ten, fd);// khai bao con tro x2 --> gan dia chi my_strchr(ten, '.')
    //con tro --> nhan vao: dia chi bien
    //tra ve: dia chi bien hoac gia tri

    printf("\nChuoi s la : %s", ten);
    printf("\nCan tim :  %s", x2 );
}
