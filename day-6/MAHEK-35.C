#include<stdio.h>

int main(){
	  int a,b,c,d,e;
	
	  printf("enter the first  value of a :- ");
	  scanf("%d",&a);
	   
	  printf("enter the second  value of b :- ");
	  scanf("%d",&b);
	  
	  printf("enter the thrid value of c :- ");
	  scanf("%d",&c);
	
	  printf("enter the third value of d :- ");
	  scanf("%d",&d);
	  
	  printf("enter the four value of  e :- ");
	  scanf("%d",&e);
	  
	  if(a<b){
	  	 
	  	 if(a<c){
	  	 	
	  	 	if(a<d){
	  	 		
	  	 		if(a<e){
	  	 			 
	  	 			 printf("a is min\n ");
	  	 			
				   }
				   else{ 
				      printf(" e is min\n ");
				   }
				   
			   } else{
			   	    
			   	    if(d<e){
			   	    	
			   	    	printf("d is min\n");
					   }else{ 
					   
					   printf("e is min\n");
					   }
			   }
		   }else{
		   	
		   	 if(c<d){
		   	 	
		   	 	 if(c<e){
		   	 	 	printf(" c is min\n");
		   	 	 	
					 }else{
					 	printf("e is min\n");
					 }
				}else{
					if(d<e){
						printf("d is min\n");
						
					}else{
						printf("e is min\n");
					}
				}
		   }
	  	 
	  	 
	  	
	  }else{
	  	 if(b<c){
	  	 	if(b<d){
	  	 		if(b<e){
	  	 			printf("b is min\n");
				   }else{
				   	printf("e is min\n");
				   }
			   }else{
			   	 if(d<e){
			   	 	printf("d is min\n");
					}else {
						printf("e is min\n");
					}
			   }
		   }else{
		   	   if(c<d){
		   	   	if(c<e){
		   	   		printf("c is min\n");
					  }else{
					  	printf("e is min\n");
					  }
				  }else{
				  	if(d<e){
				  		printf("d is min\n");
					  }else{
					  	printf("e is min\n");
					  }
				  }
		   }
	  }
	      return 0;
	  }