#include<stdio.h>
#include<conio.h>
int main(){
      int gs,bs,da,ta,hra;
      clrscr();
      printf("enter basic salary:");
      scanf("%d",&bs);
      hra=(10*bs)/100;
      da=(5*bs)/100;
      ta=(8*bs)/100;
      gs=bs+da+ta+hra;
      printf("gross salary=%d",gs);
      getch();
      return 0;
}