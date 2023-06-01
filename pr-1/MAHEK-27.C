#include<stdio.h>
#include<conio.h>
int main(){
       int a=110;
       int b=210;
       int camp;
       clrscr();
	camp=a;
	a=b;
	b=camp;
	printf("a : %d\n",a);
	printf("b : %d\n",b);
	getch();
	return 0;
}