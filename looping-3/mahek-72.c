#include<stdio.h>

int main(){
	
	int i,n;
	printf("enter number of :");
	scanf("%d",&n);
	for(i=1;n>0;n-=2){
		printf("%d\n",n);
	}
	return 0;
}