#include<stdio.h>

int main(){
	char val;
	printf("enter value : ");
	scanf("%c",&val);
	if(val>='A'&&val<='Z'){
     	val+=32;	
	}
	   printf("%c",val);
	   
	return 0;
}