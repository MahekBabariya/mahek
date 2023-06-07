#include<stdio.h>

int main(){
	
	char a;
	
	 printf("enter month name :-");
	 scanf("%c",&a);
	

	
	switch(a){
		 
		 case 'j':
		 	printf("january");
		 	break;
		 	 
		 case 'f' :
		 	printf("february");
		 	break;
		 	
		 case 'm' :
		 	printf("march");
		 	break;
		 	
		 case 'a' :
		 	printf("april");
		 	break;
		 	
		 case 'M' :
		 	printf("may");
		 	break;
		 	
		 case 'J' :
		 	printf("jun");
		 	break;
		 	
		 case 'u' :
		 	printf("july");
		 	break;
		 	
		 case 'A' :
		 	printf("august");
		 	break;
		 	
		 case 's' :
		 	printf("september");
		 	break;
		 	
		 case 'o':
		    printf("october");
		    break;
		    
		 case 'n' :
		 	printf("november");
		 	break;
		 	
		 case 'd' :
		 	printf("december");
		 	break;
		 	
		 default :
		 	printf("invalid number");
		 	break;
		 	
		 		 
	}
	
      	return 0;
	
	
}
	
    