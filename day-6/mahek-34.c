# include<stdio.h>
int main(){
	 
	 int a,b,c,d;
	 printf("enter first value (a) :");
	 scanf("%d",&a);
	 printf("enter second value (b) :");
	 scanf("%d",&b);
	 printf("enter third value (c):");
	 scanf("%d",&c);
	 printf("enter four  value (d) :");
	 scanf("%d",&d);
	 if(a>b)
	 {    if(a>c)
	      {   if(a>d)
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