#include<stdio.h>

int main(){
	
	int a,b;
	
	printf("enter number of :");
	scanf("%d",&a);
	
	printf("enter number of :");
	scanf("%d",&b);
	
	do{
		printf("%d\n",a);
		a+=4;
	}while(a<=3000);
	return 0;
}