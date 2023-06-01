#include<stdio.h>

int main(){
	int x;
	int y;
	int sum;
	printf("enter first value:");
	scanf("%d",&x);
	
	printf("enter second value:");
	scanf("%d",&y);
	

	sum = (x*x*x) + ((3*x*y)*(x+y)) + (y*y*y);
    printf("ans = %d",sum);
    return 0;
    
}