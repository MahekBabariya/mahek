#include<stdio.h>

int main(){
	
	int i,count=0;
	printf("enter value of :- ");
	scanf("%d",&i);
	do{
		i=i/10;
		count++;
	}while(i!=0);
	printf("%d",count);
	return 0;
}