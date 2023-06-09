#include<stdio.h>

int main(){
	
	int i=1,N,sum=0;
	 printf("enter number of :");
	 scanf("%d",&N);
	 
	 do{
	 	
	 	sum=sum+i;
	 	i++;	
	 
	 	
	 }while(i<=N);
	 printf("%d\n",sum);
	 
	 return 0;
}