#include<stdio.h>

int main(){
	
	int n,fact=1;
	printf("enter number :");
	scanf("%d",&n);
	while(n>=1){
		
		fact*=n;
		n--;
	}
	printf("factorial = %d\n",fact);
	return 0;
}