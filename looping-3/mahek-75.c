#include<stdio.h>

int main(){
	
	int n,factorial=1;
	printf("enter a positive intiger :");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
	
	factorial*=i;
}
     printf("%d\n",factorial);
     return 0;
}