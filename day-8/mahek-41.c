#include<stdio.h>

int main(){
	
	int a,b,c,d;
	
	  printf("Welcome to the Restaurant!\n");
	 
	    printf("1.acroom\n");
	    printf("2.none acroom\n\n");
	    
	    printf("enter your room choice : ");
	    scanf("%d",&a);
	
		 switch(a){
	 	
	 	case 1:
	 		printf("your like to acroom\n\n");
	 		break;
	 	case 2:
	 		printf("your like to none acroom\n\n");
	 		break;
	 		
	 	default :
	 		printf("invalid! number");
	 		break;
	 		
}

      printf("1.veg food\n");
      printf("2.nonveg food\n");
      
       printf("enter your food choice : ");
	   scanf("%d",&b);
	 
	 switch(b){
	 	
	 	case 1:
	 		printf("1.chinise food\n");
	 		printf("3.panjabi food\n");
	 		printf("4.macecikan food\n");
	 		
	 		printf("enter your food choice :");
	 		scanf("%d",&b);
	 		
	 		switch(b){
	 			
	 			case 1:
	 				printf("chinise food buy one gert one free\n");
	 				break;
	 				
	 			case 3:
	 				printf("panjabi food only 599\n");
	 				break;
	 				
	 			case 4:
	 				printf("macecikan food only 299 (any one)\n");
	 				break;
	 				
	 			
	 	case 2:
	 		printf("nonveg food is not avalibal at now\n");
	 		break;
	 		
	 		
	 			
			 }
	 }
	 
	  printf("1.pepsi\n");
	  printf("2.coke\n");
	  printf("3.Lemonade\n");
	  
	  printf("enter your drink choice :");
	  scanf("%d",&c);
	  
	  switch(c){
	  	
	  	 case 1:
	  	 	printf("You ordered a pepsi.\n");
	  	 	break;
	  	 	
	  	 case 2:
	  	 	printf("You ordered a coke.\n");
	  	 	break;
	  	
	  	 case 3:
	  	 	printf("You ordered a lemonade.\n");
	  	 	break;
	  	 	
	  	 	default:
	 		printf("invalid! number");
	 		break;
	 		
	 		
	  	 	
	  	 	
	  }
      
	 
	  printf("1.case pament\n");
	  printf("2.online pament\n\n");
	 
	 printf("enter your pament choice : ");
	 scanf("%d",&d);
	 
	 
	 switch(d){
	 	
	 	case 1:
	 		printf("no extra charge");
	 		break;
	 	case 2:
	 		printf("1.googlepay charge only 5rs\n\n");
	 		printf("2.phonepay charge only 10rs\n\n");
	 		
	 		printf("enter your pament choice :");
	 		scanf("%d",&d);
	 		
	 switch(d){
	 	case 1:
	 		printf("googlepay charge only 5rs\n\n");
	 		break;
	 	case 2:
		 
	 		printf("phonepay charge only 10rs\n\n");
	 		break;
	 		
	 	default:
	 		printf("invalid! number");
	 		break;
	 		
	 		
	    printf("Thank you for visiting the Restaurant. Goodbye!\n");

	 		
	 }
     default :
	 		printf("invalid! number");
	 		break;
	 				
	 }
	 return 0;
}