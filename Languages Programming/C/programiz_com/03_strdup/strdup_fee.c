#include <stdio.h>
#include <string.h>
#include <conio.h>
void main(void){
	//Cap phat bo nho tinh
	char name[500] = "anhquoc.code";
	printf("%s", name);

	//toi uu duoc bo nho nho bo nho dong
	char *s; 
	s = strdup("vncoding.net");//char *name; who->name = strdup(name);
	if(s){
		printf("\ns = %s", s);
		free(s);
	}
	getch();
}

