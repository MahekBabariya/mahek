#include<stdio.h>

int main(){
	
	int i=1,n;
	printf("enter nuber of :");
	scanf("%d",&n);
	
	do{
		
		printf("%d\n",n);
		n-=2;
	}while(n>1);
	
	return 0;
}