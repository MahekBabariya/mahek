#include<stdio.h>

int main(){
	
	int n,last,sum;
	
	printf("enter number of :");
	scanf("%d",&n);
	
	last=n%10;
	
	while(n>9){
		n=n/10;
	}
	sum=n+last;
	printf("%d\n",sum);
	return 0;
}