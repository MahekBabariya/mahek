# include<stdio.h>

int main(){
	
	 int a,b,c,d;
	 
	printf("enter value  a:");
	 scanf("%d",&a);
	
	
	 printf("enter valuem b :");
	 scanf("%d",&b);
	 
	 printf("enter value c :");
	 scanf("%d",&c);
	 
	 
	 printf("enter value d :");
	 scanf("%d",&d);
	 
	 (a>b)?(a>c)?(a>d)? printf("a is max") : printf("d is max") : (c>d) ? printf("c is max") : ("d is max")
	        :(b>c)?(b>d)? printf("b is max") : printf("d is max") : (c>d) ? printf("c is max") : ("d is max");
	return 0;	 
}