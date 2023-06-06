# include<stdio.h>

int main(){
	
	 int a,b,c,d,e;
	 
	printf("enter value  a:");
	 scanf("%d",&a);
	
	
	 printf("enter valuem b :");
	 scanf("%d",&b);
	 
	 printf("enter value c :");
	 scanf("%d",&c);
	 
	  
    
	 printf("enter value d :");
	 scanf("%d",&d);
	 
	 
	 printf("enter value e :");
	 scanf("%d",&e);
	 
	 (a>b)?(a>c)?(a>d)?(a>e)? printf("a is max") : printf("e is max") : (d>e) ? printf("d is max") : ("e is max")
	            :(c>d)?(c>e)? printf("c is max") : printf("e is max") : (d>e) ? printf("d is max") : ("e is max")         
		  :(b>c)?(b>d)?(b>e)? printf("b is max") : printf("e is max") : (d>e) ? printf("d is max") : ("e is max")
	            :(c>d)?(c>e)? printf("c is max") : printf("e is max") : (d>e) ? printf("d is max") : ("e is max");
	return 0;	 
}