#include<stdio.h>

int main(){
	
	int a,b,c,d;

	printf("enter the first number:-");
	scanf("%d",&a);
	
	printf("enter the second  number:-");
	scanf("%d",&b);
	
	printf("enter the third number:-");
	scanf("%d",&c);
	
	printf("enter the four number:-");
	scanf("%d",&d);
	
	if(a>b)
	{  if(a>c)
	{     if(a>d)
	 {    printf("a is max\n");
			  }
			  else
			  {    printf("d is max\n");
			  }
	      
		  }
		   else
		  {     if(c>d)
		        {    printf("c is max\n");
		        
				}
				else
				{   printf("d is max\n");
				}
		  }
		   
	 }
	 else
	 {     if(b>c)
	       {    if(b>d)
	            {   printf("b is max\n");
	            
				}
				else
				{   printf("d is max\n");
				}
		   }
		   else
		   {    if(c>d)
		        {   printf("c is max\n");
				}
				else
				{   printf("d is max\n");
				}
		   }
    }
       return 0;

	 
}
	
	