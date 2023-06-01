#include<stdio.h>
#include<conio.h>
int main(){
      int a=150;
      int b=260;
      clrscr();
      a=a+b;
      b=a-b;
      a=a-b;
      printf("a : %d\n",a);
      printf("b : %d\n",b);
      getch();
      return 0;
}