#include<stdio.h>

int main(){
	int i=1,n,fact=1;
	
	printf("enter number of : ");
	scanf("%d",&n);
	
	do{
		fact*=n;
	
		n--;
	}while(n>=1);
		printf("factorial = %d",fact);
	return 0;
}