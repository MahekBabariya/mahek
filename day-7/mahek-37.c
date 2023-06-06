#include<stdio.h>

int main(){
	
	int a,b,c;
	
	printf("enter  the first value a : ");
	scanf("%d",&a);
	
	printf("enter the second value b : ");
	scanf("%d",&b);
	
	printf("enter the third value c : ");
	scanf("%d",&c);
	
	(a>b)? 
	  (a>c)?
	     printf("a is max")
		 
	  : printf("c is max")
	  
    : (b>c)? printf("b is max")
	
	   : printf("c is max");
	return 0;
}