#include<stdio.h>

int main(){
	
	int a=50;
	int b=80;
	int c;
	int *x,*y;
	
	x= &a;
	y= &b;
	
	 c =*y;
	*y =*x;
	*x = c;
	
       printf("a=%d,b=%d\n\n",a,b);
    return 0;
}
    
    
