#include<stdio.h>
 int main(){
 	
 	int a,b,c;
 	printf("enter   first a:");
 	scanf("%d",&a);
 	printf("enter  second b:");
 	scanf("%d",&b);
 	printf("enter  thrid  c:");
 	scanf("%d",&c);
 	 if(a>b){
 	 	if(b>c){
 	 		printf("c is min\n");
		  }
		  else{
		  	printf("b is min\n");
		  	
		  }
	  }else{
	  	if(a>c){
	  		printf(" c is min\n");
		  }
		  else{
		  	printf("a is min");
		  }
	  }
	    return 0;
 }