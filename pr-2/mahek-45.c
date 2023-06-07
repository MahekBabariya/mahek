#include<stdio.h>

int main(){
	
	char a;
	printf("enter week name a :-");
	scanf("%c",&a);
	
	switch(a){
		
		case 'm':
			printf("monday");
			break;
			
		case 't' :
			printf("tuesday");
			break;
			
		case 'w' :
			printf("wednesday");
			break;
			
		case 'T' :
			printf("thursday");
			break;
		
		case 'f' :
			printf("friday");
			break;
			
		case 's' :
			printf("saturday");
			break;
			
		case 'S' :
			printf("sunday");
			break;
			
		default :
			printf("invalid! input");
			break;
			}
		
		return 0;
}