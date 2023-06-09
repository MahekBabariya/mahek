#include<stdio.h>

int main(){
	
	int n,i=1;
	printf("enter value of :");
	scanf("%d",&n);
	
	do{
		printf("%d\n",n);
		n--;
	}while(n>=i);
	return 0;
}