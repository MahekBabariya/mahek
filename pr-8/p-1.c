#include<stdio.h>

void swap(int *n1,int *n2){
	
	int n3;
	
   	 n3 = *n1;
	*n1 = *n2;
	*n2 = n3;
	
	printf("a : %d\n",*n1);
	printf("b : %d\n",*n2);
}

int main(){
	int a,b;
	
	printf("enter a : ");
	scanf("%d",&a);
	
	printf("enter b : ");
	scanf("%d",&b);
	
	swap(&a,&b);
	
	return 0;
}