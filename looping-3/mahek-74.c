#include<stdio.h>

int main(){
	
	int i,n,sum=0;
	
	printf("enter number of :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
		{
		
		sum+=i;
		}
	printf("%d\n",sum);
	return 0;
}